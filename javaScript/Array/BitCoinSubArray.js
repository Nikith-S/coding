// function longestBitonicSubarray(arr) {
//   let n = arr.length;
//   if (n === 0) return [];

//   let inc = new Array(n).fill(1); // Length of increasing sequence
//   let dec = new Array(n).fill(1); // Length of decreasing sequence

//   // Step 1: Compute increasing sequence length
//   for (let i = 1; i < n; i++) {
//     if (arr[i] > arr[i - 1]) {
//       inc[i] = inc[i - 1] + 1;
//     }
//   }

//   // Step 2: Compute decreasing sequence length
//   for (let i = n - 2; i >= 0; i--) {
//     if (arr[i] > arr[i + 1]) {
//       dec[i] = dec[i + 1] + 1;
//     }
//   }

//   // Step 3: Find the maximum bitonic length and its index
//   let maxLen = 0,
//     maxIndex = 0;
//   for (let i = 0; i < n; i++) {
//     let bitonicLen = inc[i] + dec[i] - 1;
//     if (bitonicLen > maxLen) {
//       maxLen = bitonicLen;
//       maxIndex = i; // Store the peak index
//     }
//   }

//   // Step 4: Extract the longest bitonic subarray
//   let start = maxIndex - (inc[maxIndex] - 1); // Start of increasing part
//   let end = maxIndex + (dec[maxIndex] - 1); // End of decreasing part
//   let bitonicSubarray = arr.slice(start, end + 1);

//   return { maxLen, bitonicSubarray };
// }

// // Example usage:
// const arr = [10, 8, 9, 15, 12, 6, 7];
// const result = longestBitonicSubarray(arr);
// console.log(result);
// // Output: { maxLen: 5, bitonicSubarray: [8, 9, 15, 12, 6] }

// to find the cube from the given range and add it
// Input:
// Range: 2 5
// output: 224;
// Explanation: 2^3 + 3^3 + 4^3 + 5^3 = 224

// function cubeSum(a, b) {
//   let sum = 0;
//   for (let i = a; i <= b; i++) {
//     sum += Math.pow(i, 3);
//   }
//   return sum;
// }

// console.log(cubeSum(2, 5));

// var count = 0;
// while (count < 10) {
//   console.log(count);
//   count++;
// }

// const x = "he".split(",");
// console.log(x);

// var objA = { prop1: 40 };
// var objB = objA;
// objB = { prop1: 43 };
// console.log(objA);

// let person = { name: "nikith" };
// let memebers = person;
// memebers.name = null;
// console.log(person); // {name: 'nikith'}

// console.log([1, 2] + [2, 3]);

// console.loglog(!+[] + [] + ![]); // truefalse
// console.log([] + ![]);
// console.log(+[] + []);

// let value =String(human)
// console.log(value);

console.log([10] == "10");

/*

*/