#include "../utils/blocs.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

#define MY_TEST(str1, str2) \
  printf("COMPARING: (\"%s\") / (\"%s\")\n", str1, str2); \
  printf("GOT      : %d\n", ft_strcmp(str1, str2))
// printf("EXPECTED : %d\n", strcmp(str1, str2))

int main(void)
{
  DESCRIPTION("ft_strcmp", "Compare two strings and their ASCI code");

  MY_TEST("Hello", "Hello1");
  MY_TEST("Hello3", "Hello1");
  MY_TEST("Hello", "Hello");
  MY_TEST("", "");
  MY_TEST("Hey", "");
  MY_TEST("", "Hey");

  return (0);
}
