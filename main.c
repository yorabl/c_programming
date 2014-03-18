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
	int i, n;
	
	n = 0;

	for (i = 0 ; (s[i] != '\0') || (s[i] != '\n') || (s[i] != '\b')	|| (s[i] != '\t') ; ++i)
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
		else 
			break;
	}
	return n;

}
