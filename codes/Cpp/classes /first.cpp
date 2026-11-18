#include<iostream>
using namespace std;
class student
{
    char name[20];
    int roll;
    public:
    int marks;
    void show();
    void getdata();
};
int main()
{
    student s1,s2,s3;
    
    s1.getdata();
    s2.getdata();
    s3.getdata();

    s1.show();
    s2.show();
    s3.show();
    return 0;
}

void student::getdata()
{
    printf("enter name: ");
    scanf(" %[^\n]",name);
    printf("enter roll: ");
    scanf("%d",&roll);
    printf("enter marks: ");
    scanf("%d",&marks);

}

void student::show()
{
    printf("name: %s\n",name);
    printf("roll %d\n",roll);
    printf("marks %d\n",marks);
}