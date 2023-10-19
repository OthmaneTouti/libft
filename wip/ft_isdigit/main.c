#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int dig);

int	main(void)
{
	//TEST 1
	char	dig = '0';
	int	result;
	int	result_check;

	result = ft_isdigit(dig);
	result_check = isdigit(dig);

	if (result == result_check)
		printf("\033[0;32mTest 1 passed!\n\033[0m");
	else
	{
		printf("\033[0;31mTest 1 Failed!\n\33[0m");
		printf("Result: %d\nResult Check: %d\n", result, result_check);
	}

	//TEST 2
	dig = '9';
	result = ft_isdigit(dig);
	result_check = isdigit(dig);

	if (result == result_check)
		printf("\033[0;32mTest 2 passed!\n\033[0m");
	else
	{
		printf("\033[0;31mTest 2 Failed!\n\33[0m");
		printf("Result: %d\nResult Check: %d\n", result, result_check);
	}
	
	//TEST 3
	dig = 'a';
	result = ft_isdigit(dig);
	result_check = isdigit(dig);

	if (result == result_check)
		printf("\033[0;32mTest 3 passed!\n\033[0m");
	else
	{
		printf("\033[0;31mTest 3 Failed!\n\33[0m");
		printf("Result: %d\nResult Check: %d\n", result, result_check);
	}

	//TEST 4
	dig = '\0';
	result = ft_isdigit(dig);
	result_check = isdigit(dig);

	if (result == result_check)
		printf("\033[0;32mTest 4 passed!\n\033[0m");
	else
	{
		printf("\033[0;31mTest 4 Failed!\n\33[0m");
		printf("Result: %d\nResult Check: %d\n", result, result_check);
	}
}