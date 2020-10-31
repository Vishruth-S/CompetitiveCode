/*
 ** This solution aims to try every numbers
 **  and add primes to the sum when we encountered
 */

function isEven(nb) {
	return nb % 2 === 0;
}

/*
 ** A prime number is a number that can only be divisible by 1 or itself
 ** Facts about prime numbers:
 **   - 1 is not a prime.
 **   - All primes except 2 are odd.
 */
function isPrime(nb) {
	if (nb === 1) {
		return false;
	} else if (nb === 2 || nb === 3) {
		return true;
	} else if (isEven(nb)) {
		return false;
	}

	// square root of `nb` rounded to the greatest integer `root` so that:
	// root * root <= nb
	const root = Math.ceil(Math.sqrt(nb));

	for (let f = 3; f <= root; f += 2) {
		if (nb % f === 0) {
			return false;
		}
	}
	return true;
}

/*
 ** sum start at 2 because 2 is prime and we will not compute this value
 ** in the loop
 */
(() => {
	const limit = 2000000;
	let sum = 2;

	for (let nb = 1; nb < limit; nb += 2) {
		if (isPrime(nb)) {
			sum += nb;
		}
	}

	console.log(sum);
})();
