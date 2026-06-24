/**
*  _isalpha - checks for a letter, lowercase or uppercase character
* @c: the character to check
*
* Return: 1 if c is a letter, lowercase, or uppercase and 0 otherwise
*/

int _isalpha(int c)

{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}
