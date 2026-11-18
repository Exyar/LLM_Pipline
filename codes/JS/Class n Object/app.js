/*  how to make object
const student={
    fullname : "akshpatidar",
    marks : 94.5,
    printMarks : function(){
        console.log("marks = ",this.marks);
    },
}; 
*/

const Employee={
    calcTax(){
        console.log("tax rate is 10%");
    }
};

const aksh={
    salary  : 10000,
     calcTax(){
        console.log("tax rate is 20%");
    }
}; 

aksh.__proto__=Employee;