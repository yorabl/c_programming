#include <stdio.h> 
#define LOWER 'a' - 10
#define UPPER 'A' - 10
#define ZERO '0'
#define NINE '9'


int atoi(char s[]);
void squeeze(char s1[], char s2[]);

int main()
{
	char s[] = "Hello, I love you";
	char t[] = "He";

	squeeze(s,t);
	printf("%s\n", s);
}


void  squeeze(char s1[], char s2[])
{
	int i, j, k;
	for (i = 0; s2[i] != '\0' ; ++i)
	{
		for(j = k = 0; s1[j] != '\0' ; j++)
		{
			if(s1[j] != s2[i])
				s1[k++] = s1[j];
			printf("%d: %s \n", j, s1);
		}
		s1[j - (j - k)] = '\0';
	}
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
