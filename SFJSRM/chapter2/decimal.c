// 分数化小数 decimal

#include<stdio.h>
#include<math.h>
int main(){
	int a, b, c;
	double m;
	while(scanf("%d%d%d", &a,&b,&c)){
		m = (double)a/b+5*pow(10,-(c+1)); // 4舍5入设计
		printf("%lf\n",  m);
		printf("%.*lf\n", c, m);   // .* 可以动态定制保留几位小数
	}
	
	return 0;
}