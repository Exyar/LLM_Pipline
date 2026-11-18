#include<stdio.h>
#include<string.h>
typedef struct empolye
{
    int salary;
}emp;

void sort(emp *a,emp *h,emp *k,emp *t,emp* ac)
{
    int arr[5];
    arr[0]=a->salary;
    arr[1]=h->salary;
    arr[2]=k->salary;
    arr[3]=t->salary;
    arr[4]=ac->salary;
    
    for(int i=0;i<5;i++)
    {
        for(int j=i;j<5;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<5;i++)
    {
        printf("%d",arr[i]);
    }
    return;
}
int main()
{
  emp aksh, hinata ,kageyama,taichi,ace;
  printf("enter salary: ");
  scanf("%d",&aksh.salary);
  printf("enter salary: ");
  scanf("%d",&hinata.salary);
  printf("enter salary: ");
  scanf("%d",&kageyama.salary);
  printf("enter salary: ");
  scanf("%d",&taichi.salary);
  printf("enter salary: ");
  scanf("%d",&ace.salary);

  sort(&aksh,&hinata,&kageyama,&taichi,&ace);
  return 0;
}