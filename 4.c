
//求有几位数 
#include <stdio.h> 
int main()
{
	int a;
	int n=1; 
	printf("请输入一个正整数（不大于9999）:");
	scanf("%d",&a); 
	
	if(a>999){
		n=4;
	}
	else if(a>99){
		n=3;
	}
	else if(a>9){
		n=2;
	}
	printf("%d\n",n);
	
	return 0;
}

//用while语句 
#include <stdio.h> 
int main()
{
	int a;
	int n=0; 
	printf("请输入一个正整数:");
	scanf("%d",&a); 
	
//	n++;
//	a/=10;          这2句加上可以判断0是1位数 
	while(a>0){
		n++;
		a=a/10;
	}
	printf("%d\n",n);
	
	return 0;
}

//用 do while 语句 
#include <stdio.h> 
int main()
{
	int a;
	int n=0; 
	printf("请输入一个正整数:");
	scanf("%d",&a); 
	
	do{
		n++;
		a=a/10;
	}while(a>0);
	 
	printf("%d\n",n);
	
	return 0;
}


//求log2X
#include <stdio.h>
int main()
{
	int x;
	int n=0;    
	scanf("%d",&x);
	
	int t=x;//为了把刚开始的x留下（计算之前把原始的值留下 ） 
	
	while(x>1){
		x/=2;
		n++;
	}
	printf("log2 of %d is %d",t,n);
	
	return 0;
 } 
 
//100倒数到0 
#include <stdio.h>
int main()
{
	int count =100;
	while (count >=0){
		count--;
		printf("%d\n",count);
	}
	
	return 0;
}


//随机产生100以内的数 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	int a=rand();
	
	printf("%d\n",a%100);
	
	return 0;
	
}
//猜数大小
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	int number=rand()%100+1;  //rand()产生一个1-100的随机数 
	int count=0;
	int a=0;
	printf("我已经想好了一个100以内的数。\n");
	
	do{
		printf("请猜下这个数:\n");
		scanf("%d",&a);
		count++;
		if(a>number){
			printf("你猜的数大了,"); 
		}
		else if(a<number){
			printf("你猜的数小了,");
		}
	 
	}while(a!=number);
	printf("恭喜你，猜中了,共猜了%d次。\n",count);
	
	return 0;
} 


//算平均数
#include <stdio.h>
int main(){
	int number=0;
	int count=0;
	int sum=0;
	printf("请输入一系列正整数，最后输入-1表示结束。\n");
	do{
		scanf("%d",&number);
		if(number!=-1){
			sum+=number;
			count++;
		}	
	}while(number!=-1);
	
//	double f = sum/count;
//	printf("一共输入了%d个数，平均数为%lf。\n",count,f);      不理解为什么不行 
	printf("一共输入了%d个数，平均数为%f\n",count,1.0*sum/count);
	return 0;
} 

#include <stdio.h>
int main(){
	int number=0;
	int count=0;
	int sum=0;
	printf("请输入一系列正整数，最后输入-1表示结束。\n");
	scanf("%d",&number);     //程序中只执行了1次 
	while(number!=-1){

			sum+=number;
			count++;	
			scanf("%d",&number);	//不断读入number		
	}
	
	printf("一共输入了%d个数，平均数为%f\n",count,1.0*sum/count);
	return 0;
} 

//数的逆序 
#include <stdio.h>
int main(){
	int a;    //代表输入的正整数 
	int n;    // 代表得出的每一个个位数 
	int b=0;    //代表逆序输出的结果 
	printf("请输入一个正整数：");
	scanf("%d",&a);
	int initial = a;    //循环执行前把原始值留下 
	
	while(a>0){
		n = a%10;     //取最后一位数（个位数）
		b = b*10+n;   //结果
		a = a/10;     //去掉最后一位数（个位数） 
	}
	
	printf("%d的逆序为%d",initial,b); 
	return 0;
 }

#include <stdio.h>
int main(){
	int a;    //代表输入的正整数 
	int n;    // 代表得出的每一个个位数 
	int b=0;    //代表逆序输出的结果 
	printf("请输入一个正整数：");
	scanf("%d",&a);
	int initial = a;    //循环执行前把原始值留下 
	
	while(a>0){
		n = a%10; //取最后一位数（个位数）
		printf("%d",n);   
		b = b*10+n;   //结果
		a = a/10;     //去掉最后一位数（个位数） 
	}
	
	return 0;
 } 
  

//求阶乘
 
#include <stdio.h>

