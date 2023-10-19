#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	//TEST 1
	const char *s = "42 is the answer.";
	int			c = 'e';

	char *result = ft_strrchr(s, c);
	char *result_check = strrchr(s, c);

	if (result == result_check)
		printf("\033[0;32mTest 1 passed!\n\033[0m");
	else
		printf("\033[0;31mTest 1 Failed!\n\33[0m");
	
	//TEST 2
	const char *s2 = "42 is the answer.";
	int			c2 = 0;

	char *result2 = ft_strrchr(s2, c2);
	char *result_check2 = strrchr(s2, c2);

	if (result2 == result_check2)
		printf("\033[0;32mTest 2 passed!\n\033[0m");
	else
		printf("\033[0;31mTest 2 Failed!\n\33[0m");

	//TEST 
	const char *s3 = "42 is the answer.";
	int			c3 = 'z';

	char *result3 = ft_strrchr(s3, c3);
	char *result_check3 = strrchr(s3, c3);

	if (result3 == result_check3)
		printf("\033[0;32mTest 3 passed!\n\033[0m");
	else
		printf("\033[0;31mTest 3 Failed!\n\33[0m");
}