#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    char s1[] = "aaaaaaaa";
    char s2[] = "aaaaaaaa";
    char s3[] = "aaaadaaa";
    char s4[] = "aaaaâaaa";
	char s5[] = "daaaaaad";
    int i = 1;
    if (ft_memcmp(s1, s3, 9) != memcmp(s1, s3, 9))
	{
        i = 0;
		printf("\e[0;31m cmp s1, s3 with 9\n");
	}
    if (ft_memcmp(s1, s2, 9) != memcmp(s1, s2, 9))
	{
        i = 0;
		printf("\e[0;31m cmp s1, s3 with 9\n");
	}
    if (ft_memcmp(s3, s1, 9) != memcmp(s3, s1, 9))
	{
        i = 0;
		printf("\e[0;31m cmp s3, s1 with 9\n");
	}
    if (ft_memcmp(s1, s3, 9) != memcmp(s1, s3, 9))
	{
        i = 0;
		printf("\e[0;31m cmp s1, s3 with 9\n");
	}
    if (ft_memcmp(s1, s2, 9) != memcmp(s1, s2, 9))
	{
        i = 0;
		printf("\e[0;31m cmp s1, s2 with 9\n");
	}
    if (ft_memcmp(s3, s1, 9) != memcmp(s3, s1, 9))
	{
        i = 0;
		printf("\e[0;31m cmp s3, s1 with 9\n");
	}
    
    if (ft_memcmp(s1, s3, 9) != memcmp(s1, s3, 9))
	{
        i = 0;
		printf("\e[0;31m cmp s1, s3 with 9\n");
	}
    if (ft_memcmp(s1, s2, 9) != memcmp(s1, s2, 9))
	{
        i = 0;
		printf("\e[0;31m cmp s1, s2 with 9\n");
	}
    if (ft_memcmp(s3, s1, 9) != memcmp(s3, s1, 9))
	{
        i = 0;
		printf("\e[0;31m cmp s3, s1 with 9");
	}
    if (ft_memcmp(s4, s1, 9) != memcmp(s4, s1, 9))
	{
        i = 0;
		printf("\e[0;31m cmp s9, s1 with 9");
	}
    if (ft_memcmp(s5, s1, 0) != memcmp(s5, s1, 0))
	{
        i = 0;
		printf("\e[0;31m cmp s9, s1 with 0");
	}
    if (ft_memcmp(s5, s1, -1) != memcmp(s5, s1, -1))
	{
        i = 0;
		printf("\e[0;31m cmp s9, s1 with -1");
	}
    
    if (i == 1)
        printf("\e[0;32mTest Passed\n");
    else
        printf("\e[0;31mTest Failed\n");
    return (0);
}