#include<stdio.h>
main()
{
	int std1, std2, std3;
	int math, eng, chem, phy, com;
	printf("std 1 =");
	scanf("%d %d %d %d %d", &math, &eng, &chem, &phy, &com);
	std1 = math + eng + chem + phy + com;
	printf("std 2 =");
	scanf("%d %d %d %d %d", &math, &eng, &chem, &phy, &com);
	std2 = math + eng + chem + phy + com;
	printf("std 3 =");
	scanf("%d %d %d %d %d", &math, &eng, &chem, &phy, &com);
	std3 = math + eng + chem + phy + com;
	printf("\ntotal\nstd1=%d\nstd2=%d\nstd3=%d", std1, std2, std3);
}