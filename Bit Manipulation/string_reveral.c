//Reversing a hexadecimal number

#include<stdio.h>
#include<stdlib.h>

int main(){

   int *ptr;
   unsigned int a = 0x78345680;
   unsigned int res = 0;

   ptr = &a;
   unsigned char *ptr1;
   unsigned char b,b1;

  ptr1 =(unsigned char *)ptr;

  for(int i = 0; i<4; i++)
  {
    printf(" byte %d is : %x \n", i,*(ptr1+i));

    // bb1 is the number
    b = *(ptr1+i) & 0x0f;
    b1 = *(ptr1+i) >> 4;

    printf("\n The %x %x\n",b,b1);

    res = (((res | b) << 4) | b1);
    if(i!=3)
    res = res <<  4;
    printf("The final result is %0x \n",res);
  }




}
