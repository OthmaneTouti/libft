#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

int	main(void)
{
	//TEST 1
	char const *s = "42 is the answer.";
	unsigned int start = 10;
	size_t len = 6;

	char *sub_s = ft_substr(s, start, len);
	char *check = "answer";

	if (!ft_strncmp((const char *)sub_s, (const char *)check, len))
		printf("\033[1;32mTest 1 Passed!\033[1;0m\n");
	else
		printf("\033[1;31mTest 1 Failed!\033[1;0m\n");
	printf("Substring: %s\nShould be: %s\n", sub_s, check);
	free(sub_s);
}