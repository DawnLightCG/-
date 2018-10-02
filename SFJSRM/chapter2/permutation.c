// 排列 permutation

#include<stdio.h>

int main(){
	
	int a,b,c;
	int check[10]={0}; // 全是0，而 int check[10] = {1}( int 不能少，说明只能初始化时采用大括号一次性赋值) 结果只有第一个是1
	int sign;
	
	for(a=123;a<=321;a++){
		sign = 1;
		b=2*a; c=3*a;
		check[a/100]=check[a%100/10]=check[a%100%10]=1;
		check[b/100]=check[b%100/10]=check[b%100%10]=1;
		check[c/100]=check[c%100/10]=check[c%100%10]=1;
		for(int i=1;i<10;i++){
			if(check[i]==0){
				sign = 0;
				break;
			}		
		}
		if(sign){
			printf("%d %d %d\n", a,b,c);
		}
		
		/*
		int a[5]={1,2,3}; 正确
		但
		int a[5];
		a={1,2,3}错误
		因为数组只能在初始化的时候一次性赋值，其他时候必须要一个一个赋值。
		*/
		for(int i=1;i<10;i++){
			check[i]=0;
		}
	}
	
	return 0;
	
	
}