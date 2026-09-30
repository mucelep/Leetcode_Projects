#include <string.h>

int strStr(char* haystack, char* needle)
{
    int i = 0;
    int j;

    int len = strlen(needle);
    while (haystack[i])
    {
        j = 0;
        while (needle[j] != '\0' && haystack[i + j] == needle[j])
            j++;
        if (!needle[j])
            return (i);
        i++;
    }
    return (-1);
}