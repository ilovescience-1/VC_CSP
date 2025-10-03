// VC 6th Variables Notes
#include <stdio.h>

int main(void){
    int num = 4;
    float pi = 3.14;
    char grade; // will only hold 1 letter
    char name[20];
   //bool passing = true;
    printf("what is your letter grade: ");
    scanf("%c", &grade);


    printf("tell me a number: ");
    scanf("%d", &num);
    //this imput lets me get a space
    printf("tell me your name: ");
    fgets(name, sizeof(name), stdin);
    
    printf("%d\n", num);
    printf("%s has a %c grade in the class!\n", name, grade);

    return 0;
}
// the semi colan and the int arent used in variables in python
// what type of data variable holds
// satic -> data types for variables don't change
// you can't go back and change it
// python its called dynamic
//What is the main difference between declaring variables in Python and C?
//in c we have to tell the computer what type the of data is being the variable
//int 4 bytes-d
//float 4 bytes--f
//double 8 bytes-if
//char 1 bytes-c
//for a string.-s
//you put those in when your doing the print statement
// a string is a list of characters
//comment you can use the //
/*
this is a comment
*/
//if you are using a single letter you use ''
//if there is more characters you have to use
// the & symbol is the same as = in python and adding it to the correct space
// C wont let the user do the space because it will break the code
//strings are multiple charachters