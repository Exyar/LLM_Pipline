let modebtn=document.querySelector("#mode");
let currmode="light";  //dark
let style=document.querySelector("body");


modebtn.addEventListener("click", () => {
    if(currmode==="light")
    {
        currmode="dark";
        modebtn.innerText="dark"
        style.style.backgroundColor="black";
        modebtn.style.backgroundColor="lightblue"
    }
    else
    {
        currmode="light";
        modebtn.innerText="Light"
        style.style.backgroundColor="white";
         modebtn.style.backgroundColor="rgb(221, 198, 242)"
    }
    console.log(currmode);
});