#include<math.h>
int uCLN(int a, int b)
{
	a = abs(a); // tr? tuy?t ğ?i cho s? âm
	b = abs(b);  // tr? tuy?t ğ?i cho s? âm
	if (a == 0 && b != 0)
	{
		return b;
	}
	else if (a != 0 && b == 0)
	{
		return a;
	}
	while (a != b)
	{
		if (a > b)
		{
			a -= b;
		}
		else
		{
			b -= a;
		}
	}
	return a;
}
