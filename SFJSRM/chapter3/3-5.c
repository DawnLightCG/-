// 3-5 最长回文子串

#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define MAXN 5000+10
char buff[MAXN],s[MAXN];
char p[MAXN];


int main(){
	int buffLen, sLen=0;
	int max=0;
	int px,py;
	
	fgets(buff, sizeof(buff),stdin);
	buffLen = strlen(buff);
	
	for(int i=0; i<buffLen; i++){		//字符串处理，过滤空格，标点，将小写字母转化为大写字母。
		if(isalpha(buff[i])){
			p[sLen]=i;                          //p[sLen] 保存 s[sLen],在buff[]中的索引
			s[sLen++]=toupper(buff[i]);
		}
	}
	
	for(int i=0; i<sLen; i++){
		for(int j=i; j<sLen;j++){
			int sign = 1;
			for(int k=i;k<j; k++){    // i->j是当前被检测子串
				if(s[k]!=s[i+j-k]){   // -k，也就是-i，从两端开始一一对比。
					sign = 0;
					break;
				}
			}
			if(sign && j-i+1>max){
				px=p[i]; py=p[j];
				max=j-i+1;				
			}
		}
	}
	
	for(int i=px;i<=py;i++){
		printf("%c", buff[i]);
	}
	printf("\n");
	
	return 0;
}