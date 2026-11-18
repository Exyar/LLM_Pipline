let arr=[1,2,3,4,5];
arr.forEach(function printvalue(i,j,a){
    console.log(i,j,a);   // print the values of array
});
arr.forEach((val,i,arr)=>{
    console.log(val,i,arr);       // with arrow function
});