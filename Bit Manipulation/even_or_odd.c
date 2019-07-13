#include<stdio.h>
#include<stdlib.h>

int main()
{

int n;
scanf("%d",&n);
int c = 0 ;

while(n>=1)
{
 if(n%2 == 0)
{
  n = n/2;

}
 else
{
  c++;
  n = n/2;

}

}//end of while loop


printf("the value of c is: %d\n",c);
if(c%2 == 0)
   printf("even");
else
   printf("odd");


}//end of main
