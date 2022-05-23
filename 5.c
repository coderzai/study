
//逆序输出正整数 
#include <stdio.h>
int main(){
	int x;
	
	scanf("%d",&x);
	do{
		int b=x%10;
		printf("%d ",b);
		if(x>9){
			printf(" ");
		}
		x/=10;
	}while(x>0);
		
	return 0;
}


//正序输出正整数 
#include <stdio.h> 
int main(){
	int x;
	scanf("%d",&x);
	
	int mask=1;
	int t=x;
	while (t>9){
		t/=10;
		mask*=10;           //求该正整数有几位数   mask=10*10...
	}
	
	do{
		int d= x/mask;         //去掉个位数 
		printf("%d ",d);
		if(mask>9){         
			printf(" ");     //if是为了最后一个数后面不加空格 
		}
		x %= mask;           //得到个位数 
		mask /= 10;          // 
	}while(mask>0);
	printf("\n");
	
	return 0;
}



//求1+2+3+...+100  （分别用for循环和while循环） 
#include <stdio.h>
int main()
{
//	int i,sum=0;
//	for(i=1;i<=100;i++){
//		sum += i;
//	}
	int i=1,sum=0;
	while (i<=100){
		sum += i;
		i++;
	}
	printf("1+2+3+...+100的值为%d",sum);
	return 0;
}

//求1+2+3+...+100   (用了逗号表达式)
#include <stdio.h>
int main()
{
	int i,sum;
	for(i=1,sum=0;i<=100;sum= sum+i,i++){
		
	}
	printf("1+2+3+...+100的值为%d",sum);
	return 0;
}

//n的阶乘 
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
		
	int fact=1;
	int i;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;        //1*2*3...*n
	}
	printf("%d!=%d",n,fact);
	return 0;
}
//n的阶乘 
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i=n;
	int fact=1;
	for(;n>1;n--)
	{
		fact=fact*n;         //n*(n-1)*...*1
	}
	printf("%d!=%d",i,fact);
	return 0;
}

//从键盘输入2个正整数，求最大公约数（用while循环） 
#include <stdio.h>
int main()
{
	int a,b;
	printf("请输入2个正整数:\n"); 
	scanf("%d %d",&a,&b);
	int c=1;
	
	while((c = a%b)!=0){
		a = b;                   
		b = c;	                  //辗转相除法 
	}
	printf("最大公约数为%d",b);
	return 0;
}

//从键盘输入2个正整数，求最大公约数（用do - while循环）
#include <stdio.h>
int main()
{
	int a,b,c;
	printf("请输入2个正整数:\n"); 
	scanf("%d %d",&a,&b);
	
	do{
		c=a%b;
		a=b;
		b=c;          //辗转相除法 
	}while(c!=0);
	printf("最大公约数为%d",a);
	return 0;
}

#include <stdio.h>
int main()
{
	int n; 
	int i=1;
	double sum=0;
	while(i<100){
		sum=sum+1.0/(i*i);
		i=i+2;
	}
	printf("f=%f",sum);	
	
	return 0;
}

#include <stdio.h>
int main()
{
	int n,x;
	printf("请输入实数的总个数："); 
	scanf("%d",&n);
	printf("请输入%d个实数：\n",n); 
	
//	double sum=0;
//	int i=1;
//	while(i<=n){
//		scanf("%d",&x);    //while循环（用i来表示循环多少次） 
//		sum=sum+x;
//		i++;
//	}
	double sum=0;
	int i;
	for(i=1;i<=n;i++){    //do  while循环（用i来表示循环多少次） 
		scanf("%d",&x);  
		sum=sum+x;
	}
	
	double ave = sum/n;
	printf("%d个实数的平均值为：%f\n",n,ave); 
	
	return 0; 
}

#include <stdio.h>
int main()
{
	int x;
	double sum=0;
	printf("请输入一系列正整数（输入EOF表示结束）：\n");
//	scanf("%d",&x)
	int count=0;      //计输入了几个数 
	while(scanf("%d",&x)!=EOF){
		sum=sum+x;
//		scanf("%d",&x)
		count++;
	}	
	double ave = sum/count;
	printf("%d个数的平均值为：%f",count,ave);
	
	return 0;
}

//按时钟方式输出
#include <stdio.h>
int main(){
	
	int h,m;
	for(h=0;h<24;h++){
		printf("h=%2d\n",h);
		for(m=0;m<60;m++){
//			printf("%d:%d\n",h,m);
			printf("%2d:%-5d",h,m);
		}
		printf("----------------------\n");
	}
	return 0 ;
} 

//九九乘法表
#include <stdio.h>
int main(){
	int i,j;
	for(i=1;i<=9;i++){
		for(j=1;j<=i;j++){
		printf("%d*%d=%d\t",i,j,i*j);
		
		}
	printf("\n");	
	}
	return 0;
} 

#include <stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++){
		
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
	
}

#include <stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++){
		
		for(j=1;j<=5-i;j++){
			printf(" ");            //输出5-i个空格 
		}
		for(j=1;j<=2*i-1;j++){      // 输出2i-1个*
			printf("*");
		}
		printf("\n");
	}
	return 0;
	
}

//从键盘输入n个整数，判断其中是否存在3的倍数 
#include <stdio.h>
int main()
{
	int n; 
	printf("请输入一系列整数：");
	scanf("%d",&n);
	while(n%3==0){
		printf("存在3的倍数");
		break;
	}
	while(n%3!=0){
		printf("不存在3的倍数");
		break;
	}
	
	return 0;
}

//已知m是一个大于1的正整数，编程序判断m是否为素数
#include <stdio.h>
int main ()
{
	int m,i=2;
	printf("请输入大于1的整数\n");
	scanf("%d",&m);
	while(i<m){
		if(m%i==0){
			printf("%d不是素数\n",m); 
			return 0;  //直接退出程序 
		}
		else{
			i++;
		}
		
	}
	printf("%d是素数\n",m);
	
	return 0;
 } 























































