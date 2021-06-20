#include <stdio.h>

int main()
{
     int n, i;
  printf("Enter a positive integer: ");
  scanf("%d", &n);

  for (i = 2; i <= n / 2; ++i) {
    // condition for non-prime
    if (n % i == 0) {
     printf("%d is not a prime number.", n);
      return 0;
    }
  }

      printf("%d is a prime number.", n);


  return 0;
}
