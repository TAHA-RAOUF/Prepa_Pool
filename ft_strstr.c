#include <stdio.h>
#include <unistd.h>

char *ft_strstr(char *str, char *to_find)
{
    int i = 0;
    int j = 0;
    while(str[i] && str[i] == to_find[j])
    {
        write(1,&str[i],1);
        i++;
    }
}
int main()
{
    char c[] = "hello world ";
    char to[] = "wpo";
    ft_strstr(c,to);
    printf("%s",c);
}