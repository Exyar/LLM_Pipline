let userScore=0;
let compScore=0;
const choices=document.querySelectorAll(".choise");
const msg= document.querySelector("#msg");
const userScorepara=document.querySelector("#user-score");
const compScorepara=document.querySelector("#comp-score");


const genCompChoice=()=>{
    const option =["rock","paper","scissors"];

    //rock paper scissor

    const randomIdx = Math.floor(Math.random()*3);
    return option[randomIdx];
}

const drawGame=()=>{
    msg.innerText="Draw";
    msg.style.backgroundColor="#081b31";
}
//#76ff98
const showWinner = (userWin,userchoice,compChoice) => {
    if(userWin){
        userScore++;
        userScorepara.innerText=`${userScore}`;
        msg.innerText=`You Win! Your ${userchoice} beats ${compChoice}`;
        msg.style.backgroundColor="#1db291";
    }
    else
    {
        compScore++;
        compScorepara.innerText=`${compScore}`;
        msg.innerText=`You Lose! Comp ${compChoice} beats ${userchoice}`;
        msg.style.backgroundColor="rgb(42, 8, 8)";
    }
}

const playGame =(userchoice)=>{
    console.log("user choice =",userchoice);
    //generate user choice

    const compChoice = genCompChoice();
    console.log("comp choice =",compChoice)

    if(userchoice === compChoice)
    {
        drawGame();
    }
    else
    {
        let userWin = true;
        if(userchoice === "rock")
        {
            userWin=compChoice === "paper"?false:true;
        }
        else if(userchoice === "paper")
        {
            userWin=compChoice === "scissors"?false:true;
        }
        else
        {
            userWin=compChoice === "rock"?false:true;
        }
        showWinner(userWin,userchoice,compChoice);
    }

}


choices.forEach((choice)=>{
    console.log(choice);
    choice.addEventListener("click",()=>{
        const userchoice=choice.getAttribute("id");
        console.log("choice was clicked",userchoice);
        playGame(userchoice);
    });
});