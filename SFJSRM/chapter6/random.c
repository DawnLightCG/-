// 随机数

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	char s[10];
	srand(time(NULL));
	scanf("%s", s);
	printf("%s\n", s);
	for(int i=0;i<6;i++){
		printf("%lf\n", (double)rand()/RAND_MAX); // 除以RAND_MAX得[0,1]之间的随机数
	}
}