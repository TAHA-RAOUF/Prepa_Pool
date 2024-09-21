#include <stdio.h>
#include <unistd.h>
int occ_a(char *str)
{
    int i = 0;
    int j = 0;
    while(str[i])
    {
        if(str[i] == 'A')
        {
            j++;
        }
        i++;
    }
    return(j);
}
int main()
{
    char c[] = "taaaha0))A";
    printf("%d",occ_a("taaaha0))A"));
}