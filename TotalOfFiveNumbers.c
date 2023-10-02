#include <stdio.h>
int main(void)
{
    int count = 1,total=0,num;

    for(count; count <=5; count ++)
    {
        printf("Please Enter Number %d ",count);
        scanf("%d",&num);

        total = total + num ;

    }

    printf("Total Is : %d",total);
    return 0;
}
