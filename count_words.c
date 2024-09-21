#include <stdio.h>

int ft_countword(char *str)
{
    int i = 0;
    int count = 0;

    while(str[i])
    {
        while(str[i] == 32)
            i++;
        if(str[i])
            count++;
        while(str[i] && str[i] != 32)
            i++;
    }
    return(count);
}
int main()
{
    printf("%d",ft_countword("    taha is a good man"));
}