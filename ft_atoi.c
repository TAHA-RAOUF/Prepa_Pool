#include <stdio.h>

int ft_atoi(char *str)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if(str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	else if(str[i] == '+')
		i++;
	while(str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return(result * sign);
}
int main()
{
    char c[] = "    \n\n\v\f\r\t -2147483648AAAgregh88rsth";
    printf("%i",ft_atoi(c));
}