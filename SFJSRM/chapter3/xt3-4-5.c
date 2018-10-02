// xt3-4-5 字符串处理的常见问题

#include<stdio.h>
#include<string.h>
#include<math.h>

//#define MAXN (int)pow(10,7)  //pow返回类型为double，注意类型转换
// C99 不可以用运行时得到的整数值给数值定大小,在编译时期，数组大小就定了
#define MAXN 10000000
char a[MAXN];

int main(){
	//fgets(a,MAXN,stdin);
	// while(getchar()!=EOF){   // 1' ',读取' ';1'\n',读取'\n'
		// printf("%c", getchar());
	// }
	
	
	char m[]={"12:34:78"};
	int HH,MM,SS;
	sscanf(m,"%d:%d:%d", &HH,&MM,&SS);

	printf("%d %d %d\n", HH,MM,SS);
	
	return 0;
}