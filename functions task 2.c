#include<stdio.h>
int num(int);

main()
{
   int n, result;
   printf("Enter a number\n");
   scanf("%d",&n);
   result = num(n);

   if ( result == 1 )
      printf("%d is prime.\n", n);
   else
      printf("%d is not prime.\n", n);

   return 0;
}

int num(int a)
{
   int c;
   for ( c = 2 ; c <= a - 1 ; c++ )
   {
      if ( a%c == 0 )
     return 0;
   }
   return 1;
}
