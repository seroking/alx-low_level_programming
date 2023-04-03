#include "main.h"

/**
 * *_memset - memset func
 * @s : pointer
 * @b : constant byte
 * @n : first n bytes of the memory
 * Return: Nothing.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i =size;
	for(i = 0;i<size;i++){
		*(char*)(a+i) = *(char *)(n+(i%4));
	}
}
