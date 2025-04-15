
let arr = [1, 2, 3, 4];

// let obj = { ...arr }; on way
// another way using reducer
let obj = arr.reduce((acc, i) => ({ ...acc, [i]: it }), {});

console.log(obj);

obj.keys();