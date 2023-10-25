#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	//TEST 1
	char*	str = "42";
	int		result;
	int		result_check;

	result = ft_strlen(str);
	result_check = strlen(str);

	if (result == result_check)
		printf("\033[0;32mTest 1 passed!\n\033[0m");
	else
	{
		printf("\033[0;31mTest 1 Failed!\n\33[0m");
		printf("Result: %d\nResult Check: %d\n", result, result_check);
	}

	//TEST 2
	char*	str2 = "This sentence has a length of 33.";

	result = ft_strlen(str2);
	result_check = strlen(str2);

	if (result == result_check)
		printf("\033[0;32mTest 2 passed!\n\033[0m");
	else
	{
		printf("\033[0;31mTest 2 Failed!\n\33[0m");
		printf("Result: %d\nResult Check: %d\n", result, result_check);
	}

	//TEST 3
	char*	str3 = "";

	result = ft_strlen(str3);
	result_check = strlen(str3);

	if (result == result_check)
		printf("\033[0;32mTest 3 passed!\n\033[0m");
	else
	{
		printf("\033[0;31mTest 3 Failed!\n\33[0m");
		printf("Result: %d\nResult Check: %d\n", result, result_check);
	}

	//TEST 4
	char*	str4 = "\0";

	result = ft_strlen(str4);
	result_check = strlen(str4);

	if (result == result_check)
		printf("\033[0;32mTest 4 passed!\n\033[0m");
	else
	{
		printf("\033[0;31mTest 4 Failed!\n\33[0m");
		printf("Result: %d\nResult Check: %d\n", result, result_check);
	}

	//TEST 5
	char* str5 = "		";

	result = ft_strlen(str5);
	result_check = strlen(str5);

	if (result == result_check)
		printf("\033[0;32mTest 5 passed!\n\033[0m");
	else
	{
		printf("\033[0;31mTest 5 Failed!\n\33[0m");
		printf("Result: %d\nResult Check: %d\n", result, result_check);
	}

	//TEST 6
	char* str6 = "laisdi jsdlijaw iwjdsd 6a5s4 s5 4wd 4as54d 54e6a5s4d awd a6s5d4 w5d4 asd54";

	result = ft_strlen(str6);
	result_check = strlen(str6);

	if (result == result_check)
		printf("\033[0;32mTest 6 passed!\n\033[0m");
	else
	{
		printf("\033[0;31mTest 6 Failed!\n\33[0m");
		printf("Result: %d\nResult Check: %d\n", result, result_check);
	}
}