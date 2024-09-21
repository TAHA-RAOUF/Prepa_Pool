#include <stdio.h>
#include <stdlib.h>
int     *ft_range(int start, int end)
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
            tab[i] = start;
            start++;
        }
        else if(start > end)
        {
            tab[i] = start;
            start--;
        }
        i++;
    }
    return(tab);
}
int main()
{
    int min = 2147483645;
    int max = 2147483647;
    int size = max - min;
    if(size < 0)
        size *= -1;
    int *tab;
    tab = ft_range(min,max);
    int i = 0;
    while(i < size + 1)
    {
        printf("%d ",tab[i]);
        i++;
    }
}