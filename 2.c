//���׻����Ӣ��Ӣ��   stature ���   foot Ӣ��   inch Ӣ�� 
# include <stdio.h>
int main()
{
	int stature; 
	printf("�����������ߣ���cmΪ��λ����");
	scanf("%d",&stature); 
	
	int foot =stature/30.48;
	int inch =(stature/30.48-foot)*12;
	
	printf("������Ϊ%dӢ��%dӢ��",foot,inch);
	return 0;
 } 


//��ʱ�䶼��Ϊ��Сʱ 
#include <stdio.h>
int main()
{
	int time1,time2;
	printf("��������ʼʱ��(1106����11����6��):"); 
	scanf("%d",&time1);
	int hour1=time1/100;
	int minute1=time1%100;
	
	printf("����������ʱ��(�Է���Ϊ��λ):");
	scanf("%d",&time2);
	int hour2=time2/60;
	int minute2=time2%60;
	
	int hour3=hour1+hour2;
	int minute3=minute1+minute2;
	int time3=hour3*100+minute3;
	
	printf("��ֹʱ��Ϊ��%d",time3);
	return 0;
	
}

//��ʱ�䶼��Ϊ�˷��� 
#include <stdio.h>
int main()
{
	int time1,time2;
	
	printf("��������ʼʱ��(1106����11����6��):"); 
	scanf("%d",&time1);
	int hour1=time1/100;
	int minute1=time1%100;
	int a=hour1*60+minute1;  //��ʼʱ��ķ����� 
	
	printf("����������ʱ��(�Է���Ϊ��λ):");
	scanf("%d",&time2);     //����ʱ��ķ����� 
	
	int b=a+time2;      //��ֹʱ��ķ����� 
	
	int hour=b/60;
	int minute=b%60; 
	int time =hour*100+minute;
	
	printf("��ֹʱ��Ϊ��%d",time);
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
	printf("������һ����λ����");
	scanf("%d",&number);
	
	int x = number/100;
	int y = number%100/10;
	int z = number%10; 
	
	int number1 = z*100+y*10+x;
	printf("%d��������%d",number,number1);
	return 0;
	
}


//����1 
#include <stdio.h>
 
int main()
 {
 	int i;
 	scanf("%d", &i);
 	int t = i % 16 + i / 16 * 10;
 	printf("%d", t);
 	return 0;
 }

//����2 
#include <stdio.h>
 
int main()
 {
 	int i;
 	scanf("%d", &i);   //��ʮ���Ƶ���ʽ������ 
 	printf("%x", i);   //��ʮ�����Ƶ���ʽ���
 	return 0;
 }
