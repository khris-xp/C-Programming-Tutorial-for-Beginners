#include<stdio.h>
#include<stdlib.h>

int main () {

    char characterName[100]="Tom"; // Limit 100 Character
    int characterAge=35;

    // Old Paragraph

    // printf("There once was a man named George\n");
    // printf("he was 70 years old.\n");
    // printf("He really liked the name George\n");
    // printf("but did not like being 70.\n");

    // New Paragraph

    printf("There once was a man named %s\n",characterName);
    printf("he was %d years old.\n",characterAge); // Age = 35

    int newChracterAge = 30;

    printf("He really liked the name %s\n",characterName);
    printf("but did not like being %d.\n",newChracterAge); // Age = 30
}