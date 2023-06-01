#include <stdio.h>

/* Version of strstr, which returns the adress of
   the first occurrence of s2 in s1, else, NULL
*/
char *strs(char *s1, char* s2)
{
    char *ptr = NULL;
    int i, n;

    for (i = 0, n = 0; s1[i] != '\0'; i++)
    {
        if (s1[i] == s2[n])
        {
            if (n == 0)
                ptr = &(s1[i]);
            if (s2[n + 1] == '\0')
                return ptr;
            ++n;
        }
        else
            n = 0;
    }
    return NULL;
}

int main(void)
{
    char s1[] = "vadiraj gangur lives in bengaluru\nWorking at pthinks pvt\n";
    char s2[] = "gangur";
    char *ptr = strs(s1, s2);

    if (ptr == NULL)
    {
        printf("There is no occurrence of \"%s\" in the first string!\n",
               s2);
    }
    else
    {
        printf("%s\n", ptr);
    }
}
