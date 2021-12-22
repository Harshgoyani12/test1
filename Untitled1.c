#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(isalnum(ch))
        printf("%c is alphanumeric",ch);
    else
        printf("%c is not alphanumeric",ch);

        if(isalpha(ch))
            printf("%c is alphabet",ch);
        else
            printf("%c is not alphabet",ch);

    if(isdigit(ch))
        printf("%c is digit",ch);
    else
        printf("%c is not digit",ch);

        if(isspace(ch))
            printf("%c is space",ch);
        else
            printf("%c is not space",ch);

            if(isupper(ch))
            printf("%c is in uppercase",ch);
            else
                printf("%c is not in uppercase",ch);

              if(ispunct(ch))
              printf("%c is in punct",ch);
            else
                printf("%c is not in punct",ch);

                printf("%c",toupper(ch));
                printf("\n%c",tolower(ch));

}
