#include<stdio.h>
#include<string.h>

int main()
{
    int a,i,j,e;
    scanf("%d",&a);
    int z[a][3],x[a-2],y[3]={4,2,1};

    for ( i = 0; i < a; i++)
    {
        for ( j = 0; j < 3 ; j++)
        {
            scanf("%d",&z[i][j]);
        }
    }
   for ( i = 0; i < a-2; i++)
    {
        x[i]=0;
        for ( j = 0; j < 3; j++)
        {
            x[i]+=(z[i][j]+z[i+1][j]+z[i+2][j])*y[j];
        }
    }
    int indexmax=0,indexmin=0;

    for ( i = 1; i < a-2; i++)
    {
        if (x[i]>x[indexmax])
        {
            indexmax=i;
        }
        else if (x[i]<x[indexmin])
        {
            indexmin=i;
        }
        
    }
    printf("%d %d",indexmax+1,indexmin+1);
}