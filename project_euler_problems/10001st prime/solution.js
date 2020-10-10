/*
 ** This solution aims to try every numbers until we detect 10001 prime numbers
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
 ** `count` starts to 1 because we already know that 2 is prime
 ** but it will not be computed in this loop as we skip all even numbers
 */
(() => {
	const limit = 10001;
	let count = 1;
	let result;

	for (let nb = 1; count < limit; nb += 2) {
		if (isPrime(nb)) {
			count++;
			result = nb;
		}
	}

	console.log(result);
})();
