#include<stdio.h>

int main()
{
    int a,i,j;

    scanf("%d",&a);
    
    int b[3][3];

    for ( i = 0; i < a; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for ( i = 0; i < a; i++)
    {
        //for ( j = 0; j < 2; j++)
        //{
            if (b[i][1]>=1&&b[i][1]<6)
            {
                printf("%d ",b[i][1]);
            }   
        //}
    }
    
        
}