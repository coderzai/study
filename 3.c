
//计算时间差  （用了if判断） 
#include <stdio.h>
int main()
{
	int hour1, minute1;
	int hour2, minute2;
	
	printf("请输入开始时间（如11 06代表11点06分）：") ;
	scanf("%d %d", &hour1, &minute1);
	printf("请输入结束时间（同上）：") ; 
	scanf("%d %d", &hour2, &minute2);

	int hour = hour2 - hour1;
	int minute = minute2 - minute1;
	if (minute <0) {
		minute = 60 + minute;
		hour --;
	}
	
	printf("时间差是%d小时%d分。\n", hour, minute);
	return 0;
}
//计算找零 
#include <stdio.h>
int main()
{
	//	初始化
	int price = 0;
	int bill = 0;
	int money =0;
	//	读入金额和票面
	printf("请输入金额：");
	scanf("%d", &price);
	printf("请输入票面：");
	scanf("%d", &bill);
	//	计算找零
	if ( bill >= price ) 
	{
		printf("应该找您：%d\n", bill - price);
	} 
	else 
	{
		money=price-bill;
		printf("你的钱不够，还差%d元。\n",money);
	}

	return 0;
}

//2个整数，求最大值 
#include <stdio.h>

int main()
{
	int a,b;

	printf("请输入两个整数：");
	scanf("%d %d", &a, &b);
	//方法1 
//	int max = b;
//	if ( a > b ) {
//		max = a;
//	}
	//方法2
	int max;
	if ( a > b ) {
		max = a;
	}
	else{
		max=b;
	} 

	printf("大的那个是%d\n", max);

	return 0;
}

//3个整数，求最大值
#include <stdio.h>
int main()
{
	int a,b,c;
	printf("请输入3个数"); 
	scanf("%d %d %d", &a, &b, &c);

	int max = 0;

	if ( a>b ) {
		if ( a>c ) {
			max = a;
		} 
		else {
			max = c;
		}
	} 
	else {
		if ( b>c ) {
			max = b;
		} 
		else {
			max = c;
		}
	}

	printf("最大值是%d\n", max);

	return 0;
}

//分段函数 
#include <stdio.h>

int main()
{
	int x;

	scanf("%d", &x);

	int f=0;
	if ( x < 0 ) {
		f = -1;
	} 
	else if ( x == 0 ) {
		f = 0;
	} 
	else if ( x >5 ) {
		f = 2 * x;
	} 
	else {
		f = 3*x;
	}

	printf("%d\n", f);

	return 0;
}


//用switch case 语句   方法1 
#include <stdio.h>
int main()
{
	int score;
	printf("请输入你的成绩(0-100)：");
	scanf("%d",&score);
	
	score=score/10;
	switch(score)
	{
		case 10:
		case 9:
			printf("A\n");
			break;
		case 8:
			printf("B\n");
			break;
		case 7:
			printf("C\n");
			break;
		case 6:
			printf("D\n");
			break;	
		default:
			printf("E\n");
			break;
	}
	return 0;
}

//用else if 语句   方法2 
#include <stdio.h>
int main()
{
	int score;
	printf("请输入你的成绩(0-100)：");
	scanf("%d",&score);
	
	if(score>=90)
	{
		printf("A\n");
	}
	else if(80<=score&&score<90)
	{
		printf("B\n");
	}
	else if(70<=score&&score<80)
	{
		printf("C\n");
	}
	else if(60<=score&&score<70)
	{
		printf("D\n");
	}
	else 
	{
		printf("E\n");
	}
	return 0;
 } 

//#include <stdio.h>
//int main(){
//	int x;
//	scanf("%d",&x);
//	
//	
//	switch ()
//	{
//		case :
//		f=-1;
//		break; 
//		
//		case 0:
//		f=0;
//		break;
//		
//		case :
//		f=2x;
//		break;
//	}
//	printf("%d",f);	
//	return 0;
//} 
 
#include <stdio.h>

int main(){
	int Speed;
	scanf("%d",&Speed);
	
	if (Speed>60)
	{
		printf("Speed:%d - Speeding",Speed);
	}
	else 
	{
		printf("Speed:%d - OK",Speed);
	}
	return 0;
}

#include <stdio.h>
int main()
{
	int N;
	scanf("%d",&N);

	if (N/5>3){
		printf("Drying in day %d",N);
	}
	else{
		printf("Fishing in day %d",N);
	}
	
	return 0;
}

#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	
	if (a!=b&&b==c){
		printf("a"); 
	}
	else if(a!=b&&a==c){
		printf("b");
	}
	else if(b!=c&&a==b){
		printf("c");
	}
	return 0;
}

#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d:%d",&a,&b);
	
	if(a>0&&a<12){
		printf("%d:%d AM",a,b);
	}
	else if(a=12){
		printf("%d:%d PM",a,b);
	}
	else if(a>12&&a<24){
		printf("%d:%d AM",a-12,b);
	}
	else{
		printf("%d:%d PM",a-24,b);
	}
	return 0;
}

