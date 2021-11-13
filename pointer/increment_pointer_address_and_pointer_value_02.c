#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(void)
{
	uint32_t u32_raw_data;
	uint8_t *ptr_u8_data;

	u32_raw_data = 0x1155AAFF;
	ptr_u8_data = (uint8_t *) &u32_raw_data;

	printf("The value of the u32_raw_data is 0x%X and its address is 0x%p\n\n", u32_raw_data, &u32_raw_data);

	printf("After ptr_u8_data = (uint8_t *) &u32_raw_data; \n");
	printf("The value of the ptr_u8_data is 0x%X and its address ix 0x%p\n", *ptr_u8_data, ptr_u8_data);
	printf("The value of the ptr_u8_data is 0x%X and its address ix 0x%p\n", *(ptr_u8_data+1), (ptr_u8_data+1));
	printf("The value of the ptr_u8_data is 0x%X and its address ix 0x%p\n", *(ptr_u8_data+2), (ptr_u8_data+2));
	printf("The value of the ptr_u8_data is 0x%X and its address ix 0x%p\n\n", *(ptr_u8_data+3), (ptr_u8_data+3));


	/*
	char *str1;
	int *str2;
	if you will look at the size of both the pointers lets assume
	str1 = 4 bytes, str2 = 4 bytes

	str1++ will increment by 1 byte but str2++ will increment 4 byte.
	Reason: The ++ operator increments the pointer by the size of the pointed type.
	*/

	ptr_u8_data++;
	printf("After ptr_u8_data++. The value of the ptr_u8_data is 0x%X and its address ix 0x%p\n", *ptr_u8_data, ptr_u8_data);
	ptr_u8_data++;
	printf("After ptr_u8_data++. The value of the ptr_u8_data is 0x%X and its address ix 0x%p\n\n", *ptr_u8_data, ptr_u8_data);

	/*
	A big-endian system stores the most significant byte of a word at the smallest memory address
	and the least significant byte at the largest.
	A little-endian system, in contrast, stores the least-significant byte at the smallest address.
	https://en.wikipedia.org/wiki/Endianness
	*/

	// Shift right 24 to examine the most significant byte (MSB)
	uint8_t *ptr_u8_data_MSB;
	ptr_u8_data_MSB = (uint8_t *)&u32_raw_data;

	// check the value of lower address
	if (*ptr_u8_data_MSB == 0xFF) {
		printf("The value of MSB is 0xFF. The little-endian system\n");
	} else if (*ptr_u8_data_MSB == 0x11) {
		printf("The value of MSB is 0x11. The big-endian system\n");
        } else {
		printf("The something wrong\n");
	}

	return 0;
}
