#include "3-calc.h"

/**
 * main - entry point, screens input and uses function pointer to
 * choose operator on a and b
 *
 * @argc: amount of command line arguments
 *
 * @argv: array of strings containing arguments
 *
 * Return: 0 upon success
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	result = get_op_func(argv[2])(a, b);
	printf("%d\n", result);

	return (0);
}
