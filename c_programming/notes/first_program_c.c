// VC 6th first program C

#include <stdio.h>
<<<<<<< HEAD
int main() {
    char name[] = "please enter your name";
    printf("%s %s %s\n", "Hello", name, "welcome to your first C program!");
=======

int main(void){
    char name [55];
    
    printf("what is your name?: ");
    
    fgets(name, sizeof, (name), stdin);
    
    printf("Hello %s", name);
>>>>>>> 4e810e578465d51570296e9cf15d22fe87ba14e7
    return 0;
}