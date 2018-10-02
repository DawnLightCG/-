// 韩信点兵 中国剩余定理

/*
三人同行七十希，五树梅花廿一支，七子团圆正半月，除百零五便得知
这个歌诀给出了模数为3、5、7时候的同余方程的秦九韶解法。
意思是：将除以3得到的余数乘以70，将除以5得到的余数乘以21，将除以7得到的余数乘以15，
全部加起来后再减去105或者105的整数倍，得到的数就是答案（除以105得到的余数则为最小答案）。
比如说在以上的物不知数问题里面，使用以上的方法计算就得到
70*2+21*3+15*2=233=2*105+23
因此按歌诀求出的结果就是23.
*/

// 暴力破解法

#include<stdio.h>

int main(){
	int a, b, c;
	int sign;  // 标志位
	FILE *fin, *fout; // FILE要大写
	fin = fopen("data.in" ,"rb");
	fout = fopen("data.out", "wb");
	
	while(fscanf(fin, "%d%d%d", &a,&b,&c)==3){
		sign = 1;
		for(int i=10; i<=100 ;i++){
			if(i%3==a)
				if(i%5==b)
					if(i%7==c){
						fprintf(fout, "%d\n", i);
						sign = 0;
					}
		}
		if(sign) fprintf(fout, "No answer\n");
		
	}
	
	fclose(fin);
	fclose(fout);
	
	return 0;
}