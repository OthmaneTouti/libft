#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	//TEST 1
	char	c = '0';
	int		result;
	int		result_check;

	result = ft_isprint(c);
	result_check = isprint(c);

	if (result == result_check)
		printf("\033[0;32mTest 1 passed!\n\033[0m");
	else
	{
		printf("\033[0;31mTest 1 Failed!\n\33[0m");
		printf("Result: %d\nResult Check: %d\n", result, result_check);
	}

	//TEST 2
	c = '/';

	result = ft_isprint(c);
	result_check = isprint(c);

	if (result == result_check)
		printf("\033[0;32mTest 2 passed!\n\033[0m");
	else
	{
		printf("\033[0;31mTest 2 Failed!\n\33[0m");
		printf("Result: %d\nResult Check: %d\n", result, result_check);
	}

	//TEST 3
	c = '-';

	result = ft_isprint(c);
	result_check = isprint(c);

	if (result == result_check)
		printf("\033[0;32mTest 3 passed!\n\033[0m");
	else
	{
		printf("\033[0;31mTest 3 Failed!\n\33[0m");
		printf("Result: %d\nResult Check: %d\n", result, result_check);
	}

	//TEST 4
	c = ']';

	result = ft_isprint(c);
	result_check = isprint(c);

	if (result == result_check)
		printf("\033[0;32mTest 4 passed!\n\033[0m");
	else
	{
		printf("\033[0;31mTest 4 Failed!\n\33[0m");
		printf("Result: %d\nResult Check: %d\n", result, result_check);
	}

	//TEST 5
	c = '	';

	result = ft_isprint(c);
	result_check = isprint(c);

	if (result == result_check)
		printf("\033[0;32mTest 5 passed!\n\033[0m");
	else
	{
		printf("\033[0;31mTest 5 Failed!\n\33[0m");
		printf("Result: %d\nResult Check: %d\n", result, result_check);
	}

	//TEST 6
	c = '\0';

	result = ft_isprint(c);
	result_check = isprint(c);

	if (result == result_check)
		printf("\033[0;32mTest 6 passed!\n\033[0m");
	else
	{
		printf("\033[0;31mTest 6 Failed!\n\33[0m");
		printf("Result: %d\nResult Check: %d\n", result, result_check);
	}
}