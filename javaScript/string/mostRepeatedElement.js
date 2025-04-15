// -----------------------------------------------------
// # most repeating element in a string

function mostRepeatedElement(str) {
  let frequency = {};
  let maxCount = 0;
  let result = [];

  for (let char of str) {
    if (char != "") {
      frequency[char] = (frequency[char] || 0) + 1;
    }
    if (frequency[char] > maxCount) {
      maxCount = frequency[char];
      result = [char];
    } else if (frequency[char] == maxCount) {
      result.push(char);
    }
  }
  return result.toString();
}

// console.log(mostRepeatedElement(["hello", "nikith", "hello", "nikith"]));  
console.log(mostRepeatedElement(["hello", "nikith", "hello", "nikith"]));  


// # most repeating element in a array

// function mostRepeatedElement(arr) {
//   let frequency = {};
//   let maxCount = 0;
//   let maxElement = [];
//   for (let x of arr) {
//     frequency[x] = (frequency[x] || 0) + 1;
//     if (frequency[x] > maxCount) {
//       maxCount = frequency[x];
//       maxElement = [x];
//     }
//   }
//   // return `maxElement = ${maxElement} , with maxCount = ${maxCount}`;
//   return maxElement;
// }
// console.log(
//   //   mostRepeatedElement([1, 1, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3])
//   mostRepeatedElement(["hello", "hello", "name", "name"])
// );

// # most repeating element's in a array

// function mostRepeatingMultipleElement(arr) {
//   let frequency = {};
//   let maxCount = 0;
//   let maxElements = [];
//   for (let x of arr) {
//     frequency[x] = (frequency[x] || 0) + 1;
//     if (frequency[x] > maxCount) {
//       maxCount = frequency[x];
//       maxElements = [x];
//     } else if (frequency[x] == maxCount) {
//       maxElements.push(x);
//     }
//   }
//   return maxElements;
// }
// console.log(mostRepeatingMultipleElement([1, 1, 2, 2, 33 , 33, 5]));

// ----------------------------------------------------
// # find the first non repeating element in a string

// function nonReapeatingElement(str) {
//   let frequency = {};
//   for (let freq of str) {
//     frequency[freq] = (frequency[freq] || 0) + 1;
//   }
//   for (let char of str) {
//     if (frequency[char] == 1) {
//       return char;
//     }
//   }
//   return null;
// }

// # find the all non repeating element in a array
// function allNonRepeatingElements(arr) {
//   let array = arr.split(""); // Convert string to array
//   let frequency = {};
//   let result = [];

//   // Count occurrences of each character
//   for (let char of array) {
//     frequency[char] = (frequency[char] || 0) + 1;
//   }

//   // Collect non-repeating characters
//   for (let char of array) {
//     if (frequency[char] === 1) {
//       result.push(char);
//     }
//   }

//   return result.length;
// }

// console.log(allNonRepeatingElements("abcabcbb"));
// Output: [ 'j', 'v', 's', 'c', 'r', 'p' ]

// ----------------------------------------------------
// # check if two strings are anagram or not
// function twoStringAreAnagram(str1, str2) {
//   return str1.split("").sort().join("") == str2.split("").sort().join("");
// }

// console.log(twoStringAreAnagram("listen", "silent"));

// -----------------------------------------------------------------
// # check for the longest world in string

// function longestString(str) {
//   let strsplit = str.split(" ");
//   let longest = "";

//   for (let word of strsplit) {
//     if (word.length > longest.length) {
//       longest = word;
//     }
//   }
//   return longest;
// }

// console.log(longestString("hello good morning helllll"));

// // # to return multiple longest words
// function longestStrings(str) {
//   let strsplit = str.split(" ");
//   let longest = [];
//   let maxLength = 0;

//   for (let word of strsplit) {
//     if (word.length > maxLength) {
//       maxLength = word.length;
//       longest = [word];
//     } else if (word.length == maxLength) {
//       longest.push(word);
//     }
//   }
//   return longest;
// }

// console.log(longestStrings("hello good morning helllll"));

// -----------------------------------------------------------
// # string is unique or not

// function uniqueString(str) {
//   let seen = new Set();
//   for (let x of str) {
//     if (seen.has(x)) {
//       return "it is not unique";
//     } else {
//       seen.add(x);
//     }
//   }
//   return "the string is unique";
// }

// console.log(uniqueString("hello"));

// ----------------------------------------------------

