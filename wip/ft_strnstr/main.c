#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	//TEST 1
	const char *haystack = "42 is the answer";
	const char *needle = "answer";

	char *result = ft_strnstr(haystack, needle, 18);
	char *result_check = strnstr(haystack, needle, 18);

	if (result == result_check)
		printf("\033[0;32mTest 1 passed!\n\033[0m");
	else
		printf("\033[0;31mTest 1 Failed!\n\33[0m");

	//TEST 2
	const char *needle2 = "angst";

	char *result2 = ft_strnstr(haystack, needle2, 18);
	char *result_check2 = strnstr(haystack, needle2, 18);

	if (result2 == result_check2)
		printf("\033[0;32mTest 2 passed!\n\033[0m");
	else
		printf("\033[0;31mTest 2 Failed!\n\33[0m");

	//TEST 3
	const char *needle3 = "answer";

	char *result3 = ft_strnstr(haystack, needle3, 5);
	char *result_check3 = strnstr(haystack, needle3, 5);

	if (result3 == result_check3)
		printf("\033[0;32mTest 3 passed!\n\033[0m");
	else
		printf("\033[0;31mTest 3 Failed!\n\33[0m");

	//TEST 4
	const char *needle4 = "potato";

	char *result4 = ft_strnstr(haystack, needle4, 25);
	char *result_check4 = strnstr(haystack, needle4, 25);

	if (result4 == result_check4)
		printf("\033[0;32mTest 4 passed!\n\033[0m");
	else
		printf("\033[0;31mTest 4 Failed!\n\33[0m");
}