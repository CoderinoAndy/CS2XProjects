// Q1
const question1 = (height: number, width: number) => {
    const subtract = height - width;
    console.log(`${height} minus ${width} equals ${subtract}`);
}

// Q2
let a = number: Math.random()*100;
let b = number: Math.random()*100;

// Q3
if(question1(a, b) < 0){
    console.log(`${b} is greater than ${a}`);
} else if(question1(a, b) == 0){
    console.log(`${a} is equal to ${b}`);
} else{
    console.log(`${a} is greater than ${b}`);
}

// Q4
const question4 = (height: number, width: number) => {
    const subtract = height - width;
    const structure = {
        height, 
        width, 
        subtract
    };
    return structure;
}

// Q5
const exponential = (num1: number, num2: number) => (num1**num2);
const question5 = (callback1: any) => {
    c = Math.random()*100;
    d = Math.random()*100;
    console.log(callback1(c, d));
}

//Q6
let result = question5(question1);
print(`${result.height} minus ${result.width} equals ${result.difference}`);

// Q7
const array = ["andy", "brayden", "carlos", "derek", "ethan"]
array.forEach(name => console.log(name.toUpperCase));