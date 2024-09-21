#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


char *ft_itoa(int nb){
    long i = 0;
    long count = 0;
    long j = 1;
    long nbb = 1;
    char *str;
    long lenght;
    nbb = nb;
    if(nbb < 0)
    {
        nbb = -nbb;
        j = 2;
    }

    i = nbb;
    while(i > 0)
    {
        i = i / 10;
        count++;
    }
    lenght = count + j;
    str = malloc(sizeof(char) * (lenght));
    if(!str)
        return(0);
    i = nbb;
    lenght--;
    str[lenght] = '\0';
    lenght--;
    while(lenght >= 0)
    {
        if(i > 0)
        {
            i = (i % 10) ;
            str[lenght] = i + 48;
            nbb = nbb / 10;
            i = nbb;
        }
        lenght--;
    }
    if(j == 2)
    {
        str[0] = '-';
    }
    return(str);
    
}
int main()
{
    char *s;
    s = ft_itoa(-2147483648);
    printf("%s",s);
    free(s);
}