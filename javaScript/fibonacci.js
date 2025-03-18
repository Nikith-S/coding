// function fib(n) {
//   if (n === 0) {
//     return 0;
//   }
//   if (n === 1) {
//     return 1;
//   }
//   let a = 0;
//   let b = 1;
//   for (let i = 2; i <= n; i++) {
//     let next = a + b;
//     a = b;
//     b = next;
//   }
//   return b;
// }

// console.log(fib(4));

// recusive function of fibonacci series
function recusiveFib(n) {
  if (n <= 1) {
    return n;
  }
  return recusiveFib(n - 1) + recusiveFib(n - 2);
}

console.log(recusiveFib(4));
