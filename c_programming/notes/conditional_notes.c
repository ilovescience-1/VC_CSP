// VC 6th Conditional Notes
#include <stdio.h>
#include <string.h>
/*
< less than
> greater than
<= less than or equal to 
>= greater than or equal to
== equals
!= not equal
LOGICAL OPERATERS
&&- and 
||- or 
!- not

*/

int main(void){
    int grade;
    char name[50];
    printf("What is your grade: ");
    scanf("%d", &grade);

    printf("What is your name: ");
    scanf("%s", &name);

    //printf("%d\n", strcmp(name, "Ms.LaRose"));
    if(strcmp(name, "Ms. LaRose") == 0){
        printf("You dont have a grade!");
    }else if(grade >= 90){
        printf("You have an A!\n");
    }else if(grade >=80){
        printf("You have a B!\n");
    }else{
        printf("You dont have an A :(\n");
    }

    return 0;
}