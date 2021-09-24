#include<stdio.h>

int swapBits(int n, int p1, int p2);

int main () {
    int n;
    
    scanf("%d", &n);
    
    printf("After swap: %d\n", swapBits(n,5,1) );
}

int swapBits(int n, int p, int q)
{
    //left-shift 1 p1 and p2 times
    //and using XOR
    
    //swap only if bits are different
    if (((n & (1 << p)) >> p) ^ ((n & (1 << q)) >> q)){
        n ^= 1 << p;
        n ^= 1 << q;
    }
    return n;
}

