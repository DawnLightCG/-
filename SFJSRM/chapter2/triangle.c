// 倒三角形

#include<stdio.h>

int main(){
	int n;
	
	while(scanf("%d", &n)==1){
		for(int i=n,j=0;i>0;--i,j++){
			for(int m = j; m>0; --m) printf(" ");
			for(int k=2*i-1;k>0;--k){
				printf("#");
			}
			for(int m = j; m>0; --m) printf(" ");
			printf("\n");
		}
		printf("\n");
	}
	
	
	return 0;
}