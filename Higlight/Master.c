// #include<stdio.h>
//  main(){
// int a=5;
// char b='a';
// float c=3.3,d;
// d = +b+c;
//     printf("Result = %.2f\n",d);
//  }
 
// #include<stdio.h>
// void main(){
//    int a = 7, b = 5, c = 3, d = 6;
//    printf("-5+4*(20%6) = %d\n", -5+4*(20%6));
//    printf("(-5*(192/3)+7)-4%10*2 = %d\n", (-5*(192/3)+7)-4%10*2);
//    printf("-10+(++a)-7+3*2%7*2 = %d\n", -10+(++a)-7+3*2%7*2);
//    printf("++b+b--%2*(++c*4-1/2) = %d\n", ++b+b--%2*(++c*4-1/2));
//    printf("2*5%3/2(c++/2*d---8) = %d\n", 2*5%3/2*(c++/2*d---8));
// }


// int a = 1;
// float b = 2;
// float count(int c) {
//    float d = 3.3;
//    d = d + c + b + a;
//    return d;

// }
// main(){
//    float e;
//    e = count(a);
//    printf("count result = %f\n", e);
// }

    // int x = 2, y =3;
    // printf("x : %d, y : %d\n", x,y);
    // printf("x* + y same as x = x * y \n");
    // printf("So x is %d\n", x*= y);


    // printf("x : %d, y : %d\n", x,y);
    // printf("x% + y same as x = x % y \n");
    // printf("So x is %d\n", x%= y);


    // double a = 12.3;
    // float b = 24.6;
    // long int c = 3;
    // char d = 'a';
    // short e = 4;
    // int f = 26;

    // printf("(3.1) a+b+c+d+e+f = %f\n", a+b+c+d+e+f);
    // printf("(3.2) e/c+f = %d\n", e/c+f);
    // printf("(3.3) b/c+e+a = %f\n", b/c+e+a);
    // printf("(3.4) ((int)a+c)+e = %d\n", ((int)a+c)+e);
    // printf("(3.5) (a+b)/c+d-e*f = %f\n", (a+b)/c+d-e*f);
 

 #include <stdio.h>
 #include <conio.h>
//  #define PI 3.14159

//  main(){
//    float radius = 7.5,area,circum;
//    area = PI*radius*radius;
//    circum = 2*PI*radius;

//    printf("Radius is %f\n", radius);
//    printf("Area is %f\n", area);
//    printf("Circum is %f\n", circum);

//    printf("Radius\t\t Area \t\tCircum\n");
//    printf("%f \t%f \t%f", radius, area,circum);
//    getch();
//  }

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
    printf("Name\t\t Age \tBirthday\tSalary\n");
//     printf("%f \t%f \t%f", name, age, weight);
//     getch();
}