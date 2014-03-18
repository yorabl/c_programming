#include <stdio.h> 
#include <string.h>
#define LOWER 'a' - 10
#define UPPER 'A' - 10
#define ZERO '0'
#define NINE '9'


int atoi(char s[]);

int main()
{
	char s[] = "12abf";

	int n = atoi(s);
	printf("%#x", n);
}

int atoi(char s[])
{
	int i, n, sign;
	
	n = 0;
	if (s[0] == '-')
	{
		sign = 1;
		i = 1;
	}
	else
	{
		sign = 0;
		i = 0;
	}

	for ( ; (s[i] != '\0')  ; ++i)
	{
		if((s[i] >= ZERO) && (s[i] <= NINE))
		{	
			n = n * 16 + (s[i] - ZERO);
		}
		else if ((s[i] >= 'A') && (s[i] <= 'F'))
		{
			n = n * 16 + (s[i] - UPPER);
		}
		else if ((s[i] >= 'a') && (s[i] <= 'f'))
		{
			n = n * 16 + (s[i] - LOWER);
		}
		else if (!((s[i] == 'x') || (s[i] == 'X')))
		{
			break;
		}
	}
	if(sign)
		return 0 - n;
	else
		return n;
}