int main()
{
	int n;
	int i=1;
	scanf("%d",&n); 
	int factor=1;
	while(i<=n){
		
		factor = factor*i;
		i++;	
	}
	printf("%d!=%d\n",n,factor);
	
	return 0;
}

//求阶乘（从1乘到n） 
#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n); 
	int factor=1;
	int i;
	for(i=1;i<=n;i++){
		factor = factor*i;	
	}
	printf("%d!=%d\n",n,factor);
	
	return 0;
}

//求阶乘（从n乘到1） 
#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n); 
	int factor=1;
	int i;
	for(i=n;i>1;i--){
		factor = factor*i;	
	}
	printf("%d!=%d\n",n,factor);
	
	return 0;
}


#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n); 
	int factor=1;
	int i=n;         //保存n的值 
	
	for(;n>1;n--){    //n=n没有实际意义,但是分号不能省略
		factor = factor*n;	
	}
	printf("%d!=%d\n",i,factor);
	
	return 0;
}

#include <stdio.h>
int main() 
{
	int i;
	for(i=10;i>1;i/=2){
		printf("%d ",i++);
	}
	return 0; 
}

#include <stdio.h>
int main() 
{
	int i=10;
	while(i>1){
		printf("%d ",i++);
		i/=2;
	}
	return 0; 
}
//判断是否为素数 
#include <stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	int i;
	int isprime=1;
	
	for(i=2;i<x;i++){           //从2开始被整除，一直到（x-1）那个数 
		if(x%i==0){           //x%i=0表示能被整除，不是素数 
			isprime=0;          //只是不能直接输出不是素数，这样每执行一遍就会输出1次。     
			break;   
		}
	}

	if (isprime==1){
		printf("是素数");
	} 
	else{
		printf("不是素数");
	} 
	return 0;
}
//求100以内的素数 
#include <stdio.h>
int main()
{
	int x;
	for(x=1;x<=100;x++){
		int i;
		int isprime=1;
		for(i=2;i<x;i++){           //从2开始被整除，一直到（x-1）那个数 
			if(x%i==0){           //x%i=0表示能被整除，不是素数 
			isprime=0;          //只是不能直接输出不是素数，这样每执行一遍就会输出1次。     
			break;   
			}
		}

		if (isprime==1){
		printf("%d  ",x);
		} 
//		else{
//		printf("%d不是素数\n",x);
//		}
	}
	
	 
	return 0;
}

//求前50个素数 
#include <stdio.h>
int main()
{
	int x;
	int count = 0; 
	for(x=1;count<50;x++){
		int i;
		int isprime=1;
		for(i=2;i<x;i++){           
			if(x%i==0){           
			isprime=0;               
			break;   
			}
		}

		if (isprime==1){
			count++;
			printf("%d\t",x);
			if(count%5==0){
				printf("\n");
			}
		} 
	} 
	return 0;
}


//用1角 2角 5角 凑成10元以下的金额
//接力break 方法 
#include <stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	int one ,two,five;
//	int exit = 0;
	for(one=0;one<x*10;one++){
		for(two=0;two<x*10/2;two++){
			for(five=0;five<x*10/5;five++){
				if(one+two*2+five*5==x*10){
					printf("%d个1角+%d个2角+%d个5角=%d元\n",one,two,five,x);
//					exit=1;
//					break;              //如果没有这些将会出现所有可能的结果。 
				}                       //如果有这些将会只出现1个可能的结果。
			}
//			if(exit==1)break;
		}
//		if(exit==1)break;
	}
	return 0; 
}

#include <stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	int one ,two,five;

	for(one=0;one<x*10;one++){
		for(two=0;two<x*10/2;two++){
			for(five=0;five<x*10/5;five++){
				if(one+two*2+five*5==x*10){
					printf("%d个1角+%d个2角+%d个5角=%d元\n",one,two,five,x);
					goto out; 
				}                      
			}
		}
	}
	out:
	return 0; 
}


#include <stdio.h>
int main()
{
	int n;
	int i;
	double sum = 0.0;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		sum=sum+1.0/i;
	}
	printf("f(%d)=%f\n",n,sum);
	return 0;
}

#include <stdio.h>
int main()
{
	int n;
	int i;
	double sum = 0.0;
	scanf("%d",&n);
	
	int sign =1;
	for(i=1;i<=n;i++){
		sum=sum+sign*1.0/i;        
		sign = -sign;                //第一次正数 ，第二次负数 
	}

//	double sign=1.0;
//	for(i=1;i<=n;i++){
//		sum=sum+sign/i;        
//		sign = -sign;                
//	}
	printf("f(%d)=%f\n",n,sum);
	return 0;
}


