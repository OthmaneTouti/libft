#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	//TEST 1
	char	str[] = "Start Stop";
	char	str_check[] = "Start Stop";
	int		test_fail = 0;

	ft_memmove(str, str + 6, 4 * sizeof(char));
	memmove(str_check, str_check + 6, 4 * sizeof(char));
	int i = 0;
	while (str[i])
	{
		if (str[i] != str_check[i])
		{
			printf("\033[0;31mTest 1 Failed!\n\33[0m");
			printf("Destination: %s\nDestination Check: %s\n", str, str_check);
			test_fail = 1;
			break ;
		}
		i++;
	}
	if (!test_fail)
	{
		printf("\033[0;32mTest 1 passed!\n\033[0m");
		printf("Destination: %s\nDestination Check: %s\n", str, str_check);
	}

	//TEST 2
	char	str2[] = "Start Stop";
	char	str_check2[] = "Start Stop";
	test_fail = 0;

	ft_memmove(str2 + 2, str2, 6 * sizeof(char));
	memmove(str_check2 + 2, str_check2, 6 * sizeof(char));
	i = 0;
	while (str2[i])
	{
		if (str2[i] != str_check2[i])
		{
			printf("\033[0;31mTest 2 Failed!\n\33[0m");
			printf("Destination: %s\nDestination Check: %s\n", str2, str_check2);
			test_fail = 1;
			break ;
		}
		i++;
	}
	if (!test_fail)
	{
		printf("\033[0;32mTest 2 passed!\n\033[0m");
		printf("Destination: %s\nDestination Check: %s\n", str2, str_check2);
	}
}
