#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int i = 0;
	int input;
	char str[5];
	int stdoutput[101];
	FILE *stdinput;

	while (fgets(str, sizeof(str), stdinput) != NULL)
	{
		input = atoi(str);

		if (input >= 0)
		{	
			stdoutput[i] = input;			
			
			i++;
		}
		else 
		{
			printf("%d\n", stdoutput[-1*input-1]);		
		}
	}

	return 0;
}
