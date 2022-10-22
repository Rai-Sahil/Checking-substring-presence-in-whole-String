#include <stdio.h>
#include <string.h>

int main() {
    char inputString[200];
    char inputSubstring[200];

    fgets(inputString, sizeof inputString, stdin);
    fgets(inputSubstring, sizeof inputSubstring, stdin);

    int countMatches = 0;

    for (int indexOfString = 0, indexOfSubstring = 0; indexOfString < strlen(inputString)
    && indexOfSubstring < strlen(inputSubstring) - 1; indexOfString++){

        if (inputString[indexOfString] == inputSubstring[indexOfSubstring]){
            countMatches++;
            indexOfSubstring++;
        } else {
            countMatches = 0;
        }
    }

    if (countMatches == strlen(inputSubstring) - 1){
        printf("Given Substring Found in String\n");
    } else{
        printf("Given Substring is not present\n");
    }
}
