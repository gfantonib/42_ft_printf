#include <stdio.h>
#include <stdarg.h>

void	print_integers(int count, ...) 
{
	va_list		args;
	int		num;
	int		i;
    	
    	va_start(args, count);
	i = 0;
	while (i < count)
	{
		num = va_arg(args, int);
		printf("%d ", num);
		i++;
	}
    	va_end(args);
    	printf("\n");
}

void	print_chars(char *count, ...)
{
	va_list		args;
	char		*c;
	int		i;

	va_start(args, count);
	i = 0;
	while (i < 5)
	{
		c = va_arg(args, char*);
		printf("%s ", c);
		i++;
	}
	va_end(args);
	printf("\n");
	printf("%s\n", count);
}

int	main() 
{
	print_integers(5, 10, 20, 30, 40);
	print_chars("Hammingway", "Mel", "Eve", "Adam", "Fletcher");
    	return 0;
}
