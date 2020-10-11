#include <math.h>
#include <stdio.h>

#define TRUE 1
#define FALSE 0

/*
 ** This solution aims to try every numbers until we detect 10001 prime numbers
 */

int isEven(int nb) {
  return nb % 2 == 0;
}

/*
 ** A prime number is a number that can only be divisible by 1 or itself
 ** Facts about prime numbers:
 **   - 1 is not a prime.
 **   - All primes except 2 are odd.
 */
int isPrime(int nb) {
  int root;

  if (nb == 1) {
    return FALSE;
  } else if (nb == 2 || nb == 3) {
    return TRUE;
  } else if (isEven(nb)) {
    return FALSE;
  }
	
  // square root of `nb` rounded to the greatest integer `root` so that:
	// root * root <= nb
  root = ceil(sqrt(nb));

  for (int f = 3; f <= root; f += 2) {
    if (nb % f == 0) {
      return FALSE;
    }
  }
  return TRUE;
}

/*
 ** `count` starts to 1 because we already know that 2 is prime
 ** but it will not be computed in this loop as we skip all even numbers
 */
int main(void) {
  int limit = 10001;
  int count = 1;
  int result;

  for (int nb = 1; count < limit; nb += 2) {
    if (isPrime(nb)) {
      count++;
      result = nb;
    }
  }

  printf("%d\n", result);
}
