#include <unistd.h>

int main (int argc, char **argv)
{

int number ;
int x;
int y;

number = 1 ;

while (number < 100)
{
	if ( number % 3 == 0)
		write(1 , "fizz" , 4);
	else if ( number %5 == 0)
		write (1 , "buzz", 4);
	else if ( number % 15 == 0)
		write (1 , "fizbuzz", 8);
	else if (number < 10)
	{
		number += 48;
		write(1, &number, 1);
		number -= 48;
	}
	else if(number > 9)
	{
		x = number / 10 + 48;
		y = number % 10 + 48;
		write(1, &x ,1);
		write(1, &y, 1);
	}
	number++ ;
	write(1, "\n", 1);
}
	write(1, "buzz", 4);
	write(1, "\n", 1);