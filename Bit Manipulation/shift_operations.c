#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[]) {

unsigned int c = 0x23;
// 00100011
  c = c >> 1; //Expected answer : 00010001 : 11
  //f = f >> 1; //Expected answer : 11
  //printf(c);
  printf(c);
}
