#include<stdio.h>
struct employee
{
    int id,age,salary;
    char name[25];
}emp[100];

void main()
{
    int i,n;
    printf("Enter the no of employees:\n");
    scanf("%d",&n);
    printf("Enter employee info as id,name,age,salary\n");
    for(i=0;i<n;i++)
    {
        scanf("%d %s %d %d",&emp[i].id,emp[i].name,&emp[i].age,&emp[i].salary);
    }
    printf("\nEmployee_id\tName\t\tAge\t\tSalary\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t\t%s\t\t%d\t\t%d\n",emp[i].id,emp[i].name,emp[i].age,emp[i].salary);
    }
}
