#include "main.h"

/**
*rot13 - Used to encode a string
*@str: Parameter of the function
*Return: this function returns a char data type
*/

char *rot13(char *str)
{
	int a, b;

	char rot13normal[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char encodedRot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; str[a]; a++)
	{
		for (b = 0; rot13normal[b]; b++)
		{
			if (str[a] == rot13normal[b])
			{
				str[a] = encodedRot13[b];
				break;
			}
		}
	}
	str[a] = '\0';
	return (str);
}
