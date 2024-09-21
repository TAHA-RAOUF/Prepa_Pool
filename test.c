#include <unistd.h>
void ft_ptr(int *ptr)
{
    (*ptr) *= 2;
}
void ft_putchar(char c)
{
    write(1,&c,1);
}
void ft_putnbr(int nbr)
{
    int i = 0;
    if(nbr >  9 )
    {
        ft_putnbr(nbr /10);
        ft_putnbr(nbr % 10);
    }
    else
    {
        ft_putchar(nbr + 48);
    }
    i++;
}
int main()
{
    int p ;
    int i = 0;
    while (i <= 9)
    {
        if(i % 2 == 0)
        {   
            p = i;
            ft_ptr(&p);
            ft_putnbr(p);
            write(1," even",5);
        }
        else 
           ft_putnbr(i);
        write(1,"\n",1);
        i++;
    }
    
}