
//������������� 
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


//������������� 
#include <stdio.h> 
int main(){
	int x;
	scanf("%d",&x);
	
	int mask=1;
	int t=x;
	while (t>9){
		t/=10;
		mask*=10;           //����������м�λ��   mask=10*10...
	}
	
	do{
		int d= x/mask;         //ȥ����λ�� 
		printf("%d ",d);
		if(mask>9){         
			printf(" ");     //if��Ϊ�����һ�������治�ӿո� 
		}
		x %= mask;           //�õ���λ�� 
		mask /= 10;          // 
	}while(mask>0);
	printf("\n");
	
	return 0;
}



//��1+2+3+...+100  ���ֱ���forѭ����whileѭ���� 
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
	printf("1+2+3+...+100��ֵΪ%d",sum);
	return 0;
}

//��1+2+3+...+100   (���˶��ű��ʽ)
#include <stdio.h>
int main()
{
	int i,sum;
	for(i=1,sum=0;i<=100;sum= sum+i,i++){
		
	}
	printf("1+2+3+...+100��ֵΪ%d",sum);
	return 0;
}

//n�Ľ׳� 
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
//n�Ľ׳� 
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

//�Ӽ�������2���������������Լ������whileѭ���� 
#include <stdio.h>
int main()
{
	int a,b;
	printf("������2��������:\n"); 
	scanf("%d %d",&a,&b);
	int c=1;
	
	while((c = a%b)!=0){
		a = b;                   
		b = c;	                  //շת����� 
	}
	printf("���Լ��Ϊ%d",b);
	return 0;
}

//�Ӽ�������2���������������Լ������do - whileѭ����
#include <stdio.h>
int main()
{
	int a,b,c;
	printf("������2��������:\n"); 
	scanf("%d %d",&a,&b);
	
	do{
		c=a%b;
		a=b;
		b=c;          //շת����� 
	}while(c!=0);
	printf("���Լ��Ϊ%d",a);
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
	printf("������ʵ�����ܸ�����"); 
	scanf("%d",&n);
	printf("������%d��ʵ����\n",n); 
	
//	double sum=0;
//	int i=1;
//	while(i<=n){
//		scanf("%d",&x);    //whileѭ������i����ʾѭ�����ٴΣ� 
//		sum=sum+x;
//		i++;
//	}
	double sum=0;
	int i;
	for(i=1;i<=n;i++){    //do  whileѭ������i����ʾѭ�����ٴΣ� 
		scanf("%d",&x);  
		sum=sum+x;
	}
	
	double ave = sum/n;
	printf("%d��ʵ����ƽ��ֵΪ��%f\n",n,ave); 
	
	return 0; 
}

#include <stdio.h>
int main()
{
	int x;
	double sum=0;
	printf("������һϵ��������������EOF��ʾ��������\n");
//	scanf("%d",&x)
	int count=0;      //�������˼����� 
	while(scanf("%d",&x)!=EOF){
		sum=sum+x;
//		scanf("%d",&x)
		count++;
	}	
	double ave = sum/count;
	printf("%d������ƽ��ֵΪ��%f",count,ave);
	
	return 0;
}

//��ʱ�ӷ�ʽ���
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

//�žų˷���
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
			printf(" ");            //���5-i���ո� 
		}
		for(j=1;j<=2*i-1;j++){      // ���2i-1��*
			printf("*");
		}
		printf("\n");
	}
	return 0;
	
}

//�Ӽ�������n���������ж������Ƿ����3�ı��� 
#include <stdio.h>
int main()
{
	int n; 
	printf("������һϵ��������");
	scanf("%d",&n);
	while(n%3==0){
		printf("����3�ı���");
		break;
	}
	while(n%3!=0){
		printf("������3�ı���");
		break;
	}
	
	return 0;
}

//��֪m��һ������1����������������ж�m�Ƿ�Ϊ����
#include <stdio.h>
int main ()
{
	int m,i=2;
	printf("���������1������\n");
	scanf("%d",&m);
	while(i<m){
		if(m%i==0){
			printf("%d��������\n",m); 
			return 0;  //ֱ���˳����� 
		}
		else{
			i++;
		}
		
	}
	printf("%d������\n",m);
	
	return 0;
 } 























































