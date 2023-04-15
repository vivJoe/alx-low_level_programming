#include "main.h"
/**
* _memcpy - A function that copies memory area
* @dest: memory destination
* @src: memory source
* @n: size of bytes
* Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int v;

	for (v = 0; v < n; v++)
		dest[v] = src[v];

	return (dest);
}
