#include<stdio.h>

int main()
{
    int a,b,c,d,z,e,f,x;

    scanf("%d",&a);
    scanf("%d",&b);

    c=(a%10000)/100;
    d=(b%10000)/100;
    e=a/10000;
    f=b/10000;
    if (c==1||c==3||c==5||c==7||c==8||c==10||c==12)
    {
        z=31;
    }
    else if (c==4||c==6||c==9||c==11)
    {
        z=30;
    }
    else if (c==2)
    {
        z=29;
    }
    
     if (d==1||d==3||d==5||d==7||d==8||d==10||d==12)
    {
        x=31;
    }
    else if (d==4||d==6||d==9||d==11)
    {
        x=30;
    }
    else if (d==2)
    {
        x=29;
    }
   if (e<z&&f<x)
   {
       printf("L");
   }
   else
   {
       printf("W");
   }
   
}