// VC 6th Silly Sentences

#include<stdio.h>
#include<string.h>

int main(void){
    char setting_in_a_house[30];
    char color[30];
    char animal[30];
    printf("give an setting in a house: ");
    scanf("%19s", setting_in_a_house );
    printf("give me a color: ");
    scanf("%19s", color);
    printf("give me an  animal: ");
    scanf("%19s", animal);
    char story[200] = "The girl walked into the ";
    strcat(story, setting_in_a_house);
    strcat(story, " with a ");
    strcat(story, color);
    strcat(story, " banana and the ");
    strcat(story, animal);
    strcat(story, " ate the pizza from the table");
    printf("%s\n", story);

    return 0;
}