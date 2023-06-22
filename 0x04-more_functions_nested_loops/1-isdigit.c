#include <ctype.h>

int _isdigit(int n)
{
	if (isdigit(n) > 0)
		return (1);
	else
		return (0);
}
