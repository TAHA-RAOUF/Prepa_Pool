char *strrev(char * str)
{
    int i = 0;
    int end = 0;
    char tmp;
    while(str[i])
        i++;
    end = i - 1;
    i = 0;
    
    while(str[i])
    {
        if(i < end)
        {
            tmp = str[i];
            str[i] = str[end];
            str[end] = tmp;
        }
        i++;
        end--;
    }
    return(str);
}
#include <stdio.h>
int main()
{
    char c[] = "taha";
    printf("%s",strrev(c));

}