#include <stdio.h>
/*this program finds the smallest, biggest, and second biggest number of an the inputed array*/
//Cristian Cedeno
//N01369950


int findSmallest(int list[], int totalNum);
int findBiggest(int list[], int totalNum);
int findSecondBiggest(int list[], int totalNum, int big);
void sort(int list[], int totalNum);


int main(void) {

  int smallestNum, biggestNum, secondBiggestNum,total;
  int numbers[50];


  printf("Enter the number of elements to be in array: ");
  scanf("%d", &total);

  //scans list
  printf("Elements of array are: ");
  for(int i=0; i<total; i++)
  {
    scanf("%d", &numbers[i]);
  }



  smallestNum = findSmallest(numbers, total);
  printf("\nThe smallest number is: %d", smallestNum);
  

  biggestNum = findBiggest(numbers, total);
  secondBiggestNum = findSecondBiggest(numbers, total, biggestNum);
  printf("\nThe largest and second largest number is: %d, %d\n", biggestNum, secondBiggestNum);

  sort(numbers, total);

  printf("Sorted array is: ");


  for(int i=0; i<total; i++)
  {
    printf("%d", numbers[i]);

    if(i != total-1)
    {
      printf(",");
    }
  }

  return 0;
}



//finds the smallest
int findSmallest(int list[], int totalNum)
{
  int small = list[0];

  for( int i=0; i<totalNum; i++)
  {
    if(small > list[i])
    {
      small = list[i];
    }
  }
  
  return small;
}



//finds the biggest number
int findBiggest(int list[], int totalNum)
{
  
  int big = list[0];
  for( int i=0; i<totalNum; i++)
  {
    if(big < list[i])
    {
      big = list[i];
    }
  }
  return big;
}



//finds the second Biggest
int findSecondBiggest(int list[], int totalNum, int big)
{
  int secondBig = 0;
  for( int i=0; i<totalNum; i++)
  {
    if(list[i] != big && list[i] > secondBig)
    {
      secondBig = list[i];
    }
  }

  return secondBig;
}



//sorts list with bubble sort
void sort(int list[], int totalNum)
{
  int temp;
  for(int i=0; i<totalNum; i++){
    for(int j=0; j<(totalNum-i-1); j++)
    {
      if(list[j]>list[j+1])
      {
        temp = list[j];
        list[j] = list[j+1];
        list[j+1] = temp;
      }
    }
  }
  
}