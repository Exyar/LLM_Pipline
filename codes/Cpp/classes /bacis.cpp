#include<iostream>
class employee
    {
            int age;
        public:
            int salary;
            void show();
            void getdata();
    };
using namespace std;
int main()
{
    

    employee e1,e2,e3;
    e1.getdata();
    e1.show();

    e2.getdata();
    e2.show();
    e3.salary=100;
    printf("%d",e3.salary);
    return 0;
}
void employee::getdata()
{
    printf("\nEnter age:   ");
    scanf("%d",&age);

}
void employee::show()
{
    printf("\nAGE :  %d",age);
    
}