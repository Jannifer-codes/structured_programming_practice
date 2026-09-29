#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /*exercise 3.5(page 172)*/
    int x=1;
    int sum=0;


     while(x<=10){

     sum = sum+x;
      ++x;

     }
        printf("The sum is = %d\n",sum);

  puts("");// creates a blank line in my output

    printf("Done!");

    return 0;
}
