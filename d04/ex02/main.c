#include <stdio.h>

int ft_iterative_power(int nb, int power);
int main(void)
{
	int nb = 2;
	int power = 5;

	printf("power of (%d, %d) =%d", nb, power, ft_iterative_power(nb, power));

	return 0;
}
