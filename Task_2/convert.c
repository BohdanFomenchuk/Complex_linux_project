// convert.c

#include <stdio.h>
#include <ctype.h>
#include "convert.h"

// Function to convert text to uppercase
void to_upper(char *text) {
    while (*text) {
        *text = toupper(*text);
        text++;
    }
}

// Function to convert text to lowercase
void to_lower(char *text) {
    while (*text) {
        *text = tolower(*text);
        text++;
    }
}

