#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

int	main(void)
{
	//TEST 1
	const char	*s1 = "#!@42 is the answer.#!";
	const char	*set = "#!@";
	const char	*s1_check = "42 is the answer.";

	char *trimmed_str = ft_strtrim(s1, set);

	if(!ft_strncmp(trimmed_str, s1_check, ft_strlen(s1_check)))
		printf("\033[0;32mTest 1 passed!\n\033[0m");
	else
		printf("\033[0;31mTest 1 Failed!\n\33[0m");
	printf("Original String: %s\nTrimmed String: %s\n", s1, trimmed_str);
	//free(trimmed_str);

	//TEST 2
	const char	*s2 = "42 is the #!@ answer.#!@";
	const char	*s2_check = "42 is the #!@ answer.";

	char *trimmed_str2 = ft_strtrim(s2, set);

	if(!ft_strncmp(trimmed_str2, s2_check, ft_strlen(s2_check)))
		printf("\033[0;32mTest 2 passed!\n\033[0m");
	else
		printf("\033[0;31mTest 2 Failed!\n\33[0m");
	printf("Original String: %s\nTrimmed String: %s\n", s2, trimmed_str2);
	//free(trimmed_str2);

	//TEST 3
	const char	*s3 = "!!!!#@42 is the answer.";
	const char	*s3_check = "42 is the answer.";

	char *trimmed_str3 = ft_strtrim(s3, set);

	if(!ft_strncmp(trimmed_str3, s3_check, ft_strlen(s3_check)))
		printf("\033[0;32mTest 3 passed!\n\033[0m");
	else
		printf("\033[0;31mTest 3 Failed!\n\33[0m");
	printf("Original String: %s\nTrimmed String: %s\n", s3, trimmed_str3);

	//TEST 4
	const char	*s4 = "!!!!#@";
	char *trimmed_str4 = ft_strtrim(s4, set);

	if (!trimmed_str4)
		printf("\033[0;32mTest 4 passed!\n\033[0m");
	else
		printf("\033[0;31mTest 4 Failed!\n\33[0m");
	printf("Original String: %s\nTrimmed String: %s\n", s4, trimmed_str4);

	//TEST 5
	const char	*s5 = "";
	char *trimmed_str5 = ft_strtrim(s4, set);

	if (!trimmed_str5)
		printf("\033[0;32mTest 5 passed!\n\033[0m");
	else
		printf("\033[0;31mTest 5 Failed!\n\33[0m");
	printf("Original String: %s\nTrimmed String: %s\n", s5, trimmed_str5);
}
