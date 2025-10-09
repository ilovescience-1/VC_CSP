// VC 6th expression notes
#include <stdio.h>
#include <math.h>

int main(void){
    int year = 2025; // ints take whole numbers
    float pi = 3.14; //floats take decimals
    double long_pi= 3.14159265359; // decimals that are 2x as long

    printf("8/3 = %f\n", (float)8/3); //cast is specifically stating the data type
    printf("8/3 = %1.2f\n", 8/3.0);
    printf("2 ^ 4 = %d\n", (int)pow(2,4));

    printf("%f", 2.4+5);

    year += 1;
    year ++; // you can also use -- but nothing else

    return 0;
}

//1) What is the difference between an integer and a float in C?
    // int takes whole numbers float takes decimal numbers

//2) How does C handle integer division compared to float division?
    //integer division uses a different sign

//3) List the arithmetic operators available in C and their functions.
    // + is for addition
    // - is for subtraction
    // / is for devision
    // * is for multiplication
    // % is for modulo (remainder)