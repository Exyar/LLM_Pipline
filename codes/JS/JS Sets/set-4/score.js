let score=prompt("enter score:");
let grade;
if(score>=80)
{
 grade="A";
}
else if(score<=79 && score>70)
{
    grade="B";
}
else if(score<=69 && score>60)
{
    grade="C";
}
else if(score<=59 && score>50)
{
    grade="D";
}
else
{
    grade="F";
}
console.log(grade);
