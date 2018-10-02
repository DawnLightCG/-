#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	/*
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	printf("%0.3lf",(a+b+c)/3.0);
	
	double f;
	scanf("%lf",&f);
	printf("%.3lf", 5*(f-32)/9);
	
	int n;
	scanf("%d", &n);
	printf("%d\n", n*(1+n)/2);
	*/
	
	
	/*
	弧度与角度的关系为：(π 是弧度)
	弧度 = (π/180) * 角度
	角度 = (180/π) * 弧度
	使用 rtod( ) 函数可以将弧度值转换为角度值。
	
	sin() 函数用来求给定值的正弦值，其原型为：
    double sin(double x);

	【参数】给定的值（弧度）。

	【返回值】返回-1 至1 之间的计算结果。
	*/
	
	/*
	const double pi = 4*atan(1);
	double r;
	scanf("%lf", &r);
	if(r<360 && r>=0){
		printf("%lf %lf\n", sin(r*pi/180), cos(r*pi/180));
	}
	
	return 0;
	*/
	
	/*
	double x1,y1,x2,y2;
	scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);
	printf("%lf\n", sqrt(pow(x1-x2,2)+pow(y1-y2, 2)));
	*/
	
	/*
	int n;
	scanf("%d", &n);
	printf("%s\n", n%2==1?"No":"Yes");
	*/
	
	/*
	int n;
	scanf("%d", &n);
	if(n*95>=300){
		printf("%.2lf\n", n*95*0.85);
	}else{
		printf("%.2lf\n",n*95.0);
	}
	*/
	
	/*
	double n;
	while(1){
		scanf("%lf", &n);	
		printf("%lf\n", n>=0?n:-n);
	}
	*/
	
	/*
	//三角形两边之和大于第三边，两边之差的绝对值小于第三边。如果两者相等，则是退化三角形。
	//c^{2}=a^{2}+b^{2}-2ab*cos(c) 证明两边之差小于第三边  因为(a-b)的平方，减的多
	//#include <stdlib.h> 绝对值（abs）的头文件
	
	//除了个数 都用double。
	double a, b ,c;
	scanf("%lf%lf%lf", &a,&b,&c);
	
	if(a+b>c && b+c>a && c+a>b && abs(a-b)<c && abs(b-c)<a && abs(c-a)<b){
		if(a*a+b*b==c*c || b*b+c*c == a*a || c*c+a*a==b*b){
			printf("Yes\n");
		}else{
			printf("No\n");
		}
	}else{
		printf("Not a triangle!\n");
	}
	*/
	
	//https://zh.wikipedia.org/wiki/%E9%97%B0%E5%B9%B4
	int n;
	scanf("%d", &n);
	if((n%4==0 && n%100!=0) || n%400==0){
		printf("%s\n", "闰年"); // 汉子占两个字节，所以在普通的C语言中，汉字是按字符串进行存储和输出的。
	}
	else{
		printf("%s\n", "平年");
	}
	
	
}