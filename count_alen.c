#include <stdio.h>

int count_a_len(char *str){
    int i = 0;
    while (str[i])
    {
        if(str[i] == 'a')
        {
            break;
        }
        i++;
    }
    return(i);
}
int main()
{
    printf("%i",count_a_len("tjlk"));
}