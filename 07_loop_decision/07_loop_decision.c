#include <stdio.h>
#include <stdlib.h>

int main()
{

//exercise 3.22 page 178

     int num;
     int prime=1;


     printf("Enter number:");
     scanf("%d", &num);
     //start at 2 to find any other divisor

       if (num<2)
       {
           prime =0;
       }

         else{
        for (int i=2; i<num; ++i)

            {


        if(num%i==0){//% gives us the remainder
            prime = 0;
            break;
        }
      }
         }

         if(prime==1){


                printf("\n%d is a prime number\n", num);

            }

            else {
                printf("\n%d is not a prime number \n",num);

            }


    printf("\n Done\n");
    return 0;
}
