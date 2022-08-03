#include<stdio.h>
#include<stdlib.h>

int main() {

    // Integer
    int age = 40;
    // Float or Double
    double dec = 3.14;
    // Chracter [1 Character]
    char grade = 'A';
    // Chracter [ 2 or more character]
    char pharse[100] = "This is a pharse";
 
    printf("Int : %d\n",age);
    printf("Float or Double : %.2lf\n",dec);
    printf("Character 1 : %c\n",grade);
    printf("Character 2 : %s\n",pharse);

    return 0;
}