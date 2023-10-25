#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	//TEST 1
	int c = 'c';

	int upper_c = ft_toupper(c);
	int upper_c_check = toupper(c);

	if (upper_c == upper_c_check)
		printf("\033[0;32mTest 1 passed!\n\033[0m");
	else
		printf("\033[0;31mTest 1 Failed!\n\33[0m");

	//TEST 2
	int v = 'V';

	int upper_v = ft_toupper(v);
	int upper_v_check = toupper(v);

	if (upper_v == upper_v_check)
		printf("\033[0;32mTest 2 passed!\n\033[0m");
	else
		printf("\033[0;31mTest 2 Failed!\n\33[0m");

}
