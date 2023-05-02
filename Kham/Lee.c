#include <stdio.h>
#include <conio.h>

int main (){
    //  int math, eng, chem, phy, comp,total;

    // //first student
    // printf("First student:\n");
    // printf("Enter math = ");
    // scanf("%d", &math);
    // printf("Enter eng = ");
    // scanf("%d", &eng);
    // printf("Enter chem = ");
    // scanf("%d", &chem);
    // printf("Enter phy = ");
    // scanf("%d", &phy);
    // printf("Enter comp = ");
    // scanf("%d", &comp);
    // total = math + eng + phy + chem + comp;
    // printf("First student = %d\n", total);

    // //second student
    // printf("Second student:\n");
    // printf("Enter math = ");
    // scanf("%d", &math);
    // printf("Enter eng = ");
    // scanf("%d", &eng);
    // printf("Enter chem = ");
    // scanf("%d", &chem);
    // printf("Enter phy = ");
    // scanf("%d", &phy);
    // printf("Enter comp = ");
    // scanf("%d", &comp);
    // total = math + eng + phy + chem + comp;
    // printf("Second student = %d\n", total);

    // //third student
    // printf("Third student:\n");
    // printf("Enter math = ");
    // scanf("%d", &math);
    // printf("Enter eng = ");
    // scanf("%d", &eng);
    // printf("Enter chem = ");
    // scanf("%d", &chem);
    // printf("Enter phy = ");
    // scanf("%d", &phy);
    // printf("Enter comp = ");
    // scanf("%d", &comp);
    
    // total = math + eng + phy + chem + comp;
    // printf("Third student = %d\n", total);

    // return 0;
    int phone;
    printf("Enter phone = ");
    scanf("%d", &phone);

    if(phone == 1){
        printf("100$");
    }else
        if(phone == 2){
             printf("200$");
        }else
            if(phone == 3){
                printf("300$");
            }else
                if(phone == 4){
                    printf("400$");
                }else
                    if(phone == 5){
                        printf("500$");
                    }else {
                        printf("Please select choice 1 - 5 only\n");
                    }

}