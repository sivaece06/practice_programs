//C code for swapping given bits of a number
#include<stdio.h>
int swapBits(int n, int p1, int p2)
{
    //left-shift 1 p1 and p2 times
    //and using XOR
    n ^= 1 << p1;
    n ^= 1 << p2;
    return n;
}
 
//Driver Code
int main()
{
    printf("Result = %d", swapBits(5, 0, 1));
    return 0;
}
