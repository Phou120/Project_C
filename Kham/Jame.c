#include <stdio.h>

int main() {
    // int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int i, j, product;

    // loop through each number and multiply it with every other number in the array
    for (i = 1; i < 13; i++) {
        for (j = 1; j < 11; j++) {
            // calculate the product and print it in a formatted string
            product = i * j;
            printf("%d x %d = %d\n", i, j, product);
        }
        // add a line break after each row is completed
        printf("\n");
    }

    return 0;
 
}

// #include<stdio.h>
// int main()
// {
//     int i; 
//     for(i=1; i<=12; i++){
//         printf("\t 1 * %d\t= %d\n", i, 1*i);
//     }
//      printf("\t\n");
//      for (i=1; i<=12; i++){
//         printf("\t 2 * %d\t= %d\n", i, 2*i); 
//     }
//      printf("\t\n");
//      for (i=1; i<=12; i++){
//         printf("\t 3 * %d\t= %d\n", i, 3*i); 
//     } printf("\n");
//     for (i=1; i<=12; i++){
//         printf("\t 4 * %d\t= %d\n", i, 4*i); 
//     }
//      printf("\n");
//      for (i=1; i<=12; i++){
//         printf("\t 5 * %d\t= %d\n", i, 5*i); 
//     } printf("\n");
//     for (i=1; i<=12; i++){
//         printf("\t 6 * %d\t= %d\n", i, 6*i); 
//     } printf("\n");
//     for (i=1; i<=12; i++){
//         printf("\t 7 * %d\t= %d\n", i, 7*i); 
//     } printf("\n");
//     for (i=1; i<=12; i++){
//         printf("\t 8 * %d\t= %d\n", i, 8*i); 
//     } printf("\n");
//     for (i=1; i<=12; i++){
//         printf("\t 9 * %d\t= %d\n", i, 9*i); 
//     } printf("\n");
//     for (i=1; i<=12; i++){
//         printf("\t 10 * %d\t= %d\n", i, 10*i); 
//     } printf("\n");
//     for (i=1; i<=12; i++){
//         printf("\t 12 * %d\t= %d\n", i, 11*i); 
//     } printf("\n");
//     for (i=1; i<=12; i++){
//         printf("\t 12 * %d\t= %d\n", i, 12*i); 
//     }

// }
