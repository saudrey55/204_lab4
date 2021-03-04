#include<stdio.h>

int main()
{
    int i;
    char a[200];

    gets(a);


    for ( i = 0; i < 200; i++)
    {
       if (a[i]==a[i+1])
       {
           continue;
       }
       else if (a[i]!=a[i+1])
       {
           printf("%c",a[i]);
       }
       
    }
    
}