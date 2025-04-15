// function sumArray(arr) {
//   let n = arr.length;
//   let totalSum = 0;
//   for (let i = 0; i < n; i++) {
//     totalSum += arr[i] * (i + 1) * (n - i);
//   }

//   return totalSum;
// }
// console.log(sumArray([4, 5, 6]));
// --------------------------------------------------------------------

// function captilize(str) {
//   let stringArray = str.split(" ");

//   let capitalizeFirst = stringArray.map((ele) => {
//     return ele.charAt(0).toUpperCase() + ele.slice(1);
//   });
//   return capitalizeFirst.join(" ");
// }

// console.log(captilize("hi i am nikith"));
// --------------------------------------------------------------------

// function lof() {
//   console.log(abc);
// }
//  abc = 20;
// let abc = 10;
// lof(); // output: ReferenceError: Cannot access 'abc' before initialization

// -------------------------------------------------------------------

// let abc = 10;
// function call() {
//   console.log(abc);
//   // let abc = 32;  if it is var it will not give error but it will print undefined or if we use let it will give error
//   abc = 30;
// }

// call();

// -------------------------------------------------------------------------------

// function secondLargerstNumberAndRemoveLargetNumber(arr) {
//   let largest = -Infinity;
//   let secondLargest = -Infinity;
//   for (let x of arr) {
//     if (x > largest) {
//       secondLargest = largest;
//       largest = x;
//     }
//   }
//   let remove = arr.indexOf(largest);
//   let newArray = arr.splice(remove);
//   return { secondLargest, newArray };
// }
// console.log(secondLargerstNumberAndRemoveLargetNumber([10, 30, 20, 40]));

// console.log('hi "hlel" Nikith');

// ---------------------------------------------------------------------

let obj = {
  x: 10,
};

let obj2 = obj;
obj2.x = 20;
obj2.y = 10;
console.log(obj.y);
for (let i in obj) {
  console.log(i);
}
// -------------------------------------------------------------


// function reverseString(str) {
//   let arr = str.split(""); // Convert string to an array
//   let start = 0;
//   let end = arr.length - 1;

//   while (start < end) {
//     // Use < instead of <= to avoid redundant swaps
//     [arr[start], arr[end]] = [arr[end], arr[start]]; // Correct swap
//     start++;
//     end--;
//   }

//   return arr.join(""); // Convert array back to string
// }

// console.log(reverseString("nikith")); // Output: "htikin"

// -------------------------------------------------------------recursive function to reverse a string-------------------------------------------------------------
// function reverseStringHelper(arr, start, end) {
//   if (start >= end) return; // Base case: Stop when start crosses end

//   [arr[start], arr[end]] = [arr[end], arr[start]]; // Swap elements
//   reverseStringHelper(arr, start + 1, end - 1); // Recursive call with updated indices
// }

// function reverseString(str) {
//   let arr = str.split(""); // Convert string to an array
//   reverseStringHelper(arr, 0, arr.length - 1); // Call helper function
//   return arr.join(""); // Convert back to string
// }

// console.log(reverseString("nikith")); // Output: "htikin"
