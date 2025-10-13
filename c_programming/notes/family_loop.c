// 6th Family Loop
#include <stdio.h>

int main(void){
    char family[6][10]= {"Mom", "Dad", "Valeria", "Violett", "Mateo", "Milan"};
    for(int i=0; i < 6; i++){
        printf("%s Hello!\n", family[i]);
    }
    return 0;
}