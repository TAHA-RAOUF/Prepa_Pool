#include <stdio.h>
#include <stdlib.h>
char *output(char *str,unsigned int index)
{
    int i = 0;
    int lenght = 0;
    char *s;
    if(!str)
        return(NULL);
    while(str[i])
        i++;
    lenght = i - index;

    s = malloc(sizeof(char) * (lenght + 1));
    if(!s)
        return(0);
    i = 0;
    while(str[index])
    {
        s[i++] = str[index++];
    }
    s[i] = '\0';
    return(s);
}
int main()
{
    char *s;
    s = output(NULL,2);
    printf("%s",s);
}