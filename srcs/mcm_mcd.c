#include <mcm_mcd.h>

int	mcd(int n1, int n2)
{
	int	mod;
	while (n1 && n2)
	{
		mod = n1 % n2;
		n1 = n2;
		n2 = mod;
	}
	return (n1? n1: n2);
}

int	mcm(int n1, int n2)
{
	int _mcd = mcd(n1, n2);

	if (_mcd == 0)
	{
		errno = ERANGE;
		return (0);
	}
	if (n1 > INT_MAX/n2 || n1 < INT_MIN/n2)
	{
		errno = ERANGE;
		return (0);
	}
	if (!n1 || !n2)
	{
		return (n1? n1: n2);
	}
	return ((n1 * n2) / _mcd);
}
