//�������� 
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
	printf("�������ʼֵ��Ԫ����");
	scanf("%d",&amount);
	
	int price=0;
	printf("�����뻨�ѵĽ�Ԫ����");
	scanf("%d",&price);
	
	int change=0;
	change=amount-price;	
//	int change =100-price
	printf("������%dԪ��\n",change);
	
	return 0;
}



//������Ӣ��Ӣ���ж�� 
#include <stdio.h>
int main()
{
	printf("��ֱ����������ߵ�Ӣ�ߺ�Ӣ��(������5 7������5Ӣ��7Ӣ��)��\n");
	
	double a;
	double b;
	scanf("%lf %lf",&a,&b);

	double c=((a+b/12)*0.3048);
	printf("������Ϊ%lf�ס�\n",c);
	return 0;
}



//����ʱ���
#include <stdio.h>
int main()
{
	int hour1,minute1;
	int hour2,minute2;
	
	printf("�������һ��ʱ�䣨��5 7������5ʱ7�֣���\n");
	scanf("%d %d",&hour1,&minute1);
	printf("������ڶ���ʱ�䣨ͬ�ϣ���\n"); 
	scanf("%d %d",&hour2,&minute2);
	
//	int t1=0,t2=0,t=0;
	int t1=hour1*60+minute1;
	int t2=hour2*60+minute2;
	int t=t2-t1;
	printf("ʱ���Ϊ%dʱ%d�֡�\n",t/60,t%60);
	
	return 0;
 } 


//��ƽ���� 1
#include <stdio.h>
int main()
{
	int a,b;
	printf("������2����:\n");
	scanf("%d %d",&a,&b);
	double c=(a+b)/2.0;
	printf("%d��%d��ƽ��ֵΪ��%f\n",a,b,c);
	return 0;
	
}


//��ƽ���� 2
#include <stdio.h>
int main()
{
	double a,b;
	printf("������2����:\n");
	scanf("%lf %lf",&a,&b);
	double c=(a+b)/2;
	printf("%f��%f��ƽ��ֵΪ��%f\n",a,b,c);
	return 0;
	
}

//���㸴��    ���䣺��Ϣ=����*����*���� 
#include <stdio.h>
int main ()
{
	int x;
	printf("�����뱾��\n");
	scanf("%d",&x);
	
//	double money ;
	double money = x*(1+0.033)*(1+0.033)*(1+0.033);
	printf("3����Ǯ��Ϊ��%fԪ��\n",money);
	return 0;
 } 


//����2����

#include <stdio.h>
int main ()
{
	int a=0,b=0;
	printf("������2����Ҫ����������\n");
	scanf("%d %d",&a,&b);
	int t;
	t=a;
	a=b;
	b=t;
	printf("���������2����Ϊ��%d %d",a,b) ;
	return 0;
 } 


