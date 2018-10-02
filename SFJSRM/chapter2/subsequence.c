// 子序列的和(有trap) subsequence

#include<stdio.h>

int main(){
	int n, m;
	double s;
	while(scanf("%d%d", &n, &m)==2){
		s = 0.0;
		if(n>=m) break;
		if(m>100000){
			printf("%0.5lf\n", 0.00001);
			break;
		}
		for(int i=n; i<=m; i++){
			s = s + (double)1/(i*i)； // 除法后边的括号，别忘了加。
		}
		printf("%.5lf\n", s);
	}
	
	return 0;
}