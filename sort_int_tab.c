#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
    int tmp;
    int i = 0;
    while(i < size -1)
    {
        if(tab[i] > tab[i + 1])
        {
            tmp = tab[i];
            tab[i ] = tab[i+1];
            tab[i+ 1] = tmp;
        }
        i++;
    }
}
int main()
{
    int c[] = {2,4,1,9,6};
    int size = 5;
    int i = 0;
    ft_sort_int_tab(c,size);
    while(i < size)
    {
        printf("%i",c[i]);
        i++;
    }
}


