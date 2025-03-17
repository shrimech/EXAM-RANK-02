#include <unistd.h>

unsigned char reverse_bits(unsigned char b)
{
	unsigned char	r = 0;
	unsigned		byte_len = 8;

	while (byte_len--)
	{
		r = (r << 1) | (b & 1);
		b >>= 1;
	}
	return (r);
}


// int main()
// {
// 	unsigned char octet = 3;
// 	print_bits(octet);
// }