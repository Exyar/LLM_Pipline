/* let heading = document.querySelector("h2");
console.dir(heading.innerText);


heading.innerText=heading.innerText+" from aksh patidar"; */






let divs=document.querySelectorAll(".box");
//console.log(divs[0]);


for(div of divs)
{
    console.log(div.innerText);
}


divs[0].innerText="new value 1";


for(div of divs)
{
    console.log(div.innerText);
}