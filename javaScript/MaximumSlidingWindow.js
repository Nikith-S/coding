// function maxiSlidingWindow(arr, k) {
//   let res = [];
//   let n = arr.length;
//   for (let i = 0; i <= n - k; i++) {
//     let maxi = arr[i];
//     for (let j = 1; j < k; j++) {
//       if (arr[i + j] > maxi) {
//         maxi = arr[i + j];
//       }
//     }
//     res.push(maxi);
//   }
//   return res;
// }

// console.log(maxiSlidingWindow([1, 3, -1, -3, 5, 3, 6, 7], 3));



function maxiMumSlideWindow(arr, k) {
    let result = [];
    let deque = [];
    let n = arr.length;
  
    for (let i = 0; i < n; i++) {
      while (deque.length > 0 && deque[0] <= i - k) {
        deque.shift();
      }
      while (deque.length > 0 && arr[i] > arr[deque[deque.length - 1]]) {
        deque.pop();
      }
      deque.push(i);
  
      if (i >= k - 1) {
        result.push(arr[deque[0]]);
      }
    }
  
    return result;
  }
  
  console.log(maxiMumSlideWindow([1, 3, -1, -3, 5, 3, 6, 7], 3));
