#include <stdio.h>
#define ARREYLENGTH 4

void exchange(float currency, float values[]);
void get_values(float values[]);
int main()
{
	float currency;
	float values[ARREYLENGTH];

	printf("Please enter the currncy\n");
	scanf("%f", &currency);
	
	get_values(values);
	exchange(currency, values);

	return 0;
}

void get_values(float values[])
{
	int i;
	for (i = 0; i < ARREYLENGTH; i++)
	{
		printf("Please enter the value in Dollars\n");
		scanf("%f", &values[i]);
	}
}
void exchange(float currency, float values[])
{
	int i; 
	printf(" $ \t \t NIS \n--- \t \t-----\n");
	for(i = 0; i < ARREYLENGTH; i++)
	{
		printf("%.2f \t \t %.2f\n", values[i], (values[i] * currency));
	}
}


