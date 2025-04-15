// function sum(a, b = 2, c = 5) {
//   return b + c;
// }
// // console.log(sum()); //Nan

// let evenNumber1 = [4, 6];
// let evenNumber2 = [2, ...evenNumber1, 8];
// console.log(evenNumber2);
// console.log(sum(...evenNumber2));

// let day = "2";

// switch (day) {
//   case 1:
//     console.log("Monday");
//     break;
//   case 2:
//     console.log("Tuesday");
//     break;
// }

// let employees = [
//   {
//     name: "jin",
//     experieced: 5,
//   },
//   {
//     name: "jack",
//     experieced: 5,
//   },

//   {
//     name: "john",
//     experieced: 5,
//   },
// ];

// function experience(firstEmployee, ...employees) {
//   console.log(firstEmployee.name);
// }

// experience(...employees);

// const square = (x) => {
//   return x * x;
// };
// // console.log(square(5)
// square(5);

// const multiplication = (a, b) => {
//   a * b;
// };
// "use strict";

// function number(a = 3, b = 5) {
//   // var a = 20;
//   // var b = 20;
//   console.log(a);
//   console.log(b);

//   console.log(arguments[0] + arguments[1]);
//   console.log(a + b);
// }

// number(20, 10);

// let testone = {
//   match1: "India vs england",
//   score: [304, 578],
// };

// let testTwo = {
//   match1: "India vs england",
//   score: [329, 286],
// };

// let testMatches = {
//   ...testone,
//   ...testTwo,
// };

// console.log(testMatches.score[0] + testMatches.score[1]); //615

// function sum(a, b) {
//   return a + b;
// }

// const sum2 = function (a, b) {
//   return a + b;
// };

// if (sum(5, 5) === sum2(5, 5)) {
//   console.log("Both functions are equal");
// } else {
//   console.log("Both functions are not equal");
// }

// let person = {
//   name: "John",
//   born: 1990,
//   nationality: "USA",
//   about: "I am a software engineer",
// };
// // person.awards = "niki";

// // let { name, awards, about } = person;
// let { name, about, ...nationality } = person;
// console.log(name, about, nationality);

// let count = 0;

// function printCount() {
//   if (count == 1) {
//     let count = 3;
//     console.log("count1", count);
//   }
//   console.log("count1", count);
// }

// printCount();

// var i = 10;
// setTimeout(() => {
//   console.log(i);
//   var i = 10;
// }, 10000);

// var i = 10;
// function name() {
//   console.log("let me in");
//   console.loh(i);
// }
// name();
