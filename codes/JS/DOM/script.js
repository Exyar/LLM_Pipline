// ID
/* 
let heading=document.getElementById("heading");    //h1
console.dir(heading);
console.log(heading);
 */

// CLASS
/* 
let headings=document.getElementsByClassName("heading-class");
console.dir(headings);
console.log(headings);
 */

// TAG
/* 
let parahs=document.getElementsByTagName("p");
console.dir(parahs);
 */

// QUERY
/* 
let FIRSTelements=document.querySelector("#heading");               // IN QUERY==>
console.dir(FIRSTelements);                                         // for id we have wirte like #myid
let ALLelements=document.querySelectorAll(".myclass");              // for class.                .myclass
console.dir(ALLelements);                                           // for tag.                  p
 */

// properties
/* 
// 1. tag name
let FIRSTelement=document.querySelector("#myid");            
console.dir(FIRSTelement);

// 2. innerText
let div1=document.querySelector("div");            
console.dir(div1);

let head=document.querySelector("h1");
console.dir(head);

// 3. textContent
let text=document.querySelector("#rat");
console.dir(text);
 */




// not comment out html's code
/* 
let div=document.querySelector("#box");
console.log(div);

let id=div.getAttribute("id");
console.log(id);

let a = document.querySelector("p");
console.log(a.getAttribute("class"));

let a = document.querySelector("p");
console.log(a.setAttribute("class","newclass"));
console.log(a.getAttribute("class"));
 */
  

// style
/* 
let style=document.querySelector("div");
style.style.backgroundColor="green";

style.style.fontSize="26px";

style.innerText="heelo"; 
 */


// insert

let newbutton=document.createElement("button");
newbutton.innerText="click me";
console.log(newbutton);
let div =document.querySelector("p");
div.after(newbutton);


let newheading = document.createElement("h1");
newheading.innerHTML="<i> HELLO </i>"
 
document.querySelector("body").prepend(newheading);

// delete

document.querySelector("p").remove();
newheading.remove();