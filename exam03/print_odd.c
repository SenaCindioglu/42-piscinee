int	check(char c)
{
	if (c == ' ')
	{
		return 0;
	}
	else return 1;
}
#include<stdio.h>
int	count_words(char *str)
{
	int i = 0;
	int count = 0;
	while (str[i])
	{
		while(str[i] && check(str[i]) == 0)
		{
			i++;
		}
		if (str[i] && check(str[i]) == 1)
		{
			count++;
		}
		while(str[i] && check(str[i]) == 1)
		{
			i++;
		}
	}
	return (count);	
}	

int	main(int ac, char **av)
{
	
	int i;
	if(ac == 2)
	{
   			i= count_words(av[1]);
			printf("%d", i);
	}
	printf("\n");
	return 0;
}
