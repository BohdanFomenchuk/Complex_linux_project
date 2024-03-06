#include <stdio.h>
#include <stdlib.h>
#include "convert.h"

int main() {

    char text[100];
    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);

    int option = 0;
    printf("Chose type of conversion: 1 - To lower, 2 - To upper\n");
    scanf("%d", &option);   
   
    if (option == 1){

    // Convert text to lowercase
    to_lower(text);

    // Print the converted text
    printf("\nLowercase: %s\n", text);
    }

    else if (option == 2){
  
    // Convert text to lowercase
    to_upper(text);

    // Print the converted text
    printf("\nUppercase: %s\n", text);
    }
    else{
	    printf("Invalid option\n");
    }
    return 0;
}

