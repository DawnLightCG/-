// 64位整数
// 求正整数n的正因子，n小于等于10的12次
// 1. 求n的正因子直接遍历 1到根号n，即可
// 2. n太大了，int只能表示10的10次，需要用long long 10的20次， 其对应占位符 win的 MinGW %I64d 其他%lld


#include<stdio.h>
#include<math.h>

int main(){
	long long n;
	//long long m;
	int m;
	while(scanf("%I64d", &n)==1){
		//m = (long long)sqrt(n);
		m = (int)sqrt(n);
		printf("%d\n", m);
		for(int i=1; i<=m; i++){
			if(n%i==0){
				printf("%d %I64d\n", i, n/i);
			}
		}
	}
	
	return 0;
}