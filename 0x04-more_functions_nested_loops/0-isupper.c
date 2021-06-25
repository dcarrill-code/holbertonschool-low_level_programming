#include <stdio.h>
/**
* _isupper - this function show 1 if the letter is in uppercase 0 otherwise
* @c: this is the letter to compare
*
* Return: returns 1 if the letters is uppercase 0 if is lower case
*/

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
		return (0);

}
