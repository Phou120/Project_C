// #include <stdio.h>
// #include <conio.h>

// int main(){
    // int std1, std2, std3;
    // int mathematics, english, chemical, physical, computer;
    
    //first student
    // printf("student1 =");
    // scanf("%d %d %d %d %d", &mathematics,&english,&physical,&chemical,&computer);
    // std1 = mathematics + english + physical + chemical + computer;

    //second student
    // printf("student2 =");
    // scanf("%d %d %d %d %d", &mathematics,&english,&physical,&chemical,&computer);
    // std2 = mathematics + english + physical + chemical + computer;

    //third student
    // printf("student3 =");
    // scanf("%d %d %d %d %d", &mathematics,&english,&physical,&chemical,&computer);
    // std3 = mathematics + english + physical + chemical + computer;

    // printf("\ntotal\nstd1=%d\nstd2=%d\nstd3=%d", std1, std2, std3);


//     char a,b,c,d,e;

//     puts("Characters =");
//     a=getchar();
//     b=getchar();
//     c=getchar();
//     d=getchar();
//     e=getchar();
//     puts("After = ");
//     putchar(a);
//     putchar(b+1);
//     putchar(c);
//     putchar(d+1);
//     putchar(e);
// }



// #include<stdio.h>

// main(){
    // int n[8] = {5,10,15,20,25,30,35,40};
    // int i;
    // for(i = 0; i < 7; i++){
    //     printf("%d,",n[i]);
    // }


    // printf("\n");

    // for(i = 7; i >= 0; i--){
    //     printf("%d,",n[i]);
    // }




    // Array[] ແບບ 1 ມິຕີ  ສະແດງທຳໝົດ
    // int n[8] = {5,10,15,20,25,30,35,40};
    // int i;
    // for(i = 0; i < 8; i++){
    //    printf("n[%d]= %d\n", i, n[i]);
    // }


    // Array[] ແບບ 1 ມິຕີ  ທີ່ເຮົາກຳນົດຄ່າ 2,4,6,8
    // int n[8] = {5,10,15,20,25,30,35,40};
    //  int i;

    //  printf("n[2]= %d\n", n[2]);
    //  printf("n[4]= %d\n", n[4]);
    //  printf("n[6]= %d\n", n[6]);
    //  printf("n[8]= %d\n", n[8]);


    // int n[3][5] = {{11,12,13,14,15},
    //                     {21,22,23,24,25},
    //                         {31,32,33,34,35}};
    // int i, j;


    //Array[] ແບບ 2 ມິຕີ  ສະແດງທຳໝົດ
        // for(i = 0; i < 3; i++){
        //     for(j = 0; j < 5; j++){
        //     printf("n[%d][%d]= %d\n", i, j, n[i][j]);

        //     }
        // }


    // Array[] ແບບ 2 ມິຕີ  ທີ່ເຮົາກຳນົດຄ່າ = [0][1],[1][2],[2][1],[2][4],[3][3]
    // printf("n[0][1]= %d\n", n[0][1]);
    // printf("n[1][2]= %d\n", n[1][2]);
    // printf("n[2][1]= %d\n", n[2][1]);
    // printf("n[2][4]= %d\n", n[2][4]);
    // printf("n[3][3]= %d\n", n[3][3]);




//     int n[2][3][4] = {{ {1,2,3,4,5,6,7,8,9,10,12},
//                         {13,14,15,16,17,18,19,20,21,22,23,24}}};

//     int i, j, k;

//     for(i = 0; i < 2; i++){
//             for(j = 0; j < 3; j++){
//                 for(k = 0; k < 4; k++){
//             printf("n[%d][%d][%d]= %d\n", i, j, k, n[i][j][k]);
//             }
//         }
//     }


//     return 0;
// }


 //Array[] ແບບ 3 ມິຕີ  ສະແດງທຳໝົດ
#include <stdio.h>

int main() {
    int m[2][3][4] = {
        {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}
        },
        {
            {13, 14, 15, 16},
            {17, 18, 19, 20},
            {21, 22, 23, 24}
        }
    };

    // iterate over each element in the array
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                printf("m[%d][%d][%d] = %d\n", i, j, k, m[i][j][k]);
            }
            printf("\n");
        }
    }

    return 0;
}