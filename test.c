/*#include<stdio.h>
void step(void);
void main(){
    int i;
    for(i=0;i<5;i++)
    step();
}
void step(){
    auto int b=0;
    b++;
    printf("b = %d\n",b);
}*/

/*#include<stdio.h>
extern int n;
void showprintf(){
    printf("Number sum is %d\n",n+5);
}*/


#include<stdio.h>
int c=1;
extern int a;
int test(){
    ++c;
    return a+c;
}