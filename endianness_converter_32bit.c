#include <stdio.h>

int main()
{
   unsigned int x=0xABCD1234;
   printf("Before: 0x%X\n", x);
   x = (x & 0x0000FFFF0000FFFF) << 16 | (x & 0xFFFF0000FFFF0000) >> 16;
   x = (x & 0x00FF00FF00FF00FF) << 8  | (x & 0xFF00FF00FF00FF00) >> 8;
   printf("After: 0x%X\n", x);
   
   return (0);
}
