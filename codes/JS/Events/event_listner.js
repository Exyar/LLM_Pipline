let ok=document.querySelector("#ok");

//ok.addEventListener("click",function)
               // or
/* ok.addEventListener("click",(evt)=>{
    console.log("hy ok---1");
    console.log(evt);
    console.log(evt.type)
}); */



ok.addEventListener("click",()=>{
    console.log("hy ok---1");
});
ok.addEventListener("click",()=>{
    console.log("hy ok---2");
});

let handler3 =()=>{
    console.log("hy ok---3")
};  
ok.addEventListener("click",handler3);

ok.addEventListener("click",()=>{
    console.log("hy ok---4");
});
ok.removeEventListener("click",handler3);
