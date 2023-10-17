#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char	*src = "Start Stop";
	char	*dst = (char *) malloc(sizeof(src)/sizeof(char));
	char	*dst_check = (char *) malloc(sizeof(src)/sizeof(char));
	char	*original_dst;
	char	*original_dst_check;
	//t_size	len = ft_strlen(str) + sizeof(char);
	int		test_fail = 0;

	original_dst = ft_memmove(str, str + 6, 4 * sizeof(char));
	original_dst_check = memmove(str_check, str_check + 6, 4 * sizeof(char));
	int i = 0;
	while (str[i])
	{
		if (str[i] != str_check[i])
		{
			printf("\033[0;31mTest 1 Failed!\n\33[0m");
			printf("Destination: %s\nOriginal Destination: %s\n", str, original_dst);
			printf("Destination Check: %s\nOriginal Destination Check: %s\n", str_check, original_dst_check);
			test_fail = 1;
			break ;
		}
		i++;
	}
	if (!test_fail)
	{
		printf("\033[0;32mTest 1 passed!\n\033[0m");
		printf("Destination: %s\nOriginal Destination: %s\n", str, original_dst);
		printf("Destination Check: %s\nOriginal Destination Check: %s\n", str_check, original_dst_check);
	}
}
