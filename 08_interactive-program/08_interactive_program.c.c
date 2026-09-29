#include <stdio.h>
#include <stdlib.h>

int main()
{


// exercise 3.18 page 177

  double salary;
  double sales;

  printf("Enter sales in dollars (-1 to end):");
  scanf("%1f",&sales);

  while (sales != -1 ){
      salary = 200 +(0.09*sales);

      printf("Salary is :$%.2f\n", salary);

      printf("\nEnter sales in dollars (-1 to end):");
      scanf("%1f",&sales);

  }


    printf("\nDone\n");
    return 0;
}
