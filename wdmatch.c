#include <unistd.h>

int main(int ac,char **av)
{
    int i = 0;
    int j = 0;
    int l = 0;
    if(ac == 3)
    {
        while(av[1][i])
        {
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
        if(av[1][l] == '\0')
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