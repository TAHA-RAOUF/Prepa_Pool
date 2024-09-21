char *ft_strcpy(char *src,char *dest)
{
    int i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest = '\0';
    return (dest);
}
#include <stdio.h>
int main()
{
    char a[] = "alae";
    char b[5];
    ft_strcpy (a ,b);
    printf("%s",b);
    return (0);
}