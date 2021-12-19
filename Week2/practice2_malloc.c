#include <stdio.h>
#include <stdlib.h>

int main(void){
	char** pp_data = NULL;
	int n;
	int length;
	int i;

	scanf("%d", &n);


	//1. define & dynamic allocation
    pp_data=(char**)malloc(sizeof(char*)*n);
    printf("\nPlease enter the maxlen of string\n");
    scanf("%d",&length);
    printf("\nPlease enter the string\n");

    for(i=0;i<n;i++) {
        pp_data[i] = (char *) malloc(sizeof(char)*length);
        scanf("%s",pp_data[i]);
    }
    printf("\n");

	//2. print string
	printf("print the string\n");
	for(i=0;i<n;i++){
	    printf("%s\n",pp_data[i]);
	}

	//3. free memory
    for(i=0;i<n;i++){
        free(pp_data[i]);
    }
    free(pp_data);

	return 0;
}
