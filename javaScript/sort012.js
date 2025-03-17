// function sortColors(arr) {
//   let low = 0,
//     mid = 0,
//     high = arr.length - 1;

//   while (mid <= high) {
//     if (arr[mid] === 0) {
//       // Swap arr[mid] and arr[low], then move both pointers forward
//       [arr[low], arr[mid]] = [arr[mid], arr[low]];
//       low++;
//       mid++;
//     } else if (arr[mid] === 1) {
//       // 1 is already in place, just move mid forward
//       mid++;
//     } else {
//       // Swap arr[mid] and arr[high], move high backward
//       [arr[mid], arr[high]] = [arr[high], arr[mid]];
//       high--;
//     }
//   }
// }

// // Example usage:
// let arr = [2, 0, 2, 1, 1, 0];
// sortColors(arr);
// console.log(arr); // Output: [0, 0, 1, 1, 2, 2]


