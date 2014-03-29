#include <stdio.h>
#define ARRAYLENGTH 4

void exchange(float currency, float values[]); // a function for entering the values in Dollars into the array.
void get_values(float values[]); // a function for printing the values in Dollars & in NIS.
int main()
{
	float currency; //the currency of NIS for Dollars.
	float values[ARRAYLENGTH]; // an array of the values in dollars. 
	//Enter the currncy of NIS vs. a Dollar.
	printf("Please enter the currncy\n");
	scanf("%f", &currency);
	//calling the get value to enter the values to the array.
	get_values(values);
	//print the values in Dollars & NIS 
	exchange(currency, values);

	return 0;
}

void get_values(float values[])
{
	int i; //declaring index variable.
	//the loop enters values in Dollars.
	for (i = 0; i < ARRAYLENGTH; i++)
	{
		printf("Please enter the value in Dollars\n");
		scanf("%f", &values[i]);
	}
}
void exchange(float currency, float values[])
{
	int i; //declaring index variable.
	//printing the header of the table.
	printf(" $ \t \t NIS \n--- \t \t-----\n");
	//the loop prints the values in Dollars & NIS 
	for(i = 0; i < ARRAYLENGTH; i++)
	{
		printf("%.2f \t \t%.2f\n", values[i], (values[i] * currency));
	}
}


