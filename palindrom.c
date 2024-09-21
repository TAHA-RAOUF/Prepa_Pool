#include <unistd.h>
void  is_palindrome(char *str)
{
    int start = 0;
    while(str[start])
        start++;
    int end = start - 1;
    start = 0;
    while(start < end)
    {
        if(str[start] != str[end])
            return;
        end--;
        start++;
    }
    int i = 0;
    while(str[i])
    {
        write(1,&str[i],1);
        i++;
    }
}
#include <stdio.h>
int main(int ac,char **av)
{
    if(ac == 2)
        is_palindrome(av[1]);
    write(1,"\n",1);
}
