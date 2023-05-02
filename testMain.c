#include<stdio.h>
main(){
    
}

/*#include<stdio.h>
main(){
    /**ຄິດໄລ x ກັບ y
      x+y
      x-y
      x*y
      x/y
      x%y
      z = x++;
      z = ++x;
      z = y--;
      z = --y;
    */
    /*int x,y;
    int z;
    printf("x:");
    scanf("%d",&x);
    printf("y:");
    scanf("%d",&y);
    printf("1. x+y = %d\n",x+y);
    printf("2. x-y = %d\n",x-y);
    printf("3. x*y = %d\n",x*y);
    printf("4. x/y = %d\n",x/y);
    printf("5. x%y = %d\n",x%y);

    z = x++;
    printf("z = x++; x = %d, z = %d\n", x,z);
    z = ++x;
    printf("z = ++x; x = %d, z = %d\n", x,z);
    z = y--;
    printf("z = y--; y = %d, z = %d\n", y,z);
    z = --y;
    printf("z = --y; y = %d, z = %d\n", y,z);
}*/

/*#include <stdio.h>

void step(void);
void main()
{
    int i;
    for(i=0;i<5;i++){
        step();
    }
}
void step(){
        static int a=0;
        a++;
        printf("a = %d\n",a);
    }*/

/*#include <stdio.h>
#include "sum.c"
int n=10;
main()
{
    showprintf();
}*/

// testMain.c
/*#include <stdio.h>
#include"test.c"
int a=1;
main(){
    static int b=2;
    int d=0;
    d=test();
    d=d*b;
    ++b;
    d=test();
    d=d*b;
    printf("d=%d\n",d);
}*/

/*int a=1;
    float b=2;

    float count(int c) {
        float d=3.3;
        d=d+c+b+a;
        return d;
    }
    main(){
        float e;
        e=count(a);
        printf("count result=%f\n",e);
    }*/

/*main() {
    int a=1;
    float b=2;

    float count(int c) {
        float d=3.3;
        d=d+c+b+a;
        return d;
    }
    main(){
        float e;
        e=count(a);
        printf("count result=%f\n",e);
    }

    /*int a=5;
    char b='a';
    float c=3.3,d;
    d=a+b+c,
    printf("Result = %.2f\n",d);*/

/*int a=32700,b;
 b=a+300;
 printf("Int b = %d\n",b);
}*/

/*#include "print.c"
int num = 3;
main () {
    print();
}*/

/*int main()
{



    //ໄດ້ປ້ອນຂໍ້ມູນໃສ່
    /**
    int a,b,h;
    float s;
    printf("Value a:");
    scanf("%d",&a);
    printf("Value b:");
    scanf("%d",&b);
    printf("Value h:");
    scanf("%d",&h);
    s=0.5*(a+b)*h;
    printf("s=%.1f",s);*/

// ຊອກຫາຕົວເລກເລີຍ
/*int z=1,x=2;
int y=2;
printf("y=%d",z+2*x);*/

// ໄລເກຣດ
/*char name;
int points;
printf("name:");
scanf("%s",&name);
printf("points:");
scanf("%d",&points);
if(points>=80)
printf("A");
else
if(points>=70)
printf("B");
else
if(points>=60)
printf("C");
else
if(points>=50)
printf("D");
else
printf("f");

//ຄືການໄລ ຄ ສ
/*int CE;
int BE;
printf("CE:");
scanf("%d",&CE);
BE=CE+543;
printf("BE=%d",BE);*/

/*int b,h;
float s;

printf("Input Value of b:");
scanf("%d",&b);
printf("Input Value of h:");
scanf("%d",&h);
s=0.5*(b*h);

printf("s=%.1f",s);*/

/*
char name;
int points;
printf("name:");
scanf("%s",&name);
printf("points:");
scanf("%d",&points);
if(points>=50)
printf("pass");
else
printf("Fail");*/

//ການຄິດໄລ່ ເລກຄຼ່ ແລະ ເລກຄີ
/*int n;
printf("Enter Number:");
scanf("%d",&n);

if(n%2==0){
    printf("Even");
}else
printf("Odd");

return 0;


}*/

