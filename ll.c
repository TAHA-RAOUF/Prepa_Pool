#include <unistd.h>

int main(int ac,char **av)
{
    int i;
    int j;
    int l;
    if(ac == 3)
    {
        i = 0;
        while(av[1][i])
        {
            j = 0;
            l = 0;
            while(av[2][j])
            {
                if(av[1][i] == av[2][j])
                {
                    l++;
                    break;
                }
                j++;
            }
            i++;
        }
        if(av[1][l] != '\0')
        {
            l = 0;
            while(av[1][l])
            {
                write(1,&av[1][l],1);
                l++;
            }
        }
    }
    write(1,"\n",1);
}