#include <stdio.h>
#include <stdlib.h>
//#define my_sizeof(type) (char *)(&type+1)-(char*)(&type)

//#define my_sizeof(x) (char*) (&(((__typeof__(x) *)0)[1])) - (char *)(&(((__typeof__(x) *)0)[0]))
#define my_sizeof(x) (char*) (&(((__typeof__(x) *)0)[1])) - (char *)(&(((__typeof__(x) *)0)[0]))
#define OFFSET(type, m) (size_t)&(((type *)0)->m)

typedef struct
{
    unsigned int a:1;
    unsigned int b:1;
    unsigned int c:30;
    char f;
    char g;
    //int abc;
} Sbitfield;


int main(void) {
   int x = 10;
   char y = 'f';
   double z = 254748.23;
   //Sbitfield abc;
   
   printf("size of x: %d\n", my_sizeof(x));
   printf("size of y: %d\n", my_sizeof(y));
   printf("size of z: %d\n", my_sizeof(z));
   printf("size of structure: %d\n", my_sizeof(Sbitfield));
   printf("void ptr: %d\n", my_sizeof(void *));
   printf("offset: %d", OFFSET(Sbitfield,g) );
   return 0;
}
