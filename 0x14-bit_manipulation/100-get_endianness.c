#define LITTLE_ENDIAN 1
#define BIG_ENDIAN 0

/* BIG_ENDIAN and LITTLE_ENDIAN are also defined seperately in stdlib.h */

/**
 * get_endianness - determines whether complie environment
 * is big-endian (MSB pointed to) or little-endian (LSB pointed to)
 *
 * Return: 0 if big-endian, 1 if little-endian
 */

int get_endianness(void)
{
	int test_num;
	char *c_ptr;

	test_num = 1;
	c_ptr = (char *)&test_num;
	return (c_ptr[0] ? LITTLE_ENDIAN : BIG_ENDIAN);
}
