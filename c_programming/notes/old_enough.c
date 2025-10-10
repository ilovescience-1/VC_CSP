/// VC 6th Old Enough Practice

#include<stdio.h>
#include<string.h>

int main(void){
    int age;
    printf("Hello how old are you: ")
    scanf("%s", &age);

    if(strcmp(age) >= 18){
        printf("Yay! Your allowed to Vote!");
    }else if(age >= 15){
        printf("Awsome! Your allowed to get your learners permit!");
    }else if(age >= 16){
        printf("Cool your allowed to get your drivers licinces!");
    }else if(age >=4){
        printf("Fun! Your able to go to school!");
    }

    return 0;
}
