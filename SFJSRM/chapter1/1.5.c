#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	/*
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	printf("%0.3lf",(a+b+c)/3.0);
	
	double f;
	scanf("%lf",&f);
	printf("%.3lf", 5*(f-32)/9);
	
	int n;
	scanf("%d", &n);
	printf("%d\n", n*(1+n)/2);
	*/
	
	
	/*
	������ǶȵĹ�ϵΪ��(�� �ǻ���)
	���� = (��/180) * �Ƕ�
	�Ƕ� = (180/��) * ����
	ʹ�� rtod( ) �������Խ�����ֵת��Ϊ�Ƕ�ֵ��
	
	sin() �������������ֵ������ֵ����ԭ��Ϊ��
    double sin(double x);

	��������������ֵ�����ȣ���

	������ֵ������-1 ��1 ֮��ļ�������
	*/
	
	/*
	const double pi = 4*atan(1);
	double r;
	scanf("%lf", &r);
	if(r<360 && r>=0){
		printf("%lf %lf\n", sin(r*pi/180), cos(r*pi/180));
	}
	
	return 0;
	*/
	
	/*
	double x1,y1,x2,y2;
	scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);
	printf("%lf\n", sqrt(pow(x1-x2,2)+pow(y1-y2, 2)));
	*/
	
	/*
	int n;
	scanf("%d", &n);
	printf("%s\n", n%2==1?"No":"Yes");
	*/
	
	/*
	int n;
	scanf("%d", &n);
	if(n*95>=300){
		printf("%.2lf\n", n*95*0.85);
	}else{
		printf("%.2lf\n",n*95.0);
	}
	*/
	
	/*
	double n;
	while(1){
		scanf("%lf", &n);	
		printf("%lf\n", n>=0?n:-n);
	}
	*/
	
	/*
	//����������֮�ʹ��ڵ����ߣ�����֮��ľ���ֵС�ڵ����ߡ����������ȣ������˻������Ρ�
	//c^{2}=a^{2}+b^{2}-2ab*cos(c) ֤������֮��С�ڵ�����  ��Ϊ(a-b)��ƽ�������Ķ�
	//#include <stdlib.h> ����ֵ��abs����ͷ�ļ�
	
	//���˸��� ����double��
	double a, b ,c;
	scanf("%lf%lf%lf", &a,&b,&c);
	
	if(a+b>c && b+c>a && c+a>b && abs(a-b)<c && abs(b-c)<a && abs(c-a)<b){
		if(a*a+b*b==c*c || b*b+c*c == a*a || c*c+a*a==b*b){
			printf("Yes\n");
		}else{
			printf("No\n");
		}
	}else{
		printf("Not a triangle!\n");
	}
	*/
	
	//https://zh.wikipedia.org/wiki/%E9%97%B0%E5%B9%B4
	int n;
	scanf("%d", &n);
	if((n%4==0 && n%100!=0) || n%400==0){
		printf("%s\n", "����"); // ����ռ�����ֽڣ���������ͨ��C�����У������ǰ��ַ������д洢������ġ�
	}
	else{
		printf("%s\n", "ƽ��");
	}
	
	
}