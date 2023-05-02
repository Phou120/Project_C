// print.c
// #include <stdio.h>

// main()
// {
//     int i,j;
//     for(j = 1; j<=6; j++)
//     {
//         for(i = 1; i <= j; i++){
//             printf("%d",i);
//         }
//     printf("\n");
//     }
// }

// 1
#include <stdio.h>

int main() {
    char c;

    printf("ASCII code values of the letters a-z:\n");

    for (c = 'a'; c <= 'z'; c++) {
        printf("%c: %d\n", c, c);
    }

    return 0;
}

//5
#include <stdio.h>
int main() {
//   int n;
//   printf("Enter an integer: ");
//   scanf("%d", &n);

//   for (int i = 1; i <= 10; ++i) {
//     printf("%d * %d = %d \n", n, i, n * i);
//   }
//   return 0;
// }

    int choice;
    double Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday;
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("Tuesday");
        break;
        case 3:
        printf("Wednesday");
        break;
        case 4:
        printf("Thursday");
        break;
        case 5:
        printf("Friday");
        break;

        case 6:
        printf("Saturday");
        break;

        case 7:
        printf("Sunday");
        break;

        default :
        printf(" Please select choice 1 - 7 only\n");

    }
}