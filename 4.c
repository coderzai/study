
//���м�λ�� 
#include <stdio.h> 
int main()
{
	int a;
	int n=1; 
	printf("������һ����������������9999��:");
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

//��while��� 
#include <stdio.h> 
int main()
{
	int a;
	int n=0; 
	printf("������һ��������:");
	scanf("%d",&a); 
	
//	n++;
//	a/=10;          ��2����Ͽ����ж�0��1λ�� 
	while(a>0){
		n++;
		a=a/10;
	}
	printf("%d\n",n);
	
	return 0;
}

//�� do while ��� 
#include <stdio.h> 
int main()
{
	int a;
	int n=0; 
	printf("������һ��������:");
	scanf("%d",&a); 
	
	do{
		n++;
		a=a/10;
	}while(a>0);
	 
	printf("%d\n",n);
	
	return 0;
}


//��log2X
#include <stdio.h>
int main()
{
	int x;
	int n=0;    
	scanf("%d",&x);
	
	int t=x;//Ϊ�˰Ѹտ�ʼ��x���£�����֮ǰ��ԭʼ��ֵ���� �� 
	
	while(x>1){
		x/=2;
		n++;
	}
	printf("log2 of %d is %d",t,n);
	
	return 0;
 } 
 
//100������0 
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


//�������100���ڵ��� 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	int a=rand();
	
	printf("%d\n",a%100);
	
	return 0;
	
}
//������С
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	int number=rand()%100+1;  //rand()����һ��1-100������� 
	int count=0;
	int a=0;
	printf("���Ѿ������һ��100���ڵ�����\n");
	
	do{
		printf("����������:\n");
		scanf("%d",&a);
		count++;
		if(a>number){
			printf("��µ�������,"); 
		}
		else if(a<number){
			printf("��µ���С��,");
		}
	 
	}while(a!=number);
	printf("��ϲ�㣬������,������%d�Ρ�\n",count);
	
	return 0;
} 


//��ƽ����
#include <stdio.h>
int main(){
	int number=0;
	int count=0;
	int sum=0;
	printf("������һϵ�����������������-1��ʾ������\n");
	do{
		scanf("%d",&number);
		if(number!=-1){
			sum+=number;
			count++;
		}	
	}while(number!=-1);
	
//	double f = sum/count;
//	printf("һ��������%d������ƽ����Ϊ%lf��\n",count,f);      �����Ϊʲô���� 
	printf("һ��������%d������ƽ����Ϊ%f\n",count,1.0*sum/count);
	return 0;
} 

#include <stdio.h>
int main(){
	int number=0;
	int count=0;
	int sum=0;
	printf("������һϵ�����������������-1��ʾ������\n");
	scanf("%d",&number);     //������ִֻ����1�� 
	while(number!=-1){

			sum+=number;
			count++;	
			scanf("%d",&number);	//���϶���number		
	}
	
	printf("һ��������%d������ƽ����Ϊ%f\n",count,1.0*sum/count);
	return 0;
} 

//�������� 
#include <stdio.h>
int main(){
	int a;    //��������������� 
	int n;    // ����ó���ÿһ����λ�� 
	int b=0;    //������������Ľ�� 
	printf("������һ����������");
	scanf("%d",&a);
	int initial = a;    //ѭ��ִ��ǰ��ԭʼֵ���� 
	
	while(a>0){
		n = a%10;     //ȡ���һλ������λ����
		b = b*10+n;   //���
		a = a/10;     //ȥ�����һλ������λ���� 
	}
	
	printf("%d������Ϊ%d",initial,b); 
	return 0;
 }

#include <stdio.h>
int main(){
	int a;    //��������������� 
	int n;    // ����ó���ÿһ����λ�� 
	int b=0;    //������������Ľ�� 
	printf("������һ����������");
	scanf("%d",&a);
	int initial = a;    //ѭ��ִ��ǰ��ԭʼֵ���� 
	
	while(a>0){
		n = a%10; //ȡ���һλ������λ����
		printf("%d",n);   
		b = b*10+n;   //���
		a = a/10;     //ȥ�����һλ������λ���� 
	}
	
	return 0;
 } 
  

//��׳�
 
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

//��׳ˣ���1�˵�n�� 
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

//��׳ˣ���n�˵�1�� 
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
	int i=n;         //����n��ֵ 
	
	for(;n>1;n--){    //n=nû��ʵ������,���ǷֺŲ���ʡ��
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
//�ж��Ƿ�Ϊ���� 
#include <stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	int i;
	int isprime=1;
	
	for(i=2;i<x;i++){           //��2��ʼ��������һֱ����x-1���Ǹ��� 
		if(x%i==0){           //x%i=0��ʾ�ܱ��������������� 
			isprime=0;          //ֻ�ǲ���ֱ�������������������ÿִ��һ��ͻ����1�Ρ�     
			break;   
		}
	}

	if (isprime==1){
		printf("������");
	} 
	else{
		printf("��������");
	} 
	return 0;
}
//��100���ڵ����� 
#include <stdio.h>
int main()
{
	int x;
	for(x=1;x<=100;x++){
		int i;
		int isprime=1;
		for(i=2;i<x;i++){           //��2��ʼ��������һֱ����x-1���Ǹ��� 
			if(x%i==0){           //x%i=0��ʾ�ܱ��������������� 
			isprime=0;          //ֻ�ǲ���ֱ�������������������ÿִ��һ��ͻ����1�Ρ�     
			break;   
			}
		}

		if (isprime==1){
		printf("%d  ",x);
		} 
//		else{
//		printf("%d��������\n",x);
//		}
	}
	
	 
	return 0;
}

//��ǰ50������ 
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


//��1�� 2�� 5�� �ճ�10Ԫ���µĽ��
//����break ���� 
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
					printf("%d��1��+%d��2��+%d��5��=%dԪ\n",one,two,five,x);
//					exit=1;
//					break;              //���û����Щ����������п��ܵĽ���� 
				}                       //�������Щ����ֻ����1�����ܵĽ����
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
					printf("%d��1��+%d��2��+%d��5��=%dԪ\n",one,two,five,x);
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
		sign = -sign;                //��һ������ ���ڶ��θ��� 
	}

//	double sign=1.0;
//	for(i=1;i<=n;i++){
//		sum=sum+sign/i;        
//		sign = -sign;                
//	}
	printf("f(%d)=%f\n",n,sum);
	return 0;
}


