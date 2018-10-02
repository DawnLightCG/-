// 近似计算 approximation pi/4

#include<stdio.h>
#include<math.h>

int main(){
	
	double pi = 0.0;
	
	for(int i=1; ;i++){
		if((double)1/i < 0.000001) break;
		pi = pi + pow(-1,i+1)*1/(2*i-1); 
	}
	printf("%.6lf\n", pi);
	return 0;
}
