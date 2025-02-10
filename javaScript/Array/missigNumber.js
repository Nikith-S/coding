// #to find the missing number in an array
function missingNumber(arr) {
  let n = arr.length + 1;
  const sn1 = (n * (n + 1)) / 2;
  let s1 = 0;
  for (let i of arr) {
    s1 += i;
  }
  return sn1 - s1;
}
console.log(missingNumber([1, 2, 4, 5]));
