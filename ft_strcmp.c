int    ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    while(s1[i] || s2[i])
    {
        if(s1[i] != s2[i])
            return(s1[i] - s2[i]);
        i++;
    }
    return(0);
}
#include <stdio.h>
int main()
{
    char c[] = "taha";
    char s[] = "saad";
    printf("%d",ft_strcmp(c,s));
}