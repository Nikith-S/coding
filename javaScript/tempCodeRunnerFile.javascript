  var visited = new Set();
  var duplicate = new Set();

  for (let num of arr) {
    if (visited.has(num)) {
      duplicate.add(num);
    } else {
      visited.add(num);
    }
  }
  return Array.from(visited);
}
console.log(findDuplicates([1, 1, 1, 2, 3, 4, 5, 5, 5, 6]));