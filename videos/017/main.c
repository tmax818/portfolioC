/*
This is my attempt
*********/

#include <stdio.h>
#include <stdbool.h>

int main(void){

FILE *fh_output;
FILE *fh_input;

fh_output = fopen("io.txt", "w");

fputs("This is my string. There are many like it, but this one is mine...\n", fh_output);

fclose(fh_output);

fh_input = fopen("io.txt", "r");

char buffer[50];

// fscanf(fh_input, "%s", buffer);

while(fscanf(fh_input, "%s", buffer) != EOF){
    // puts(buffer);
    printf("%s ", buffer);
}

// puts(buffer);


fclose(fh_input);


}

