/*
 ** Using the combinatorial solution.
 ** As we know that the grid is of size `gridSize`,
 **  there will be exactly `gridSize` movements along the X and the Y axis
 ** So we need to find the number of different combination for all those movements.
 **
 ** The binomial distribution formula can help us here.
 ** The combination of `gridSize` elements by 2 * `gridSize` can be noted like this:
 ** (2 * gridSize)! / (gridSize!)^2
 */

function factorial(n) {
	if (n === 0 || n === 1) {
		return 1;
	}

	let sum = 1;
	for (let i = 2; i <= n; i++) {
		sum = sum * i;
	}

	return sum;
}

function countPaths(gridSize) {
	return Math.floor(factorial(gridSize * 2) / Math.pow(factorial(gridSize), 2));
}

console.log(countPaths(20));
