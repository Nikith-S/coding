function amstrong(n) {
  let digit = n;
  let count = 0;

  // Count the number of digits
  while (digit !== 0) {
    count++;
    digit = Math.floor(digit / 10);
  }

  let sum = 0;
  digit = n;

  // Calculate the sum of powered digits
  while (digit !== 0) {
    let rem = digit % 10;
    sum += Math.pow(rem, count);
    digit = Math.floor(digit / 10);
  }

  // Check if the sum equals the original number
  return sum === n;
}

// Test cases
console.log(amstrong(153)); // true
console.log(amstrong(9474)); // true
console.log(amstrong(123)); // false
