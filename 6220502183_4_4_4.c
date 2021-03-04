#include<stdio.h>
#include<string.h>

int nmain()
{
    char z[1000];
    int a,i;

    scanf("%[^\n]s",z);
    a=strlen(z);

    toupper(z);
    printf("%s",z[0]);

    for ( i = 1; i < a; i++)
    {
         if (z[i]!=" ")
       {
           if (z[i+1]==" ")
           {
               continue;
           }
       }
       else if (z[i]==" ")
       {
           if (z[i+1]=='I'||z[i+1]=='A')
           {
               continue;
           }
           else if (z[i+1]=='o'||z[i+1]=='a'||z[i=1]=='i')
           {
               if (z[i+2]=='f'||z[i+2]=='n'||z[i+2]=='t')
               {
                   continue;
               }  
           }
           else if (z[i+1]=='t'||z[i+1]=='f'||z[i+1]=='a')
           {
               if (z[i+2]=='h'||z[i+2]=='o'||z[i+2]=='n')
               {
                  if (z[i+3]=='e'||z[i+3]=='r'||z[i+3]=='d')
                  {
                    continue;
                  }
               }  
           } 
           else if (z[i+1]=='w'&&z[i+2]=='i'&&z[i+3]=='t'&&z[i+4]=='h')
           {
            continue;   
           }
            else
            {
                printf("%s",z[i+1]);
            }
            
       }
    }
    
    
}

