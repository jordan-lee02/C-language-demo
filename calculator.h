#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static double runCalculation(double value1, double value2, char* operation) {
    printf("num1: %f num2: %f, op: %s", value1, value2, operation);
    double result;
    switch (*operation) {
        case '+':
            printf("plus");
            result = (value1 + value2);
            return result;
        case '-':
            printf("minus");
            result = (value1 - value2);
            return result;
        case '*':
            printf("multiply");
            result = (value1 * value2);
            return result;
        case '/':
            printf("divide");
            result = (value1 / value2);
            return result;
    }
}

static double calculate(char *equation) {
    char value1[0];
    char value2[0];
    char operation[0];
    double decVal1;
    double decVal2;

    //This splits up the equation into individual elements
    int counter = 1;
    for (char *p = strtok(equation," "); p != NULL; p = strtok(NULL, " ")){
        //printf("loop: p: %s\n", p);
        switch (counter) {
            case 1:
                strcpy(value1, p);
                printf("First Value is: %s\n", value1);
                break;
                //define char array here and then move it out
            case 2:
                strcpy(operation, p);
                printf("Opertaion is: %s\n", operation);
                break;
            case 3:
                strcpy(value2, p);
                printf("Second Value is: %s\n", value2);
                break;
        }
        counter++;
    }

    printf("here2\n");
    printf("Value 1 again: %s\n", value1);

    decVal1 = atof(value1);
    decVal2 = atof(value2);
    printf("First value as a double: %lf\nSecond value as a double: %lf\n");

    double result = runCalculation(decVal1, decVal2, operation);

    printf("\n----------------------------\n");
    printf("Answer: %d", result);

    return result;
}

int initCalculator() {
    char equation[100];

    printf("In the format of number space operator space number, eg. 3 + 5\nPlease enter your calculation: ");
    scanf("%[^\n]", &equation);

    printf("%s\n", equation);

    double result = calculate(equation);

    return 0;
}