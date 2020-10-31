function leastLarger (array, n) {
    const larger = [];
    for (let i = 0; i < array.length; i++) {
        if (array[i] > array[n]) {
            larger.push(array[i]);
        }
    }
    const min = Math.min(...larger);
    return array.indexOf(min);

    //larger contains the elements of array which are larger then array[n]
    //min is the minimum of larger's elements
    //the function returns with the min's index in array
}

console.log(leastLarger([-1, -6, -4, -7, 9, -3, 6, 0], 2));

// n = 2
// array[n] = -4
// larger = [-1, 9, -3, 6, 0]
// min = -3
// array[5] = -3, so array.indexOf(min) = 5