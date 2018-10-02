// 调和级数 harmony

#include<stdio.h>

int main(){
	int n;
	double m;
	
	while(scanf("%d", &n)==1){
		m = 0.0;
		for(int i=1; i<=n; i++){
			m = m + (double)1/i;
		}
		printf("%.3lf\n", m);
	}
	
	return 0;
}