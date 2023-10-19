#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(char c);

int	main(void)
{
	//TEST 1
	char	c = 'O';
	int	result;
	int	result_check;

	result = ft_isalpha(c);
	result_check = isalpha(c);

	if (result == result_check)
		printf("\033[0;32mTest 1 passed!\n\033[0m");
	else
		printf("\033[0;31mTest 1 Failed!\n\33[0m");

	//TEST 2
	c = '4';
	result = ft_isalpha(c);
	result_check = isalpha(c);

	if (result == result_check)
		printf("\033[0;32mTest 2 passed!\n\033[0m");
	else
		printf("\033[0;31mTest 2 Failed!\n\33[0m");
	
	//TEST 3

	c = '\0';
	result = ft_isalpha(c);
	result_check = isalpha(c);

	if (result == result_check)
		printf("\033[0;32mTest 3 passed!\n\033[0m");
	else
		printf("\033[0;31mTest 3 Failed!\n\33[0m");

	//TEST 4

	c = 'z';
	result = ft_isalpha(c);
	result_check = isalpha(c);

	if (result == result_check)
		printf("\033[0;32mTest 4 passed!\n\033[0m");
	else
		printf("\033[0;31mTest 4 Failed!\n\33[0m");
}