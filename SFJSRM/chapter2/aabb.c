// 求所有形如aabb的四位完全平方数

#include<stdio.h>
#include<math.h>

// 调用 sqrt方法
void method1();
// 不调用sqrt方法
void method2();

int main(){
	
	int n;
	while(scanf("%d", &n)==1){
		//printf("%d\n", n);
		if(n==1){
			method1();
		}else {
			method2();
		}
	}
	
	
	return 0;
}

void method1(){
	int n;
	double m;
	
	for(int i=1; i<=9; i++ ){
		for(int j=0; j<=9 ; j++){

			n = i*1100+j*11;
			m = sqrt(n);
			
			if(floor(m+0.5)==m) printf("%d %s\n", n, "是完全平方数");
		}
	}
}

void method2(){
	printf("method2\n");
	int x, n, hi, lo;
	for(x=1;;x++){
		n=x*x;
		if(n<1000) continue;
		if(n>9999) break;
		//printf("%d\n", n);
		hi = n/100;
		lo = n%100;
		if(hi/10==hi%10 && lo/10 == lo%10) printf("%d\n", n);
	}
	

}




