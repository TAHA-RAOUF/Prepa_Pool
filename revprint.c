#include <stdio.h>
#include <unistd.h>
char *revprint(char *str)
{
    int j = 0;
    while(str[j])
    {
        j++;
    }
    while(j--)
    {
        write(1,&str[j],1);
    }
    return(str);
}
int main()
{
    printf("%s",revprint("taha"));
}