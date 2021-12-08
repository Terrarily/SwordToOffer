#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *replaceSpace(char *s)
{
    int i = 0;
    char *ch = (char *)malloc(30000);
    char *tmp = s;
    char str[4] = "%20";
    for ( i = 0; s[i] != '\0'; i++)
    {
        if (s[i] != ' ')
        {
            continue;
        }
        //printf("111111111111\n");
        s[i] = '\0';
        strcat(ch,tmp);
        strcat(ch,str);
        tmp = s + i + 1;
    }
    strcat(ch,tmp);
    return ch;

}

int main(int argc, char const *argv[])
{
    char s[10] = "i am hello";
    printf("tmp = %s\n",replaceSpace(s));
    return 0;
}
