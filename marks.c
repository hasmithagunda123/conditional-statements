#include<stdio.h>
int main()
{
	int m1,m2,m3,total,avg;
	printf("enter the marks m1,m2,m3");
	scanf("%d%d%d",&m1,&m2,&m3);
	total=m1+m2+m3;
	avg=total/3;
	if(avg > 90)
	printf("distinction");
	else if (avg >= 80 && avg <= 89)
	printf("A");
	else if (avg >=70 && avg <= 79)
	printf("B");
	else if (avg >= 60 && avg <= 69)
	printf("C");
	else
	printf("fail");
	
	
	

}
