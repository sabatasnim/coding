#include <stdio.h>

#define SIZE 10

/* Function declaration */
int * getNEvenNumbers(const int N, int * numbers);


int main()
{
    int evenNumbers[SIZE];
    int i;

    // Call function to get first 10 even numbers
    getNEvenNumbers(SIZE, evenNumbers);

    // Print all numbers
    printf("First %d even numbers are: \n", SIZE);
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", *(evenNumbers + i));
    }


    return 0;
}



/**
 * Function to get N even numbers.
 */
int * getNEvenNumbers(const int N, int * numbers)
{
    int i;

    for (i = 0; i < N; i++)
    {
        // Calculate and store even number in numbers
        *(numbers + i) = 2 * (i + 1);
    }

    return numbers;
}
