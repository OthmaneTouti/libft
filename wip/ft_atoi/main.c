#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	main(void)
{
	//TEST 1
	const char *str = "42";

	int result = ft_atoi(str);
	int result_check = atoi(str);

	if (result == result_check)
		printf("\033[0;32mTest 1 passed!\n\033[0m");
	else
	{
		printf("\033[0;31mTest 1 Failed!\n\33[0m");
		printf("Result: %d\nResult Check: %d\n", result, result_check);
	}

	//TEST 2
	const char *str2 = "-42";

	result = ft_atoi(str2);
	result_check = atoi(str2);

	if (result == result_check)
		printf("\033[0;32mTest 2 passed!\n\033[0m");
	else
	{
		printf("\033[0;31mTest 2 Failed!\n\33[0m");
		printf("Result: %d\nResult Check: %d\n", result, result_check);
	}

	//TEST 3
	const char *str3 = "--42";

	result = ft_atoi(str3);
	result_check = atoi(str3);

	if (result == result_check)
		printf("\033[0;32mTest 3 passed!\n\033[0m");
	else
	{
		printf("\033[0;31mTest 3 Failed!\n\33[0m");
		printf("Result: %d\nResult Check: %d\n", result, result_check);
	}

	//TEST 4
	const char *str4 = "  		42gfdd";

	result = ft_atoi(str4);
	result_check = atoi(str4);

	if (result == result_check)
		printf("\033[0;32mTest 4 passed!\n\033[0m");
	else
	{
		printf("\033[0;31mTest 4 Failed!\n\33[0m");
		printf("Result: %d\nResult Check: %d\n", result, result_check);
	}

	//TEST 5
	const char *str5 = "		+-42";

	result = ft_atoi(str5);
	result_check = atoi(str5);

	if (result == result_check)
		printf("\033[0;32mTest 5 passed!\n\033[0m");
	else
	{
		printf("\033[0;31mTest 5 Failed!\n\33[0m");
		printf("Result: %d\nResult Check: %d\n", result, result_check);
	}

	//TEST 6
	const char *str6 = "-654845484654844";

	result = ft_atoi(str6);
	result_check = atoi(str6);

	if (result == result_check)
		printf("\033[0;32mTest 6 passed!\n\033[0m");
	else
	{
		printf("\033[0;31mTest 6 Failed!\n\33[0m");
		printf("Result: %d\nResult Check: %d\n", result, result_check);
	}
}