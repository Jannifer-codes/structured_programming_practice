#include <stdio.h>
#include <stdlib.h>

int main()
{
   //exercise 4.13 page 225
   int num=1;
   int i;
   int sum=0;
   int square_sum=0;
   int cube_sum=0;

       printf("Enter number: ");
       scanf("%d", &num);

   for(int i=1; i<=num; ++i)
   {
       sum=sum+i;
       printf("\nSum=%d\n", sum);

       square_sum = square_sum +(i*i);
       printf("Square sum = %d\n", square_sum);

       cube_sum = cube_sum +(i*i*i);
       printf("Cube sum = %d\n",cube_sum);
   }

// putting the printf()s outside the for loop bracket displays only the sums for the number that has been entered .

    printf("\nDone\n");
    return 0;
}
