#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>
#include "libasm.h"

int main(void)
{
	char dst1[50] = "Hell";
	char dst2[50] = "HelloMe";
	char dst3[20] = "TestOfmemmove";
	char dst4[30] = "TestOfmemmovemmmmmmmmmmmmmmmm";
	char *src = malloc(30);
	char *test = malloc(20);
	char *test1 = malloc(20);
	char *test2 = malloc(10);
	char *empt;
	empt = "";
	memset(src, 'M', 30);
	memset(test, 'l', 20);
	memset(test1, 'l', 20);
	memset(test2, 'a', 10);
	printf(COLOR_GREEN "---------------------FT_STRLEN------------------" COLOR_RESET "\n");
	printf("Test ft_strlen: %d, %zu\n", ft_strlen(dst1), strlen(dst1));
    printf("Test ft_strlen: %d, %zu\n", ft_strlen(src), strlen(src));
	printf("Test ft_strlen: %d, %zu\n", ft_strlen(""), strlen(""));
	printf("Test ft_strlen: %d, %zu\n", ft_strlen("Hello\0Hello"), strlen("Hello\0Hello"));
	printf(COLOR_GREEN "---------------------FT_STRCMP------------------\n" COLOR_RESET);
	printf("Test1 ft_strcmp: %d, %d\n", ft_strcmp("", "Hello"), strcmp("", "Hello"));
	printf("Test2 ft_strcmp: %d, %d\n", ft_strcmp("Hello", empt), strcmp("Hello", empt));
	printf("Test3 ft_strcmp: %d, %d\n", ft_strcmp(dst2, dst1), strcmp(dst2, dst1));
	printf("Test4 ft_strcmp: %d, %d\n", ft_strcmp(dst1, dst2), strcmp(dst1, dst2));
	printf("Test5 ft_strcmp: %d, %d\n", ft_strcmp("", empt), strcmp("", empt));
	printf("Test6 ft_strcmp: %d, %d\n", ft_strcmp("Hello\0me", "Hello\0must"), strcmp("Hello\0me", "Hello\0must"));
	printf("Test7 ft_strcmp: %d, %d\n", ft_strcmp("abcdefghij", "abcdefgxyz"), strcmp("abcdefghij", "abcdefgxyz"));
	printf(COLOR_GREEN "\n---------------------FT_STRCPY------------------\n" COLOR_RESET);
	printf("dst0 = %s, dst1 = %s, src = %s\n", test, test1, test2);
	printf(COLOR_YELLOW "Test1 ft_strcpy: %s, %s\n" COLOR_RESET, ft_strcpy(test, test2), strcpy(test1, test2));
//	write(1, test, 20); printf("\n");
//	write(1, test1, 20); printf("\n");
	printf("---------------------------------------\n");
	memset(test, 'l', 20);
	memset(test1, 'l', 20);
	memset(test2, 'a', 10);
	printf("dst0 = %s, dst1 = %s, src = %s\n", test, test1, dst2);
	printf(COLOR_YELLOW "Test2 ft_strcpy: %s,%s\n" COLOR_RESET, ft_strcpy(test, dst2), strcpy(test1, dst2));
//	write(1, test, 20); printf("\n");
//	write(1, test1, 20); printf("\n");
	printf("---------------------------------------\n");
	memset(test, 'l', 20);
	memset(test1, 'l', 20);
	memset(test2, 'a', 10);
	printf("dst0 = %s, dst1 = %s, src = %s\n", test, test1, dst4);
	printf(COLOR_YELLOW "Test3 ft_strcpy: %s, %s\n" COLOR_RESET, ft_strcpy(test, dst4), strcpy(test1, dst4));
//	write(1, test, 30); printf("\n");
//	write(1, test1, 30); printf("\n");
	printf("---------------------------------------\n");
	memset(test, 'l', 20);
	memset(test1, 'l', 20);
	memset(test2, 'a', 10);
	printf("dst0 = %s, dst1 = %s, src = %s\n", test, test1, empt);
	printf(COLOR_YELLOW "Test4 ft_strcpy: %s, %s\n" COLOR_RESET, ft_strcpy(test, empt), strcpy(test, empt));
//	write(1, test, 30); printf("\n");
//	write(1, test1, 30); printf("\n");
   printf("---------------------------------------\n");
   memset(test, 'l', 20);
   memset(test1, 'l', 20);
   memset(test2, 'a', 10);
   printf(COLOR_GREEN "\n---------------------FT_READ/FT_WRITE------------------\n" COLOR_RESET);
   char buf[1000];
   int fd;
   printf("==========input something=======\n");
   ft_read(1, buf, 1000);
   printf("\nbuf = \n");
   ft_write(1, buf, ft_strlen(buf));
   fd = open("test", O_RDONLY, 0444);
   ft_read(fd, buf, 1000);
   printf("\nbuf = \n");
   ft_write(1, buf, ft_strlen(buf));
   printf("\nReturn value with error: %d, %zd\n", ft_read(-2, buf, 1000), read(-2, buf, 1000));
   ft_read(-2, buf, 1000);
   printf("ft_errno - %d ", errno);
   read(-2, buf, 1000);
   printf("errno - %d \n", errno);
   printf("Return value with error: %d, %zd\n", ft_write(-2, buf, 1000), write(-2, buf, 1000));
   ft_write(1, NULL, 1000);
   printf("ft_errno - %d ", errno);
   write(1, NULL, 1000);
   printf("errno - %d \n", errno);
   printf(COLOR_GREEN "\n---------------------FT_STRDUP------------------\n" COLOR_RESET);
   printf("Test1 ft_strdup: %s, %s\n", ft_strdup(dst3), strdup(dst3));
   printf("Test2 ft_strdup: %s, %s\n", ft_strdup("GrowUp\0Love"), strdup("GrowUp\0Love"));
   printf("Test1 ft_strdup: %s, %s\n", ft_strdup(""), strdup(""));
   free(src);
   free(test);
   free(test1);
   free(test2);
	return (0);
}
