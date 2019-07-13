#include<stdio.h>
#include<stdlib.h>

#define N 6

void missing_element(int N1, int *arr1);

int main()
{

 int arr[5] = {6,5,1,4,3};
 int N2 = N;

 missing_element(N2,arr);


}

void missing_element(int N1, int *arr1)
{
  int temp = 0;
  int count;
  int min = 1;

for(int i=0; i< N1-1; i++)
{
  
  temp++;

for(int j=0; j< N1-1; j++)
{
 	if(arr1[j] == temp)
 	 {
 		break;
 	 }
 	count++;

	if(count == N1-1)
	{
  		min = temp;
  		break;

	}

}//inner for loop

	if(count == N1-1)
	{
	   count = 0;
	   min = temp;
	   break;
	}
	count = 0;

}//outer for loop

printf("The missing value is :%d", min);

}//missing_element()
