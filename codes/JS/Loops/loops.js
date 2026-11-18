/* for(let i=1;i<=100;i++)
{
    console.log("aksh");
} */



//sum 1 to 5
/* let sum=0;
for(let i=1;i<=5;i++)
{
    sum+=i;
}
console.log("sum=",sum);

//while sum 1 to 5
let i=1;
let suma=0;
while(i!=6)
{
    suma+=i;
    i++;
}
console.log("suma=",suma); */

// for-of loop
/* let str="aksh";
let size=0;
for(let i of str)
{
   console.log("i=",i);
   size++;
}
console.log("string size =",size); 
*/

//for in loop

let student ={
    name:"aksh",
    age :20,
    cgpa:7.5,
    isPass: true,
};

for(let i in student)
{
    console.log(i,"value=",student[i]);
}