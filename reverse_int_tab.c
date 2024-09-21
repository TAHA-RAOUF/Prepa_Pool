#include <stdio.h>
#include <unistd.h>
void ft_rev_int_tab(int *tab, int size)
{
    int tmp;
    int start = 0;
    int end = size -1;

    if(size > 0)
    {
        while(start < end)
        {
            tmp = tab[start];
            tab[start] = tab[end];
            tab[end] = tmp;
            start++;
            end--;
        }
    }
}
int main()
{
    int c[] = {1,2,3,4,6};
    int i = 0;
    int size = 5;
    ft_rev_int_tab(c,size);
    while(i < size)
    {
        printf("%d",c);
        i++;
    }
}