
#include <stdio.h>
#include <string.h>

char	*ft_strdup(const char*src);

int	main(void)
{
	//TEST 1
	int i = 0;
	char	src[] = "42 is the answer.";
	char	*ptr_src = src;

	char	*copy = ft_strdup(ptr_src);
	char	*copy_check = strdup(ptr_src);
	int result = 1;

	while (copy[i] || copy_check[i])
	{
		if (copy[i] != copy_check[i])
			result = 0;
		++i;
	}

	if (result == 1)
	{
		printf("\033[1;32mTest 1 Passed!\033[1;0m\n");
		printf("'%s' was copied to '%s'\n",src, copy);
	}
	else
	{
		printf("\033[1;31mTest 1 Failed!\033[1;0m\n");
		printf("'%s' was copied into '%s' and should be '%s'\n", src, copy, copy_check);
	}
	printf("---------------------------------------------\n");

	//TEST 2
	i = 0;
	char	src2[] = "";
	char	*ptr_src2 = src2;

	copy = ft_strdup(ptr_src2);
	copy_check = strdup(ptr_src2);
	result = 1;

	while (copy[i] || copy_check[i])
	{
		if (copy[i] != copy_check[i])
			result = 0;
		++i;
	}

	if (result == 1)
	{
		printf("\033[1;32mTest 2 Passed!\033[1;0m\n");
		printf("'%s' was copied to '%s'\n",src2, copy);
	}
	else
	{
		printf("\033[1;31mTest 2 Failed!\033[1;0m\n");
		printf("'%s' was copied into '%s' and should be '%s'\n", src2, copy, copy_check);
	}
	printf("---------------------------------------------\n");
}