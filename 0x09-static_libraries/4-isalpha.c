#include <unistd.h>
/**
* _isalpha - Returns 1 if c is a letter, returns 0 otherwise
* @c: int check for alpha
*
* Return: 1 alpha, 0 otherwise
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	return (1);
	else
	return (0);
}
