#include <stdio.h>
#include <stdlib.h>

int main()
{


    int math,eng,average,total;

      /*finding the average mark of a student with maths and english marks. exercise 2.16*/
    printf("Enter Maths marks:\n");
    scanf("%d",& math);

    printf("Enter English marks:\n");
    scanf("%d",&eng);

    total= math + eng ;

    printf("Total marks:%d",total);


     average= (total)/2;

     printf("\nAverage:%d", average);


    return 0;
}
