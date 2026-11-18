let arr=[12,13,1,20];
arr.forEach(function sqr(val){
    console.log("square is : ",val*val);
});

function printall(arr){
    console.log(arr);
}
arr.forEach(printall);