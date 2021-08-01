#include<stdio.h>
int find_lcm(int, int);

int main()
{
    int a,b,lcm;
    printf("\nEnter first number:");
    scanf("%d",&a);
    printf("\nEnter second number:");
    scanf("%d",&b);
    lcm = find_lcm(a,b);
    printf("\n\n LCM of %d and %d = %d\n\n",a,b,lcm);
    return 0;
}

int find_lcm(int a, int b)
{
    static int temp = 1;
    if(temp%a == 0 && temp%b == 0)
    {
        return temp;
    }
    else
    {
        temp++;
        find_lcm(a,b);
        return temp;
    }
}
