#include <stdio.h>
void ft_subtract(int a,int *ptr)
{
    *ptr -= a;
}
int main()
{
    int n = 3;
    int p = 5;
    ft_subtract(n,&p);
    printf("%d",p);
}