#include <stdio.h>

char	*ft_strcat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && j < nb )
	{
		dest[i] = src [j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
int main()
{
    char c[10] = "taja";
    char d[] = "ali";
    printf("%s",ft_strcat(c,d,2));
}
