#include<stdio.h>
#include<math.h>

// A: 数据类型实验

void A1();
void A2();
void A3();
void A4();
//void A5();

// B: scanf输入格式实验

void B1();
// C: printf语句输出实验
void C1();

//D: 实践能力
void D1();


int main(){
	A1();
	A2();
	A3();
	A4();
	//A5();
	//B1();
	
	C1();
	
	D1();
	
	return 0;
}


// 表达式 11111*11111 那5个1，6个1，9个1呢？
/*
*	C语言数据类型
*	char 1字节：0-255	int 4字节：10位  long long 8字节：20位
*	float 4字节：[-3.4E-38,3.4E+38]38次		double 8字节：[-1.7E-308,1.7E+308]308次
*
*/

void A1(){
	printf("-------------------A1----------------------\n");
	int n1=11111, n2=111111, n3=111111111;
	printf("%d %d %d\n", n1*n1, n2*n2, n3*n3); //n2 和 n3都溢出了
}

void A2(){
	printf("-------------------A2----------------------\n");
	float n1=11111.0, n2=111111.0, n3=111111111.0;
	printf("%lf\n%lf\n%lf\n", n1*n1, n2*n2, n3*n3); // 正常输出
}

void A3(){
	printf("-------------------A3----------------------\n");
	printf("%d\n%lf\n", sqrt(-10), sqrt(-10));
}

void A4(){
	printf("-------------------A4----------------------\n");
	printf("%d\n%lf\n%d\n%lf\n", 1.0/0.0, 1.0/0.0, 0.0/0.0, 0.0/0.0); // %lf对应0.0/0.0 输出：-1.#IND00
	/*https://stackoverflow.com/questions/347920/what-do-1-inf00-1-ind00-and-1-ind-mean
	* NaN  is not a number ,  Both sqrt(-1.0) and log(-1.0) would return a NaN
	* Windows displays a NaN as -1.#IND ("IND" for "indeterminate" 不明确的) while Linux displays nan.
	* Other operations that would return a NaN include 0/0, 0*∞, and ∞/∞.
	*/
}

/*
void A5(){
	printf("-------------------A5----------------------\n");
	printf("%d\n%lf\n", 1/0, 1/0);
}
*/

void B1(){
	int a1, a2, b1, b2, c1, c2, d1, d2;
	scanf("%d%d", &a1, &a2);
	printf("%d %d", a1, a2);
	/*
	scanf("%d%d", &b1, &b2);
	printf("%d %d", b1, b2);
	
	scanf("%d%d", &c1, &c2);
	printf("%d %d", c1, c2);
	
	scanf("%d%d", &d1, &d2);
	printf("%d %d", d1, d2);
	*/
	// 总结 空格 水平制表tab 回车对scanf无影响，其会自动过滤
	// 当输入字符s,在输入回车，scanf停止。所以要验证输入？抛出异常？
}

void C1(){
	printf("%d\n\n\n%d\n", 1+2, 3+4); // printf输出两个空行要3个\n，第一个是从%d跳到第二行
	printf("%%d\n"); // printf 输出% 前边加%
	printf("\\n");
}

void D1(){
	int i=0;
	while(i>0){
		i++;
	}
	printf("%d", --i);
}













