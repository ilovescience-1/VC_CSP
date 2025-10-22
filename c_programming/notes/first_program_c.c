// VC 6th first program C

#include <stdio.h>
int main(void) {
    char name[] = "please enter your name";
    printf("%s %s %s\n", "Hello", name, "welcome to your first C program!");
}
int main(void){
    char name [55];
    
    printf("what is your name?: ");
    
    fgets(name, sizeof, (name), stdin);
    
    printf("Hello %s", name);
    return 0;
}