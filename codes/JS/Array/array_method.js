// push n pop
/* let food=["potato","apple","litchi","mango"];
food.push("chips","burger","paneer");
let deleted=food.pop("paneer");
console.log(deleted);
 */


// toString
/* let marks=[23,45,34,65,34,23];
console.log(food);
console.log(food.toString());
console.log(marks.toString()); */


//concat
/* let marvel=["thor","spiderman","ironman"];
let DC=["superman","batman"];
let indianhero=["shaktiman","krish"];

let heros=marvel.concat(DC,indianhero);
console.log(heros); */


//unshift n shift





//slice u splice
/* let marvel=["thor","spiderman","ironman","ant man","widow"];
console.log(marvel);
console.log(marvel.slice(1,3));   // end wala index is not include like only spiderman n ironman will be print
let arr=[1,2,3,4,5,6,7];
//arr.splice(2,2,101,102);      doing all
//arr.splice(2,0,101);          adding
//arr.splice(3,1);              only deleting
//arr.splice(3,1,101);          replacing
//arr.splice(4);                delete all form idx 4 to last idx
console.log(arr); */



// map
/* 

let num=[23,34,45,56,43];

let newArr=num.map((val)=>{
    return val+2;
});
newArr.map((val)=>{
    console.log(val);
});


 */

// filter
/* 

let num=[23,34,45,56,43];

let evenArr=num.filter((val)=>{
    return val%2===0;
});

console.log(evenArr);
 

*/
 
//reduce
/* 

let arr=[1,2,3,4,5];
 
let sum=arr.reduce((result,current_value)=>{
    return result+current_value;
});

console.log(sum);



let arr=[5,4,6,2,1,7];
 
let max=arr.reduce((pre,current_value)=>{
    return pre>current_value?pre:current_value;
});

console.log(max);
 */

