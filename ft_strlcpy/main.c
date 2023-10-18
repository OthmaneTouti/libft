#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

int	main(void)
{
	//TEST 1
	char	*dst = (char *) malloc(18 * sizeof(char));
	char	*dst_check = (char *) malloc(18 * sizeof(char));
	char	*src = "42 is the answer.";
	size_t	dstsize = 18;
	int		test_fail = 0;

	size_t src_len = ft_strlcpy(dst, src, dstsize);
	size_t src_len_check = strlcpy(dst_check, src, dstsize);

	int i = 0;
	while (dst[i])
	{
		if (dst[i] != dst_check[i])
		{
			printf("\033[0;31mTest 1 Failed!\n\33[0m");
			printf("Destination: %s\nDestination Check: %s\n", dst, dst_check);
			printf("Source Length: %d\nSource Length Check: %d\n", src_len, src_len_check);
			test_fail = 1;
			break ;
		}
		i++;
	}
	if (!test_fail)
	{
		printf("\033[0;32mTest 1 passed!\n\033[0m");
		printf("Destination: %s\nDestination Check: %s\n", dst, dst_check);
		printf("Source Length: %d\nSource Length Check: %d\n", src_len, src_len_check);
	}
}