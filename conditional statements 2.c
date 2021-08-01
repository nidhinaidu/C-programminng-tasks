#include<stdio.h>
int main()
{
    printf("Pick a number:\n 1\n 2\n 3\n 4\n 5\n");
    int number=0;
    scanf("%d",&number);

    switch(number)
    {
    case 1:
        printf("\nFood item-Burger \nPrice-Rs 129");
        break;
    case 2:
        printf("\nFood item-French Fries \nPrice-Rs 99");
        break;
    case 3:
        printf("\nFood item-Sandwich \nPrice-Rs 149");
        break;
    case 4:
        printf("\nFood item-Pizza \nPrice-Rs 239");
        break;
    case 5:
        printf("\nFood item-Pasta \nPrice-Rs 179");
        break;
    default:
        printf("\nSorry, this number is not in the list");
    }

}
