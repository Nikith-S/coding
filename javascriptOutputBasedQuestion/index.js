// let a = 10;
// function abc() {
//   a = 21;
// }
// abc();
// console.log(a); //21

// ----------------------------------------------------

// let x = 1;
// //  // function f() {}  if that fuunction is there ouside or above the code then it will return an output as function
// if (function f() {}) {
//   x = typeof f;
// }

// console.log(x);
// undefined;

// ------------------------------------------------------------
// let a = {
//   name: "nikith",
// };
// let b = a;
// b.name = "nik";
// console.log(a);    { name: 'nik' }

// ----------------------------------------------------------------

// let a = {
//   name: "nikith",
// };

// let b = [a];
// b.name = "nik";
// console.log(a);
// console.log(b);   [ { name: 'nikith' }, name: 'nik' ]
// -----------------------------------------------------------------------

// let a = 10;
// (function abc() {
//   console.log(a);
//   a = 20;
//   console.log(a);
// })(); // 10 20

// --------------------------------------------------------------------------

// let a = 10;

// function f() {
//   console.log(a);
// }
// f(); //10

// ---------------------------------------------------------------------------

// function hello() {
//   console.log("Hello");
// }

// (false || hello)(); // Hello

// ------------------------------------------------------------------------

// myFunc();
// var myFunc = function () {
//   console.log("I am first");
// };
// myFunc();
// function myFunc() {
//   console.log("I am second");
// }
// myFunc();
// I am second
// I am first
// I am first

// -------------------------------------------------------------

// myFunc();
// function myFunc() {
//   console.log("hello");
// } // hello
// ----------------------------------------------------------------

// myfuc(); if i am myfuc() here it will be not hoisted it wiil throw an error like by saying myfuc is not and function
// var myfuc = function () {
//   console.log("hello");
// };
// myfuc();  for this the output will be like hello

// -----------------------------------------------------------

// console.log(a);
// var a = 10;  //10
// --------------------------------------------------------------------

// myFunc();
// function myFunc() {
//   console.log("I am first");
// }
// myFunc();
// function myFunc() {
//   console.log("I am second");
// }
// myFunc();
// I am second
// I am second
// I am second
// --------------------------------------------------------------------------

// An Example for function curring
// function abc(a) {
//   return function bc(b) {
//     return a + b;
//   };
// }
// console.log(abc(10)(20));
// -------------------------------------------------------------
// an example for infinite curring
// function add(a) {
//     return function (b) {
//       if (b !== undefined) {
//         return add(a + b);
//       } else {
//         return a;
//       }
//     };
//   }
//   // Usage:
//   console.log(add(10)(20)(30)(40)()); // Output: 100
// ----------------------------------------------------------------------------

// // ------->first oreder function
// 🔹 First-Order Function
// A first-order function is a regular function that:

// Does NOT accept another function as an argument

// Does NOT return another function

// 📌 Example:
// javascript
// Copy
// Edit
// function greet(name) {
//   return "Hello, " + name;
// }

// In JavaScript, functions are first-class citizens, meaning:
// const greet = function(name) {
//     return "Hello, " + name;
//   };

//   const run = greet;
//   console.log(run("Nikith"));

// 🔹 First-Class Functions
// This refers to a feature of the language itself.
// ✅ You can:

// Assign functions to variables

// Pass functions as arguments

// Return functions from other functions

// Store them in objects/arrays

// ------------> higher order function
// 🔹 Higher-Order Function
// A higher-order function (HOF) is a function that:

// Takes one or more functions as arguments, or
// Returns a function

// 📌 Example 1 (Takes a function):

// function higherOrder(callback) {
//   const name = "nikith";
//   return callback(name);
// }
// function example(name) {
//   return "hello" + " " + name;
// }
// console.log(higherOrder(example)); // hello nikith

// ------> example 2
// function abc(x) {
//   return function (y) {
//     return x * y;
//   };
// }
// console.log(abc(3)(4));

// -----------------------------------------------------------------
// exapmle for ternay operator

