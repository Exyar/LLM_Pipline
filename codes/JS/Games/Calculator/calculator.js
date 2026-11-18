let screen=document.querySelector(".screen");
let string="";
let buttons=document.querySelectorAll("button");
let sign=0;

Array.from(buttons).forEach((button)=>{
    button.addEventListener("click",(e)=>{

        console.log(e.target);
        if(e.target.innerHTML==='=')
        {
            answer(string);
            sign=0;
        }
        else if(e.target.innerHTML==='AC')
        {
            string="";
            screen.innerHTML=string;
            sign=0;
        }
        else if(e.target.innerHTML==='C')
        {
            string=string.slice(0,-1);
            screen.innerHTML=string;
            sign=0;
        }
        else if(e.target.innerHTML==='-/+')
        {
            if(sign==0)
            {
                string='-'+string.slice(0,1);
                sign=1;
            }
            else
            {
                string='+'+string.slice(0,1);
                sign=0;
            }
            screen.innerHTML=string;
        }
        else if(e.target.innerHTML==='()')
        {
            string= '(' + string + ')' ;
            screen.innerHTML=string;
            sign=0;
        }
        else
        {
        string=string+e.target.innerHTML;
        console.log(string);
        screen.innerHTML=string;
        sign=0;
        }
       
        
    })
})


let answer = ()=>{
   string=eval(string);
   screen.innerHTML=string;
}




