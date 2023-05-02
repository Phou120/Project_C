#include <stdio.h>

int main() {
  int mathematics, english, chemistry, physical, computer;
  printf(" enter mathematics =");
  scanf("%d",&mathematics);
  printf(" enter english =");
  scanf("%d",&english);
  printf(" enter chemistry =");
  scanf("%d",&chemistry);
  printf(" enter physical =");
  scanf("%d",&physical);
  printf(" enter computer =");
  scanf("%d",&computer);
  

  int sum = mathematics + english+chemistry  + physical +computer ;
  float average = (float)sum / 5;

  printf("The average of %d, %d, %d, %d, and %d is %.2f\n",mathematics , english, chemistry, physical, computer, average);

  return 0;
}

// #include <stdio.h>
// int main (){
//     char name[20], lastName[30], gender[20], birthday[30], age[12], weight[23];

//     puts("name:");
//     gets(name);
//     puts("lastName:");
//     gets(lastName);
//     puts("gender:");
//     gets(gender);
//     puts("birthday:");
//     gets(birthday);
//     puts("age:");
//     gets(age);
//     puts("weight:");
//     gets("weight:");

// }
