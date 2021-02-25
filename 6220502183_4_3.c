#include<stdio.h>

int main()
{
    int num,i,a=0;

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
                for (size_t i = 0; i < count; i++)
                {
                    /* code */
                }
                
            }
            
        }
    }
    
    
    
}