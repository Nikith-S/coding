function findAllSubArraysWithGivenSum(arr, k) {
    let map = new Map();
    let preSum = 0;
    let count = 0;
    let result = [];

    map.set(0, [-1]); // To handle subarrays starting from index 0

    for (let i = 0; i < arr.length; i++) {
        preSum += arr[i]; // Compute prefix sum
        let remove = preSum - k; // Target prefix sum to remove

        // If found in the map, add all subarrays that end at index 'i'
        if (map.has(remove)) {
            for (let startIndex of map.get(remove)) {
                result.push([startIndex + 1, i]);
                count++; // Increment count for each valid subarray
            }
        }

        // Store the current prefix sum with its index
        if (!map.has(preSum)) {
            map.set(preSum, []); 
        }
        map.get(preSum).push(i);
    }

    return { count, subarrays: result };
}

// Example Usage
let arr = [1, 2, 3, 2, 1, 4, 2];
let k = 5;

let { count, subarrays } = findAllSubArraysWithGivenSum(arr, k);

console.log(`Count of subarrays with sum ${k} is: ${count}`);
console.log("Subarrays:");
console.log(subarrays);
