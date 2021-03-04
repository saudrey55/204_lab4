#include<stdio.h>
#include<string.h>

void Acronym(char *s);

int main()
{
    char z[1000];

    scanf("%[^\n]s",z);
    Acronym(z);
}

void Acronym(char *s)
{
    int i;
    printf("%c", s[0]);
    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] == ' ')
        {
            i++;

            if ((s[i] == '0' && s[i + 1] == 'f') || (s[i] == '0' && s[i + 1] == 'n') || (s[i] == 'a' && s[i + 1] == 't') || (s[i] == 'a' && s[i + 1] == 'n') || (s[i] == 'i' && s[i + 1] == 'n'))
            {
                i += 3;
            }
            else if ((s[i] == 'i' && s[i + 1] == ' ') || (s[i] == 'a' && s[i + 1] == ' '))
            {
                i += 2;
            }
            else if ((s[i] == 't' && s[i + 1] == 'h' && s[i + 2] == 'e') || (s[i] == 'f' && s[i + 1] == 'o' && s[i + 2] == 'r'))
            {
                i += 4;
            }
            else if (s[i] == 'w' && s[i + 1] == 'i' && s[i + 2] == 't' && s[i + 3] == 'h')
                i += 5;
        }
        printf("%c", s[i]);
    }
}
