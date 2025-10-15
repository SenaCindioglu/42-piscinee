#include <stdio.h>

int main (int argc, char **argv)
{
	int i ;
	i = 0;
if (argc == 2)
{
	while (argv[0][i] != '\0')
	{
		if (argv[1][i] > 'a' && argv[1][i] < 'z')
			argv[1][i] = argv[1][i] +1 ; 
		else if(argv[1][i] > 'A' && argv[1][i] < 'Z')
			argv[1][i] = argv[1][i] +1 ;
		else if ( argv[1][i] == 'a'  || argv[1][i] == 'A')
			argv[1][i] = argv[1][i] + 25;
		else if(argv[1][i] == 'z' || argv[1][i] == 'Z')
			argv[1][i] = argv[1][i] - 25;
		i++;
	}
	printf("%s", argv[1]);
}
}