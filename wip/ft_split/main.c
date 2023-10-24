#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	main(void)
{
	//TEST 1
	const char	*s = "  42 is the answer.  ";
	char		c = ' ';
	printf("Unsplit string: %s\n", s);
	char **split_s = ft_split(s, c);
	printf("Split string:\n");
	while (*split_s)
	{
		printf("%s\n", *split_s);
		free(*split_s);
		split_s++;
	}

	//TEST 2
	const char	*s2 = "   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ";
	printf("Unsplit string: %s\n", s2);
	char **split_s2 = ft_split(s2, c);
	printf("Split string:\n");
	while (*split_s2)
	{
		printf("%s\n", *split_s2);
		free(*split_s2);
		split_s2++;
	}

	//TEST 3
	const char *s3 = "";
	char **split_3 = ft_split(s3, c);
	if (!split_3)
		printf("Empty string returns null!\n");

	//TEST 4
	const char *s4 = "    ";
	char **split_4 = ft_split(s4, c);
	if (!split_4)
		printf("String only with sep returns null!\n");
}