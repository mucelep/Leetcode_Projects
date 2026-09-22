char* longestCommonPrefix(char** strs, int strsSize)
{
    int i;
    int j;
    char *result;

    result = malloc(strlen(strs[0]) + 1);
    i = 0;

    while (strs[0][i])
    {
        j = 1;
        while (j < strsSize)
        {
            if (strs[j][i] != strs[0][i])
            {
                result[i] = '\0';
                return (result);
            }
            j++;
        }
        result[i] = strs[0][i];
        i++;
    }
    result[i] = '\0';
    return(result);
}