#include <stdio.h>
#include <stdbool.h>
int main() {
    /* 
 
    Runs a simple calculator, allowing the user to add, subtract, multiply
    and divide to decimal point numbers. Extra functions are included when
    the operator is changed.
    
    Operator Functions:
    + -> Addition
    - -> Subtraction
    * -> Multiplication
    / -> Division
    h -> Help
    q -> Quit

    */
    float numberOne;
    char operator;
    float numberTwo;
    float answer = -9999999999999999;
    bool running = true;
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("~~~~~~~~~~~~~~~~ CALCULATOR ~~~~~~~~~~~~~~~~\n");
    printf("~~~~~~~ Change operator to h for Help ~~~~~~\n");
    while (running) {
        printf("\nEnter an equation (number operator number): ");
        scanf("%f %c %f", &numberOne, &operator, &numberTwo);
        if (operator == 'q') {
            running = false;
        }
        else if (operator == 'h') {
            printf("Operator Functions :\n+ -> Addition\n- -> Subtraction\n");
            printf("* -> Multiplication\n/ -> Division\nh -> Help\nq -> Quit Program\n");
        }
        else if (operator == '+') {
            answer = numberOne + numberTwo;
        }
        else if (operator == '-') {
            answer = numberOne - numberTwo;
        }
        else if (operator == '*') {
            answer = numberOne * numberTwo;
        }
        else if (operator == '/') {
            if (numberTwo == 0) {
                printf("You cannot divide by zero. Try again.\n");
            }
            else {
                answer = numberOne / numberTwo;
            }
        }
        else {
            printf("You entered an invalid operator. Try again.\n");
        }
        if (answer != -9999999999999999) {
            printf("The answer is %.2f\n", answer);
            answer = -9999999999999999;
        }
    }
    printf("\n~~~~~~~~~~~~~~~~~ GOODBYE ~~~~~~~~~~~~~~~~~~\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    return 0;
}
