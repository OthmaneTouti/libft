#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

int	main(void)
{
	//TEST 1
	char	dst[18] = "42 ";
	char	dst_check[18] = "42 ";
	char	*src = "is the answer.";
	size_t	dstsize = 18;
	int		test_fail = 0;

	size_t src_len = ft_strlcat(dst, src, dstsize);
	size_t src_len_check = strlcat(dst_check, src, dstsize);

	int i = 0;
	while (dst[i])
	{
		if (dst[i] != dst_check[i])
		{
			printf("\033[0;31mTest 1 Failed!\n\33[0m");
			printf("Destination: %s\nDestination Check: %s\n", dst, dst_check);
			printf("Source Length: %zu\nSource Length Check: %zu\n", src_len, src_len_check);
			test_fail = 1;
			break ;
		}
		i++;
	}
	if (!test_fail)
	{
		printf("\033[0;32mTest 1 passed!\n\033[0m");
		printf("Destination: %s\nDestination Check: %s\n", dst, dst_check);
		printf("Source Length: %zu\nSource Length Check: %zu\n", src_len, src_len_check);
	} 

	//TEST 2
	char	dst2[7] = "42 ";
	char	dst_check2[7] = "42 ";
	char	*src2 = "is the answer.";
	size_t	dstsize2 = 7;
	test_fail = 0;

	size_t src_len2 = ft_strlcat(dst2, src2, dstsize2);
	size_t src_len_check2 = strlcat(dst_check2, src2, dstsize2);

	i = 0;
	while (dst2[i])
	{
		if (dst2[i] != dst_check2[i])
		{
			printf("\033[0;31mTest 2 Failed!\n\33[0m");
			printf("Destination: %s$\nDestination Check: %s$\n", dst2, dst_check2);
			printf("%c != %c\n", dst2[i], dst_check2[i]);
			printf("Source Length: %zu\nSource Length Check: %zu\n", src_len2, src_len_check2);
			test_fail = 1;
			break ;
		}
		i++;
	}
	if (!test_fail)
	{
		printf("\033[0;32mTest 2 passed!\n\033[0m");
		printf("Destination: %s$\nDestination Check: %s$\n", dst2, dst_check2);
		printf("Source Length: %zu\nSource Length Check: %zu\n", src_len2, src_len_check2);
	}
}