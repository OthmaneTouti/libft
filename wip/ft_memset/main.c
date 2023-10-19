#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	//TEST 1
	char *str = (char *) malloc(sizeof(char) * 15);
	char *str_check = (char *) malloc(sizeof(char) * 15);
	size_t len = 15;
	int test_fail = 0;

	ft_memset(str, 122, len);
	memset(str_check, 122, len);

	int i = 0;
	while (str[i])
	{
		if (str[i] != str_check[i])
		{
			printf("\033[0;31mTest 1 Failed!\n\33[0m");
			printf("string: %s\nstring check: %s\n", str, str_check);
			test_fail = 1;
			break ;
		}
		i++;
	}
	if (!test_fail)
	{
		printf("\033[0;32mTest 1 passed!\n\033[0m");
		printf("string: %s\nstring check: %s\n", str, str_check);
	}
	free(str);
	free(str_check);

	//TEST 2
	char *str2 = (char *) malloc(sizeof(char) * 150);
	char *str_check2 = (char *) malloc(sizeof(char) * 150);
	size_t len2 = 20;
	test_fail = 0;

	ft_memset(str2, 115, len2);
	memset(str_check2, 115, len2);

	i = 0;
	while (str2[i])
	{
		if (str2[i] != str_check2[i])
		{
			printf("\033[0;31mTest 2 Failed!\n\33[0m");
			printf("string: %s\nstring check: %s\n", str2, str_check2);
			test_fail = 1;
			break ;
		}
		i++;
	}
	if (!test_fail)
	{
		printf("\033[0;32mTest 2 passed!\n\033[0m");
		printf("string: %s\nstring check: %s\n", str2, str_check2);
	}
	free(str2);
	free(str_check2);
	return (0);
}