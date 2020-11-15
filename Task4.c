#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
void main()
{
    system("COLOR FC");
    SetConsoleTitle("Summation Operation Inside A File");
    int sum = 0, numbers[2], i;
    FILE *fnums;
    //opening the file "numbers.txt".
    fnums = fopen("numbers.txt", "a+");

    //read file into array and store their summation.
    for (i = 0; i < 2; i++)
    {
        fscanf(fnums, "%1d", &numbers[i]);
        sum += numbers[i];
        printf("The number is: %d\n\n", numbers[i]);
    }
    //Appending the summation of the two numbers to the file.
    fprintf(fnums, "\nAnswer = %d", sum);
    printf("The summation of %d + %d = %d has been successfully appended to the file.", numbers[0], numbers[1], sum);
    fclose(fnums);
    system("pause");
}	
