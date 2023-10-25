#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	//TEST 1
	const char	*s = "42 is the answer.";
	int 		c = 'e';

	char 		*result = ft_memchr(s, c, 9);
	char		*result_check = memchr(s, c, 9);

	if (result == result_check)
		printf("\033[0;32mTest 1 passed!\n\033[0m");
	else
		printf("\033[0;31mTest 1 Failed!\n\33[0m");
	printf("Result: %s\nResult Check: %s\n", result, result_check);

	//TEST 2
	char 		*result2 = ft_memchr("bonjourno", 'n', 2);
	char		*result_check2 = memchr("bonjourno", 'n', 2);

	if (result2 == result_check2)
		printf("\033[0;32mTest 2 Passed!\n\033[0m");
	else
		printf("\033[0;31mTest 2 Failed!\n\33[0m");
	printf("Result: %s\nResult Check: %s\n", result2, result_check2);

}