#include <stdio.h>
#include <stdlib.h>

int main()
{
   /* exercise 4.9 page 224*/
   int n; // tells how many numbers we are entering
   int num;
   int sum=0;
   float average;


   printf("How many number do you want to enter?\n:");
   scanf("%d",&n);

   for (int i=1; i<=n; ++i){

      printf("Enter number:", i);
      scanf("%d", &num);

      sum = sum+num;
   }

        average = (sum)/n;


      printf("Sum = %d\n", sum);
      printf("\nAverage =%.2f\n",average);


    printf("\nDone\n");
    return 0;
}
