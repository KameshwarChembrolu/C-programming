#include<stdio.h>
#include<stdlib.h>
//Boundary condtions should be taken care of
//This has a complexity of O(n)

void smallest_number(int a1[1000], int size1, int minimum, int *result1);

int main()
{
  int a[10];
  int min = a[0];
  int size = (sizeof(a)/4);
  int index = 0;
  int result[2];
  //int index_array[2];

for(int i = 9; i>=0; i--)
{
    a[i] = 9 - i;
}

for (int i = 0; i <=9; i++) {

  printf("%d \n",a[i]);
}

a[3] = -4;
a[5] = -8;
//a[877] = -21;

smallest_number(a,size,min,result);


//printf("The smallest number in the array is: %d \n and it's index is: %d\n and the second highest is: %d",*result,*(result+1),*(result+2));
}

void smallest_number(int a1[10], int size1, int minimum, int *result1)
{
  //int index1 = 0;
  int min2;

  for(int i=0; i<9; i++)//these are the right set of boundary conditions
  {

    if(a1[i+1] < minimum)
    {
      min2 = minimum;
      minimum = a1[i+1];
      //index1 = i+1;
    }
    else if(a1[i+1] < min2)
    {
      min2 = a1[i+1];
    }

  }
  result1[0] = minimum;
  //result1[1] = index1;
  result1[1] = min2;
  printf("%d %d\n",minimum,min2);

}
