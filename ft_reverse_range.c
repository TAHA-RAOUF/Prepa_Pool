#include <stdlib.h>
#include <stdio.h>
int     *ft_rrange(int start, int end)
{
    int i = 0;
    int size = 0;
    int *tab = 0;

    size = end - start;
    if(size < 0)
        size *= -1;
    tab = malloc(sizeof(int) * (size + 1));
    if(!tab)
        return(NULL);
    while(i < size + 1)
    {
        if(start <= end)
        {
            tab[i] = end;
            end--;
        }
        else if(start > end)
        {
            tab[i] = end;
            end++;
        }
        i++;
    }
    return(tab);
}
int main()
{
    int min = 3;
    int max = -1;
    int size = max - min;
    if(size < 0)
        size *= -1;
    int *tab;
    tab = ft_rrange(min,max);
    int i = 0;
    while(i < size + 1)
    {
        printf("%d ",tab[i]);
        i++;
    }
}