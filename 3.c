
//����ʱ���  ������if�жϣ� 
#include <stdio.h>
int main()
{
	int hour1, minute1;
	int hour2, minute2;
	
	printf("�����뿪ʼʱ�䣨��11 06����11��06�֣���") ;
	scanf("%d %d", &hour1, &minute1);
	printf("���������ʱ�䣨ͬ�ϣ���") ; 
	scanf("%d %d", &hour2, &minute2);

	int hour = hour2 - hour1;
	int minute = minute2 - minute1;
	if (minute <0) {
		minute = 60 + minute;
		hour --;
	}
	
	printf("ʱ�����%dСʱ%d�֡�\n", hour, minute);
	return 0;
}
//�������� 
#include <stdio.h>
int main()
{
	//	��ʼ��
	int price = 0;
	int bill = 0;
	int money =0;
	//	�������Ʊ��
	printf("�������");
	scanf("%d", &price);
	printf("������Ʊ�棺");
	scanf("%d", &bill);
	//	��������
	if ( bill >= price ) 
	{
		printf("Ӧ��������%d\n", bill - price);
	} 
	else 
	{
		money=price-bill;
		printf("���Ǯ����������%dԪ��\n",money);
	}

	return 0;
}

//2�������������ֵ 
#include <stdio.h>

int main()
{
	int a,b;

	printf("����������������");
	scanf("%d %d", &a, &b);
	//����1 
//	int max = b;
//	if ( a > b ) {
//		max = a;
//	}
	//����2
	int max;
	if ( a > b ) {
		max = a;
	}
	else{
		max=b;
	} 

	printf("����Ǹ���%d\n", max);

	return 0;
}

//3�������������ֵ
#include <stdio.h>
int main()
{
	int a,b,c;
	printf("������3����"); 
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

	printf("���ֵ��%d\n", max);

	return 0;
}

//�ֶκ��� 
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


//��switch case ���   ����1 
#include <stdio.h>
int main()
{
	int score;
	printf("��������ĳɼ�(0-100)��");
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

//��else if ���   ����2 
#include <stdio.h>
int main()
{
	int score;
	printf("��������ĳɼ�(0-100)��");
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

