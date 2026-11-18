#include<iostream>
using namespace std;
class student
{
    int marks;
    public:
    int getdata();
    int show();
};



int *sorti(student* a,int* element)
{
  for(int i=0,j=0;i<10,j<10;i++,j++)
  {
    element[j]=a[i].getdata();
  }
  for(int i=0;i<10;i++)
  {
    for(int j=i;j<10;j++)
    {
        if(element[i]>element[j])
        {
            int temp=element[i];
            element[i]=element[j];
            element[j]=temp;
        }
    }
  }
  return element;
}



int main()
{
    student arr[10];
    int elementa[10];
    int *s=sorti(arr,elementa);
    for(int i=0;i<10;i++)
    {
        printf("%d",s[i]);
    }
    return 0;
}
int student::getdata()
{
    printf("enter element: ");
    scanf("%d",&marks);
    return marks;
}