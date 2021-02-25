#include<stdio.h>

int main()
{
    int num,i,j,a;

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
        a=0;
        for ( i = 2; i < num; i++)
        { 
            a=0;
            if (num%i==0)
            {
                for ( j = i; num>1;)
                {
                    if (num%j==0)
                    {
                        num=num/j;
                        a++;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            else
            {
                continue;
            }
            printf("%d %d",i,a);
        }
        
    }   
}