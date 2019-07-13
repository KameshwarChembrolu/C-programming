#include<stdio.h>
#include<stdlib.h>
//Pack 8 bit numbers into a 32 bit number

int main()
{
 int a = 0,b = 0,c = 0,d = 0;
 scanf("%d %d %d %d",&a,&b,&c,&d);
 a = a<<24;
 b = b<<16;
 c = c<<8;

 int combined = 0;

 combined = a | b | c | d;

 printf("%d\n",combined);
}



