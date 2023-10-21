#include <stdio.h>
#include "libft.h"

int	main(void)
{
	//TEST 1
	const char	*s1 = "42 is ";
	const char	*s2 = "the answer.";

	char *s_join = ft_strjoin(s1, s2);
	const char *s_join_check = "42 is the answer.";

	if (!ft_strncmp((const char*)s_join, s_join_check, ft_strlen(s_join)))
		printf("\033[0;32mTest 1 passed!\n\033[0m");
	else
		printf("\033[0;31mTest 1 Failed!\n\33[0m");
	printf("String 1: %s\nString 2: %s\nJoined String: %s\n", s1, s2, s_join);

	//TEST 2
	const char	*s3 = "";
	const char	*s4 = "Hello";

	char *s_join2 = ft_strjoin(s3, s4);
	const char *s_join_check2 = "Hello";

	if (!ft_strncmp((const char*)s_join2, s_join_check2, ft_strlen(s_join2)))
		printf("\033[0;32mTest 2 passed!\n\033[0m");
	else
		printf("\033[0;31mTest 2 Failed!\n\33[0m");
	printf("String 1: %s\nString 2: %s\nJoined String: %s\n", s3, s4, s_join2);

}