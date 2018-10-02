// 输出技巧

#include<stdio.h>

int main(){
	int i, n;
	scanf("%d", &n);
	
	for(i=2; i<=2*n; i=i+2){
		//printf("%d\n", 2*i); //修改输出不修改for循环
		printf("%d\n", i);
	}
}