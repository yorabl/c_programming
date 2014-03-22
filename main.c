#include <stdio.h> 
#define LOWER 'a' - 10
#define UPPER 'A' - 10
#define ZERO '0'
#define NINE '9'


int atoi(char s[]);
void squeeze(char s1[], char s2[]);
int binsearch(int x, int v[], int n);

int main()
{
	int v[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 100};
	int location; 

	location = binsearch(4, v, 10);
	printf("%d\n", location);
}

int binsearch(int x, int v[], int n)
{
	int low, high, mid;
	low = 0;
	high = n - 1;
	while (low <= high)
	{
		mid = (high + low) / 2;
		if(x < v[mid])
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}

	}	
	if (v[mid] == x)
		return mid;
	else
		return -1;

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
