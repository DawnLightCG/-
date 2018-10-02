#include<stdio.h>
#include<math.h>
int main(){

	/*
	int maxint, minint;
	for(int i=1; i>0; i++){
		maxint=i;
	}
	printf("%d\n", maxint);
	for(int i=-1; i<0; i--){
		minint=i;
	}
	printf("%d\n", minint);
	*/
	
	/*
	int m=0;	
	double n;
	for(double i=1; i>0.0;i=i/10.0){
		m=m+1;
		n=i;
	}
	
	printf("%d\n", m);
	printf("%.640lf\n", n);
	return 0;
	*/
	
	
	/*
	double m;
	for(double i=2.0; i>0.0 && isfinite(i); i=pow(i,2)){  // Ctrl+c：终止命令行正在执行的程序； Ctrl+Z：scanf 表示流输入结束
		m=i;                                              // https://blog.csdn.net/wokaowokaowokao12345/article/details/72846436
	}
	printf("%lf\n", m);
	/*
	int isfinite(x) ，判断x是否有限，是返回1，其它返回0；
	int isnormal(x)，判断x是否为一个数（非inf或nan），是返回1，其它返回0；
	int isnan(x)，当x时nan返回1，其它返回0；
	int isinf(x) ,当x是正无穷是返回1，当x是负无穷时返回-1，其它返回0。有些编译器不区分。
	*/
	
	printf("%d\n", 1&&0||1&&1); // 3种可能， &&和||,优先级一样(1)，&&高(1)， ||高(0)  结果输出 1
	printf("%d\n", 0||1&&1);    // 2种核能，一样(0), &&高（1） ，结果输出 1  所以 && 优先级高
	
	int a, b, y=0;
	while(scanf("%d%d", &a,&b)!=EOF){
		if(a)if(b);else y++; // 1 0 ； 0 1 
		
		printf("%d\n", y); // else 跟最近的if
	}
	


	
}