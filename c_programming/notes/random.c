// how to get a random number in c
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    srand(time(NULL));
    int num = rand() %20 +1;
    printf("%d\n", num);
    return 0;
}