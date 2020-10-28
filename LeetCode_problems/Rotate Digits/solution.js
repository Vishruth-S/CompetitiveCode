var IsGood = function (n) {
  let result = false;
  while (n > 0) {
    // Checking the last digit of the number by mod 10
    let digit = n % 10;
    // ignore 0, 1, 8; by themselves, no change
    if (digit === 3 || digit === 4 || digit === 7) return false;
    if (digit === 2 || digit === 5 || digit === 6 || digit === 9) result = true;
    // excluding the last digit
    n /= 10;
  }
  return result;
};

var rotatedDigits = function (N) {
  let count = 0;
  for (let i = 1; i <= N; i++) {
    if (IsGood(i)) count++;
  }
  return count;
};
