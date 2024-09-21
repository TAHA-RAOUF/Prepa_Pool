#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char *strjoin(char *s1,char *s2)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char *s3;
    if(s1 == 0 || s2 == 0)
        return(0);
    while(s1[i])
        i++;
    while(s2[j])
        j++;
    s3 = malloc(sizeof(char) * (i + j + 1));
    if(!s3)
        return(NULL);
    i=0;
    while(s1[i])
       s3[k++] = s1[i++];
    j=0;
    while(s2[j])
        s3[k++] = s2[j++];
    s3[k] = '\0';
    return(s3);
}
int main()
{
    char *str;
    str =  strjoin("taha ","ali");
    printf("%s",str);
}