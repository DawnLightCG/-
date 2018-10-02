// 位数

#include<stdio.h>
#define LOCAL

int main(){
	
	#ifdef LOCAL
		freopen("data.in", "r", stdin);
		freopen("data.out", "w", stdout);
	#endif
	
	int n;
	int count;
	while(scanf("%d", &n)==1){
		count = 0;
		while(n !=0){
			n=n/10;
			count++;
		}
		printf("%d\n", count);
	}
	
	
	
	return 0;
	
	
}