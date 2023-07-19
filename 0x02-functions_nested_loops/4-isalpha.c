#include <ctype.h>
/**
 * _isalpha - Is a function that checks for alphabetic character
 * @c: the character checked
 * Return: 1 if c is a letter, lowercase or uppercase return o otherwise
 */
int _isalpha(int c)
{

	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
