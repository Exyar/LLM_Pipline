let last =prompt("enter last number: ");

let arr=[];
for(let i=1;i<=last;i++)
{
    arr[i-1]=i;
}
console.log(arr);

//sum
let sum=arr.reduce((pre,curr)=>{
    return pre+curr;
});

console.log(sum);


//factorail
let fact=arr.reduce((pre,curr)=>{
    return pre*curr;
});

console.log(fact);