/* Task2: A university wants to analyze the most commonly used words in student feedback. Because the number of
feedback entries is unknown, the system must grow dynamically using realloc().
Write a C program that:
1. Inputs the number of feedback entries.
2. Dynamically allocates memory to store all feedback strings (each stored separately
using malloc).
3. Counts the total number of characters across all feedback entries.
4. Finds the longest feedback message using pointer traversal.
5. Displays all feedback entries and the longest entry.
6. Frees all dynamically allocated memory. */

#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, noOfFeedback,totalChar = 0; char* longestFeedback;
    printf("Enter number of feedbacks: ");
    scanf("%d", &noOfFeedback);

    char ** feedbacks = malloc(noOfFeedback*sizeof(char*));
    for (i=0; i<noOfFeedback; i++){

    }

    return 0;
}
