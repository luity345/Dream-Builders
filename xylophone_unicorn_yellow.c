#include <stdio.h>
#include <string.h>

int main(){

	printf("Welcome to Dream Builders!\n\n");
	
	// set up variables
	int numDreams;
	int uDreams, oDreams;
	int i;
	
	int dType;
	char dDescription[100];
	
	// ask user how many dreams
	printf("How many dreams do you have? \n");
	scanf("%d", &numDreams);
	printf("\n");
	
	// set up counters
	uDreams = 0;
	oDreams = 0;
	
	// collect dream information
	for (i = 0; i < numDreams; i++){				
		printf("Dream %d\n", i + 1);
		printf("What type of dream is it? (1 = Personal, 2 = Other)\n");
		scanf("%d", &dType);
		
		if (dType == 1){
			uDreams++;
		} else {
			oDreams++;
		}
		
		printf("Please describe your dream.\n");
		scanf(" %[^\n]s", dDescription);
		printf("\n");				
	}
	
	// output summary
	printf("Dream Summary:\n");
	printf("You have %d Personal dreams.\n", uDreams);
	printf("You have %d Other dreams.\n", oDreams);
	
	// output all dreams
	printf("\n");
	printf("All Dreams:\n");
	
	for (i = 0; i < numDreams; i++){
		printf("Dream %d:\n", i + 1);
		printf("Type: %d\n", dType);
		printf("Description: %s\n\n", dDescription);
	}
	
	printf("Thank you for sharing your dreams with us at Dream Builders.\n");
	printf("We hope to help you to make them come true!\n");
	
	return 0;
}