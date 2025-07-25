#include <stdio.h>
#include "../utils/blocs.h"

int ft_iterative_power(int nb, int power);

#define MY_TEST(nb, power, expected)                                           \
  printf("power(%d, %d):\t%d, expected %s\n", nb, power,                       \
         ft_iterative_power(nb, power), expected)

int main(void) {
  DESCRIPTION("ft_iterative_power", "Use a normal loop to calculate a power.");

  MY_TEST(0, 0, "1");
  MY_TEST(0, 1, "0");
  MY_TEST(0, 3, "0");
  MY_TEST(1, 0, "1");
  MY_TEST(1, 1, "1");
  MY_TEST(3, 1, "3");
  MY_TEST(11, 2, "121");
  MY_TEST(11, 0, "1");
  MY_TEST(12, 9, "5159780352");
  MY_TEST(13, 3, "2197");
  MY_TEST(14, 5, "537824");
  MY_TEST(42, 2, "1764");
  MY_TEST(-42, 2, "1764");
  MY_TEST(-1, 1, "-1");
  MY_TEST(-1, 2, "1");
  MY_TEST(42, 42, "undefined");
}
