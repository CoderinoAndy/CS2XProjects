let meow = null;
meow ??= 10;
console.log(meow); // 10

let john = 0;
john ||= 20;
console.log(john) // 20

let WannaBest = 1;
WannaBest &&= 0;
console.log(WannaBest) // 0