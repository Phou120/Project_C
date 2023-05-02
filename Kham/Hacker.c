#include <stdio.h>
#include <conio.h>
void main(){
    int h=0,m=0,s=0;
    clrscr();
    printf("Enter a time format in HH:MM:SS");
    scanf("%d%d%d", &h, &m, &s);
    for(h;h<24;h++){
        for(m;m<60;m++){
            for(s;s<60;s++){
                printf("%d:%d:%d\n",h,m,s);
            }
        }

    }
}