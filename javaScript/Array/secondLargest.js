// #--------------------------------- second largest element in an array
function secondLargest(arr) {
  let largest = -Infinity;
  let secondLargestNumber = -Infinity;
  for (let num of arr) {
    if (num > largest) {
      secondLargestNumber = largest;
      largest = num;
    } else if (num > secondLargestNumber && num < largest) {
      secondLargestNumber = num;
    }
  }

  return secondLargestNumber == -Infinity ? null : secondLargestNumber;
}

function filterArray(arr) {
  const newArray = arr.filter((num) => typeof num === "number");
  return secondLargest(newArray);
}
console.log(filterArray(["nikith", 9, 45, "heloo"]));
// console.log(secondLargest([1, 20, 20, 20, 3]));
