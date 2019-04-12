#include <stdio.h>
#include <stdint.h>

uint64_t swapLong(void *X) {
  uint64_t x = (uint64_t) X;
  x = (x & 0x00000000FFFFFFFF) << 32 | (x & 0xFFFFFFFF00000000) >> 32;
  x = (x & 0x0000FFFF0000FFFF) << 16 | (x & 0xFFFF0000FFFF0000) >> 16;
  x = (x & 0x00FF00FF00FF00FF) << 8  | (x & 0xFF00FF00FF00FF00) >> 8;
  return (x);
}

int main(void) {
  char a;
  printf("the address of a is 0x%016llx\n", (uint64_t)(&a));
  printf("swapping all the bytes gives 0x%016llx\n",(uint64_t)swapLong(&a));
}
