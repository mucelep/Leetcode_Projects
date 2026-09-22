char* longestCommonPrefix(char** strs, int strsSize)
{
    int i;
    int j;
    char *result;

    result = malloc(strlen(strs[0]) + 1);
    i = 0;

    while (strs[0][i])//referans bir kelime sec
    {
        j = 1;
        while (j < strsSize)//ref kelimenin ilk harfi (i) ile diger kelimelerin harflerini kıyasla
        {
            if (strs[j][i] != strs[0][i])
            {
                result[i] = '\0';// fark varsa null ekle bitir
                return (result);
            }
            j++;
        }
        result[i] = strs[0][i];// fark yoksa sonuça ekle demekki aynı
        i++;
    }
    result[i] = '\0';
    return(result);
}