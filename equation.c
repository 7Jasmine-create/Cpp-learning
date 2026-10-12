#include<stdio.h>
#include<math.h>

int main()
{
	
	double a,b,c,delta,x1,x2;
	printf("请输入系数a,b,c(用空格隔开):");
	scanf("%lf %lf %lf", &a, &b, &c);


if(a==0)
{
	
	printf("这不是一元二次方程:\n");
	return 0;
	
}

delta=b*b-4*a*c;

if(delta<0)
{
	printf("方程没有实数根\n");
	return 0;
	
}

else if(delta==0)
{
	
	x1=(-b)/(2*a);
	printf("方程有两个相等的实数根:\nx1=%.2f",x1);
	return 0;
}

else if(delta>0)
{
	
	x1=(-b+sqrt(delta))/(2*a);
	x2=(-b-sqrt(delta))/(2*a);
	printf("方程有两个不相等的实数根:\nx1=%.2lf,x2=%.2lf\n",x1,x2);
	
}

return 0;


}












