#include <unistd.h>
void ft_putstr(char *str)
{
    int i = 0;
    while(str[i])
    {
        write(1,&str[i],1);
        i++;
    }
}
void ft_swap(char *s1,char *s2)
{
    char tmp;
    tmp = *s1;
    *s1 = *s2;
    *s2 = tmp;
}
int *ft_strcmp(char *s1,char *s2)
{
    int i = 0;
    while(s2[i] || s1[i])
    {
        if(s1[i] != s2[i])
        {
            return(s1[i] - s2[i]);
        }
        i++;
    }
    return(0);
}
int main(int ac ,char **av)
{
    int i = 0;
    int n;
    int j = ac -1;
    while(av[j][i])
    {
       n =  ft_strcmp(av[j][i],av[j+ 1][i]);
        if(n != 0)
        {
            ft_swap(av[j][i],av[j + 1][i]);
        }
        i++;
    }
    ft_putstr(av[j]);
    j++;
}