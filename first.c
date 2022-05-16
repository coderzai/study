//四则运算 
#include <stdio.h>

int main() 
{
	int A;
	int B;
	
	int X,Y,Z,W;
	scanf("%d%d",&A,&B);
	
	X=A+B;
	Y=A-B;
	Z=A*B;
	W=A/B;
	
	printf("%d+%d=%d\n",A,B,X);
	printf("%d-%d=%d\n",A,B,Y);
	printf("%d*%d=%d\n",A,B,Z);
	printf("%d/%d=%d\n",A,B,W);
    return 0;
 } 



#include <stdio.h>
int main ()
{

	int amount=0;
	printf("请输入初始值（元）：");
	scanf("%d",&amount);
	
	int price=0;
	printf("请输入花费的金额（元）：");
	scanf("%d",&price);
	
	int change=0;
	change=amount-price;	
//	int change =100-price
	printf("给您找%d元。\n",change);
	
	return 0;
}



//计算人英尺英寸有多高 
#include <stdio.h>
int main()
{
	printf("请分别输入你的身高的英尺和英寸(如输入5 7，代表5英尺7英寸)：\n");
	
	double a;
	double b;
	scanf("%lf %lf",&a,&b);

	double c=((a+b/12)*0.3048);
	printf("你的身高为%lf米。\n",c);
	return 0;
}



//计算时间差
#include <stdio.h>
int main()
{
	int hour1,minute1;
	int hour2,minute2;
	
	printf("请输入第一个时间（如5 7即代表5时7分）：\n");
	scanf("%d %d",&hour1,&minute1);
	printf("请输入第二个时间（同上）：\n"); 
	scanf("%d %d",&hour2,&minute2);
	
//	int t1=0,t2=0,t=0;
	int t1=hour1*60+minute1;
	int t2=hour2*60+minute2;
	int t=t2-t1;
	printf("时间差为%d时%d分。\n",t/60,t%60);
	
	return 0;
 } 


//求平均数 1
#include <stdio.h>
int main()
{
	int a,b;
	printf("请输入2个数:\n");
	scanf("%d %d",&a,&b);
	double c=(a+b)/2.0;
	printf("%d和%d的平均值为：%f\n",a,b,c);
	return 0;
	
}


//求平均数 2
#include <stdio.h>
int main()
{
	double a,b;
	printf("请输入2个数:\n");
	scanf("%lf %lf",&a,&b);
	double c=(a+b)/2;
	printf("%f和%f的平均值为：%f\n",a,b,c);
	return 0;
	
}

//计算复利    补充：利息=本金*存期*利率 
#include <stdio.h>
int main ()
{
	int x;
	printf("请输入本金：\n");
	scanf("%d",&x);
	
//	double money ;
	double money = x*(1+0.033)*(1+0.033)*(1+0.033);
	printf("3年后的钱数为：%f元。\n",money);
	return 0;
 } 


//交换2个数

#include <stdio.h>
int main ()
{
	int a=0,b=0;
	printf("请输入2个需要交换的数：\n");
	scanf("%d %d",&a,&b);
	int t;
	t=a;
	a=b;
	b=t;
	printf("交换过后的2个数为：%d %d",a,b) ;
	return 0;
 } 


