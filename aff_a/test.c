#include <stdlib.h>

char *test(char *str)
{
    char *s3;
    int i = 0;
    int j = 0;
    int k = 0;
    while (str[i])
    {
        while(str[k] == ' ')
        {
            k++;
        }
        j--;
        s3 = malloc((sizeof(char) * j) - k);

        while(str[i] && j >= 0)
        {
            s3[i] = str[i];
            i++;
            j--;
        }
        i++;
    }
    s3[i] = '\0';
    return(s3);
}
#include <stdio.h>
int main()
{
    char c[] = "taha ali";
    printf("%s",test(c));
}