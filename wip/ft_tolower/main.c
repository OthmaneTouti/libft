#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	//TEST 1
	int c = 'c';

	int lower_c = ft_tolower(c);
	int lower_c_check = tolower(c);

	if (lower_c == lower_c_check)
		printf("\033[0;32mTest 1 passed!\n\033[0m");
	else
		printf("\033[0;31mTest 1 Failed!\n\33[0m");

	//TEST 2
	int v = 'V';

	int lower_v = ft_tolower(v);
	int lower_v_check = tolower(v);

	if (lower_v == lower_v_check)
		printf("\033[0;32mTest 2 passed!\n\033[0m");
	else
		printf("\033[0;31mTest 2 Failed!\n\33[0m");
}
