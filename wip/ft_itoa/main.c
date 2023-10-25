#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	main(void)
{
	//TEST 1
	int n = 42;
	char *num_str = ft_itoa(n);
	char *num_str_check = "42";

	if (!ft_strncmp(num_str, num_str_check, ft_strlen(num_str_check)))
		printf("\033[0;32mTest 1 passed!\n\033[0m");
	else
		printf("\033[0;31mTest 1 Failed!\n\33[0m");
	printf("Number string: %s\nNumber String Check: %s\n", num_str, num_str_check);

	//TEST 2
	n = -42;
	char *num_str2 = ft_itoa(n);
	char *num_str_check2 = "-42";

	if (!ft_strncmp(num_str2, num_str_check2, ft_strlen(num_str_check2)))
		printf("\033[0;32mTest 2 passed!\n\033[0m");
	else
		printf("\033[0;31mTest 2 Failed!\n\33[0m");
	printf("Number string: %s\nNumber String Check: %s\n", num_str2, num_str_check2);

	//TEST 3
	n = -2147483648;
	char *num_str3 = ft_itoa(n);
	char *num_str_check3 = "-2147483648";

	if (!ft_strncmp(num_str3, num_str_check3, ft_strlen(num_str_check3)))
		printf("\033[0;32mTest 3 passed!\n\033[0m");
	else
		printf("\033[0;31mTest 3 Failed!\n\33[0m");
	printf("Number string: %s\nNumber String Check: %s\n", num_str3, num_str_check3);

	//TEST 4
	n = 2147483647;
	char *num_str4 = ft_itoa(n);
	char *num_str_check4 = "2147483647";

	if (!ft_strncmp(num_str4, num_str_check4, ft_strlen(num_str_check4)))
		printf("\033[0;32mTest 4 passed!\n\033[0m");
	else
		printf("\033[0;31mTest 4 Failed!\n\33[0m");
	printf("Number string: %s\nNumber String Check: %s\n", num_str4, num_str_check4);

	//TEST 5
	n = 0;
	char *num_str5 = ft_itoa(n);
	char *num_str_check5 = "0";

	if (!ft_strncmp(num_str5, num_str_check5, ft_strlen(num_str_check5)))
		printf("\033[0;32mTest 5 passed!\n\033[0m");
	else
		printf("\033[0;31mTest 5 Failed!\n\33[0m");
	printf("Number string: %s\nNumber String Check: %s\n", num_str5, num_str_check5);



}