int     max(int* tab, unsigned int len){
    unsigned  i = 0;
    int max = 0;
    while(i < len)
    {
        if(tab[i] > max)
        {
            max = tab[i];
        }
        i++;
    }
    return(max);
}
#include <stdio.h>
int main()
{
    int c[] = {1,33,5,6,9};
    printf("%d",max(c,0));
}

