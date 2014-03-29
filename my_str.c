/*Written by Yogev Rabl
 *
 * Please notice that I choose to ignore spaces, tabs and new lines. 
 * 
 * */


#include <stdio.h>
#include <string.h>

int suffix(char str[], char c);

int main()
{
	int answer;
	answer = suffix("penny Lane there is a barber showing photographs", 'L');
	printf("%d\n", answer);

	return 0;
}

int suffix(char str[], char c)
{
	int lastindex; //the last place of c.
	int count; //the number of occurenses of the letter c.
	int i; 
	int j;
	
	char toprint[strlen(str)]; //the string the will be printed.

	//initials the variables.
	lastindex = count = j = 0;
	
	//a loop that run through the string. 
	for (i = 0; str[i] != '\0'; i++)
	{
		//is the char in the array is chosen char.
		if(str[i] == c)
		{
			count++; //add to count
			lastindex = i; //update the place of the lastindex.
		}
	}

	//checking if the chosen char was at least once, ignoring spaces, tabs & new lines. 
	if (count && (c != ' ') && (c != '\t') && (c != '\n'))
	{
		//copy the string from the last appearence of the chosen char to the end
		//of the string.
		for(i = lastindex; str[i] != '\0'; i++)
		{
			toprint[j] = str[i]; 
			j++;
		}
		// end the string. 
		toprint[j] = '\0';
		//print the string 
		printf("%s\n", toprint); 	
	}
	else 
		count = 0;
	return count;
}
