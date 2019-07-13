//Checking whether a given N is even or odd

#include<stdio.h>
#include<stdlib.h>

int main()
{

int n;
scanf("%d",&n);

int n1 = n>>1;

//(N|0) ~ (N & 0x0F)  can't be used as well as they return N back 
if((n & 1))
  printf("The number is odd and %d\n",(n&1));
else
  printf("The number is even\n");

if((n1 & 1))
   printf("The number is odd and %d\n",(n1&1));
else
  printf("The number is even\n");
}
