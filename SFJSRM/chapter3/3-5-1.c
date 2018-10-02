//3-5-1 最长回文子串 3-5 采用最多3层循环解决问题，通过从中间往外扩展的方法，可以有效减少循环层

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAXN = 5000+10
char buff[MAXN], s[MAXN];
char p[MAXN];


int main(){
	
	int buffn, sn=0;
	int max=0;
	int px,py;
	fgets(buff, sizeof(buff), stdin);
	buffn = strlen(buff);
	
	for(int i=0;i<buffn;i++){
		if(isalpha(buff[i])){
			p[sn] = i;
			s[sn++] = toupper(buff[i]);
		}		
	}
	
	for(int i=0; i<sn; i++){
		for(int j=0; i-j>=0 && i+j<m; j++){
			if(s[i-j]!=s[i+j]) break;
			if(2*j+1 > max){
				max = 2*j+1;
				px=p[i-j]; py=p[i+j];
			}
		}
	}
	
	for(int i=0;i<sn; i++){
		for(int j=0; i-j>=0 && i+j+1<m;j++){
			if(s[i-j]!s[i+1+j]) break;
			if(2*j+2>max){
				max=2*j+2;
				px=[i-j]; py=[i+1+j];
			}
		}
	}
	
	for(int i=px; i<=py; i++){
		printf("%c",buff[i]);
	}
	printf("\n");
	
	return 0;
	
}