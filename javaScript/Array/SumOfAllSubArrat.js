function sumArray(arr) {
  let n = arr.length;
  let totalSum = 0;
  for (let i = 0; i < n; i++) {
    totalSum += arr[i] * (i + 1) * (n - i);
  }

  return totalSum;
}
console.log(sumArray([4, 5, 6]));
