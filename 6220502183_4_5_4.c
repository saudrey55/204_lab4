#include<stdio.h>

int main()
{
    int n,i,j,h,sum=1;
    char a[50];

    scanf("%d",&n);
    int z[n];
     if(n<100&&n>0)
    {
        for(i=0;i<n;i++)
        {
            scanf("%s",a);
            h=strlen(a);
            for(j=0;j<h;j++)
            {
                if(a[j]=='A')
                {
                    if(sum==3)
                    sum=2;
                    else if(sum==2)
                    sum=3;
                }
                else if(a[j]=='B')
                {
                    if(sum==1)
                    sum=4;
                    else if(sum==4)
                    sum=1;
                }
                else if(a[j]=='C')
                {
                    if(sum==1)
                    sum=3;
                    else if(sum==3)
                    sum=1;
                    else if(sum==2)
                    sum=4;
                    else if(sum==4)
                    sum=2;
                }
                else if(a[j]=='D')
                {
                    if(sum==1)
                    sum=2;
                    else if(sum==2)
                    sum=1;
                    else if(sum==3)
                    sum=4;
                    else if(sum==4)
                    sum=3;
                }
                else if(a[j]=='E')
                {
                    if(sum==1)
                    sum=4;
                    else if(sum==4)
                    sum=1;
                    else if(sum==2)
                    sum=3;
                    else if(sum==3)
                    sum=2;
                }
            }
            
            printf("%d\n",sum);

        }
    }
}