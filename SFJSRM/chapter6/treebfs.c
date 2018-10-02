// 层次遍历

#include<stdio.h>
#include<string.h>

#define MAXN 100;

// 结点类型
typedef struct Tnode{
	int have_value; 	// 是否被赋值过
	int v; 		// 结点值
	struct Tnode *left, *right;
}Node;

char s[MAXN+10];
int read_input(){
	for(;;){
		if(scanf("%s", s)!=1) 
		if(strcmp(s,"()")==0) break;; // 1 <2,返回负值，1=2返回0；1>2返回正值
		int v;
		sscanf(&s[1], "%d", &v);
		addnode(v,strchar(s,',')+1);
	}
	
	return 1;
	
}

int main(){
	return 0;
}



