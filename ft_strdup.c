#include <unistd.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int i = 0;
    int j = 0;
    char *str;

    if(src == 0)
        return(NULL);
    while(src[j])
        j++;
    str = malloc(sizeof(char) * (j + 1));
    if(!src)
        return(0);
    while(src[i])
    {
        str[i] = src[i];
        i++;
    }
    str[i] = '\0';
    return(str);
}
#include <stdio.h>
int main()
{
    char *s;
    s = ft_strdup(NULL);
    printf("%s",s);
}