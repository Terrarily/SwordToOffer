#include <stdio.h>
#include <string.h>

int isAnagram(char *s,char *t)
{
    int obj[26] = {0};
    int i = 0;
    int s_size = strlen(s);
    int t_size = strlen(t);

    for ( i = 0; i < s_size; i++)
    {
        obj[s[i] - 'a']++;
    }
    for ( i = 0; i < t_size; i++)
    {
        obj[t[i] - 'a']--;
    }

    for ( i = 0; i < 26; i++)
    {
        if (obj[i] != 0)
        {
            return 0;
        }
    }
    return 1;
}

int main(int argc, char const *argv[])
{
    
    return 0;
}
