#include <stdio.h>
#include "libft.h"
#include <string.h>

void	test_function(unsigned int i, char *s)
{
	s[i] = '0';
}

int	main(void)
{
	//TEST 1
	char s[] = "1234";
	char *s_result = ft_strmapi(s, &test_function);
	if (!strncmp(s_result, "0000", 4))
		printf("\033[0;32mTest 1 passed!\n\033[0m");
	else
		printf("\033[0;31mTest 1 failed!\n\033[0m");
	printf("String before: %s\n", s);
	printf("String after: %s\n", s_result);

	//TEST 2
	char s2[] = "";
	char *s_result2 = ft_strmapi(s2, &test_function);
	if (!strncmp(s_result2, "", 0))
		printf("\033[0;32mTest 2 passed!\n\033[0m");
	else
		printf("\033[0;31mTest 2 failed!\n\033[0m");
	printf("String before: %s\n", s2);
	printf("String after: %s\n", s_result2);
}