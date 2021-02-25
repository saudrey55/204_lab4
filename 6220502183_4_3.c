#include<stdio.h>

int main()
{
    long int num,i,j,a=0;

    scanf("%d",&num);

    if (num%10==0)
    {
        for ( i = 0; num>1; i++)
        {
            num=num/10;
        }
            printf("10  %d",i);
    }
    else
    {
        for ( i = 2; i < num; i++)
        {
            if (num%i==0)
            {
                for ( j = i; num>1;)
                {
                    num=num/j;
                    printf("%d",num);
                    a++;
                }
            }
            
        }
        //printf("%d %d",i-1,a);
    }   
}