// let age = 20;
// age >= 20 ? console.log("can vote") : console.log("can't vote");

// ---------------------------------------------------------

// function union(arr1, arr2) {
//   let i = 0;
//   let j = 0;
//   let unionArray = [];

//   while (i < arr1.length && j < arr2.length) {
//     if (arr1[i] < arr2[j]) {
//       unionArray.push(arr1[i]);
//       i++;
//     } else if (arr1[i] > arr2[j]) {
//       unionArray.push(arr2[j]);
//     } else {
//       unionArray.push(arr1[i]);
//       i++;
//       j++;
//     }
//   }
//   while (i < arr1.length) {
//     unionArray.push(arr1[i]);
//     i++;
//   }

//   while (j < arr2.length) {
//     unionArray.push(arr2[j]);
//     j++;
//   }

//   return unionArray;
// }

// console.log(union([1, 2, 3, 4], [5, 6]));

// by using built in function
// let arr1 = [1, 2];
// let arr2 = [3, 4];
// // console.log(...arr1, ...arr2);
// let arr3 = arr1.concat(arr2);
// console.log(arr3);
// -----------------------------------------------------------------------------------

// let object = {
//   a: "10",
// };

// let convert = JSON.stringify(object);
// console.log(convert);

/////----------------------------------------------
// to check the array are equal uisng length and .every()

// let arr1 = [1, 2];
// let arr2 = [1, 2];
// function isequal(arr1, arr2) {
//   return (
//     Array.isArray(arr1) === Array.isArray(arr2) &&
//     arr1.length === arr2.length &&
//     arr1.every((value, index) => value === arr2[index])
//   );
// }
// console.log(isequal(arr1, arr2));

// ----------------------------------------------------------------------------------
// diif between event caputuring and event bubling

// event capturing
// document.getElementById("parent").addEventListener("click", () => {
//   console.log("Capturing parent");
// }, true);

// ---------------------event bubbling
// document.getElementById("outer").addEventListener("click", () => {
//   console.log("Outer");
// }, true); // capturing

// document.getElementById("inner").addEventListener("click", () => {
//   console.log("Inner");
// }, false); // bubbling

// ------------------------------------------------------------
// ---------> function scope 🔹 1. Function Scope
// Variables declared inside a function are accessible only within that function.
// Uses var.

// function greet() {
//   var message = "Hello";
//   console.log(message); // ✅ Works
// }
// console.log(message); // ❌ Error: message is not defined

// --------------------------------------------------------------------
// ---------> blocked scope
// 🔹 2. Block Scope
// Variables declared inside a block ({}) using let or const are only available inside that block.

// if (true) {
//   let a = 10;
//   const b = 20;
//   var c = 30;
// }
// console.log(c); // ✅ Works (because `var` is not block-scoped)
// console.log(a); // ❌ Error
// console.log(b); // ❌ Error

// -----------------------------------------------------------
// ----------> lexial scope

// 🔹 3. Lexical Scope
// Lexical scope means a function remembers the scope in which it was defined — not where it's called.
// Also known as static scope.

// function outer() {
//   let outerVar = "I’m outside!";

//   function inner() {
//     console.log(outerVar); // ✅ inner() can access outerVar
//   }

//   inner();
// }
// outer();
// -------------------------------------------------------------------------------------------------------
// let a = {
//   age: 21,
// };
// let b = a;
// b.age = 22;
// console.log(a);
// ---------------------------------------------------------------------------

// let a = {
//   name: "nikith",
//   age: 22,
//   city: {
//     birthplace: "bengaluru",
//     pinCode: 5660021,
//   },
// };

// let b = a;
// b.city.pinCode = 5660022;
// console.log(a.city.pinCode); // output : mysore  it will change the original object as well

// ---------------------------------------------------------------------

// const arr = Array(2).fill({ value: 0 });
// arr[0].value = 2;
// for (i of arr) {
//   console.log(i);
// }   { value: 2 }   { value: 2 }
