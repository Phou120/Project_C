#include <stdio.h>
 #include <conio.h>

main(){
   char name[20], birthday[11];
   int age;
   float weight;
    printf("Name:");
    scanf("%s", &name);
    printf("Age:");
    scanf("%d", &age);
    printf("Birthday:");
    scanf("%s", &birthday);
    printf("Weight:");
    scanf("%f", &weight);
    printf("Name\t Age\t Birthday\t weight\t\n");
     printf("%s\t %d\t %s\t %.2f\t", name, age, birthday, weight);
     getch();
}