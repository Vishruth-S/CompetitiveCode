#include <math.h>
#include <stdio.h>

#define TRUE 1
#define FALSE 0

/*
 ** This solution aims to try every numbers
 **  and add primes to the sum when we encountered
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
 ** sum start at 2 because 2 is prime and we will not compute this value
 ** in the loop
 */
int main(void) {
  int limit = 2000000;
  long sum = 2;

  for (int nb = 1; nb < limit; nb += 2) {
    if (isPrime(nb)) {
      sum += nb;
    }
  }

  printf("%li\n", sum);
}
