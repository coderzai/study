//厘米换算成英尺英寸   stature 身高   foot 英尺   inch 英寸 
# include <stdio.h>
int main()
{
	int stature; 
	printf("请输入你的身高（以cm为单位）：");
	scanf("%d",&stature); 
	
	int foot =stature/30.48;
	int inch =(stature/30.48-foot)*12;
	
	printf("你的身高为%d英尺%d英寸",foot,inch);
	return 0;
 } 


//把时间都化为了小时 
#include <stdio.h>
int main()
{
	int time1,time2;
	printf("请输入起始时间(1106代表11点零6分):"); 
	scanf("%d",&time1);
	int hour1=time1/100;
	int minute1=time1%100;
	
	printf("请输入流逝时间(以分钟为单位):");
	scanf("%d",&time2);
	int hour2=time2/60;
	int minute2=time2%60;
	
	int hour3=hour1+hour2;
	int minute3=minute1+minute2;
	int time3=hour3*100+minute3;
	
	printf("终止时间为：%d",time3);
	return 0;
	
}

//把时间都化为了分钟 
#include <stdio.h>
int main()
{
	int time1,time2;
	
	printf("请输入起始时间(1106代表11点零6分):"); 
	scanf("%d",&time1);
	int hour1=time1/100;
	int minute1=time1%100;
	int a=hour1*60+minute1;  //起始时间的分钟数 
	
	printf("请输入流逝时间(以分钟为单位):");
	scanf("%d",&time2);     //流逝时间的分钟数 
	
	int b=a+time2;      //终止时间的分钟数 
	
	int hour=b/60;
	int minute=b%60; 
	int time =hour*100+minute;
	
	printf("终止时间为：%d",time);
	return 0;
	
}


#include <stdio.h>
int main()
{
	int i, j, x = 0, y, z;
	scanf("%d%d", &i, &j);
	if(i >= 1000)
	{
	       x = i / 1000;
	       y = (i % 1000) / 100;
	       z = (i %1000) %100;
	}
	else
	{
	       y = i / 100;
	       z = i % 100; 
	}
	int s = (10*x + y) * 60 + z;
	int n = s + j;
	i = n / 60 *100 + (n - ((n / 60 )* 60));
	printf("%d", i); 
	return 0;
}


#include <stdio.h>
int main()
{
	int number;
	printf("请输入一个三位数：");
	scanf("%d",&number);
	
	int x = number/100;
	int y = number%100/10;
	int z = number%10; 
	
	int number1 = z*100+y*10+x;
	printf("%d的逆序是%d",number,number1);
	return 0;
	
}


//方法1 
#include <stdio.h>
 
int main()
 {
 	int i;
 	scanf("%d", &i);
 	int t = i % 16 + i / 16 * 10;
 	printf("%d", t);
 	return 0;
 }

//方法2 
#include <stdio.h>
 
int main()
 {
 	int i;
 	scanf("%d", &i);   //以十进制的形式读进来 
 	printf("%x", i);   //以十六进制的形式输出
 	return 0;
 }
