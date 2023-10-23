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
	printf("String before: %s\n", s);
	ft_striteri(s, &test_function);
	if (!strncmp(s, "0000", 4))
		printf("\033[0;32mTest 1 passed!\n\033[0m");
	else
		printf("\033[0;31mTest 1 failed!\n\033[0m");
	printf("String after: %s\n", s);

	//TEST 2
	char s2[] = "";
	printf("String before: %s\n", s2);
	ft_striteri(s2, &test_function);
	if (!strncmp(s2, "", 0))
		printf("\033[0;32mTest 2 passed!\n\033[0m");
	else
		printf("\033[0;31mTest 2 failed!\n\033[0m");
	printf("String after: %s\n", s2);
}