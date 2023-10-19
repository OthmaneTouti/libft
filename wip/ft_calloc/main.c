#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
	//TEST 1
	void	*result = ft_calloc(10, sizeof(char));
	void	*result_check = ft_calloc(10, sizeof(char));
	int 	len = 10;
	int		testfail = 0;
	while (len--)
	{
		if (*(char *)result != *(char *)result_check)
		{
			testfail = 1;
			printf("\033[0;31mTest 1 Failed!\n\33[0m");
		}
		result++;
		result_check++;
	}
	if (!testfail)
		printf("\033[0;32mTest 1 passed!\n\33[0m");
	free(result - 10 * sizeof(char));
	free(result_check - 10 * sizeof(char));

	//TEST 2
	void	*result2 = ft_calloc(10, sizeof(int));
	void	*result_check2 = ft_calloc(10, sizeof(int));
	len = 10;
	testfail = 0;
	while (len--)
	{
		if (*(int *)result2 != *(int *)result_check2)
		{
			testfail = 1;
			printf("\033[0;31mTest 2 Failed!\n\33[0m");
		}
		result2++;
		result_check2++;
	}
	if (!testfail)
		printf("\033[0;32mTest 2 passed!\n\33[0m");
	free(result2 - 10);
	free(result_check2 - 10);
}