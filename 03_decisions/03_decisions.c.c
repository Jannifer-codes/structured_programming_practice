#include <stdio.h>
#include <stdlib.h>

int main()
{

/*exercise 2.22*/
   int num;


    printf("Enter integer:");
    scanf("%d" , &num);

    if (num % 2==0)
    {
        printf("%d is even.", num);

    }

    else {
        printf("%d is odd.", num);
    }


    return 0;
}
