#include<stdio.h>
// 3位数反转
void reversal3(int);
// 两个数交换
void exchangeNormal(int a,int b);
void exchangeKISS(int a, int b);


int main(){
	int n;
	scanf("%d", &n);
	if(99<n && n<1000){
		reversal3(n);
	}
	
	printf("exchange:\n");
	int a,b; // 原则上C语言变量声明要放在块头
	
	scanf("%d%d", &a, &b);
	exchangeNormal(a,b);
	exchangeKISS(a,b);
	
	return 0;
}

void reversal3(int n){
	int m = n%10*100 + n/10%10*10 + n/100; //反转算法
	if(n%10 != 0){
		printf("%3d\n", m);
	}
	else{
		printf("%03d\n", m); //注意这个输出格式控制
	}
}

void exchangeNormal(int a,int b){
	int t;
	t = a;
	a=b;
	b=t;
	printf("%d %d\n", a, b);
}

void exchangeKISS(int a, int b){
	printf("%d %d\n", b, a);
}

