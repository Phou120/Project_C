#include <stdio.h>
#include <conio.h>
int main (){
    // char name[20], lastName[30], gender[20], birthday[30], age[12], weight[23];

    // puts("What is your name?");
    // gets(name);
    // puts("What is your lastName?");
    // gets(lastName);
    // puts("gender:");
    // gets(gender);
    // puts("birthday:");
    // gets(birthday);
    // puts("age:");
    // gets(age);
    // puts("weight:");
    // gets(weight);


    int mathematics, english, chemical, physical, computer;

    printf("Enter mathematics = ");
    scanf("%d", &mathematics);
    printf("Enter english = ");
    scanf("%d", &english);
    printf("Enter chemical = ");
    scanf("%d", &chemical);
    printf("Enter physical = ");
    scanf("%d", &physical);
    printf("Enter computer = ");
    scanf("%d", &computer);

    int sum = mathematics + english + chemical + physical + computer;

    printf(" Student A = %s\t %d\t %s\t %d\t %s\t", mathematics,english,chemical,physical,computer);

}
