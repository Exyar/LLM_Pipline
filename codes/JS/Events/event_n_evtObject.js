let btn =document.querySelector(".btn");

/* btn.onclick=()=>{                                        //
    console.log("this is button");                          //-----> event of btn
}   */                                                      //
btn.onclick=(event)=>{
    console.log(event);                                     //
    console.log(event.type);                                //
    console.log(event.target);                              //----->. event object of btn
    console.log(event.clientX,event.clientY);               //
    console.log("this is button");                          //
}




let div=document.querySelector("div");

/* div.onmouseover=()=>{
    console.log("inside mouse");
} */
div.onmouseover=()=>{
    console.log(event);                                     
    console.log(event.type);                                
    console.log(event.target);                              
    console.log(event.clientX,event.clientY);               
    console.log("inside mouse"); 
}

