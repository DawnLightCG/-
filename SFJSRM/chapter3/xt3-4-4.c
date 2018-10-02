// xt 3-4-4 重新实现库函数

#include<stdio.h>
#include<string.h>
#define MAXN 20
char s[MAXN];
char w[5000];

int getint1();
int getint2();
void getint3();



int main(){
	int n;
	
	n = getint1();	
	printf("%d\n", n);
	
	n = getint2();	
	printf("%d\n", n);
	
	getint3();	

	
	return 0;
}

int getint1(){
	int n=0;
	char c;
	for(c=getchar(); c!=EOF && c!='\n';c=getchar()){
		n*=10;
		n+=(int)(c-'0');
	}	
	return n;
}

int getint2(){
	int n;
	int m=0;
	fgets(s,sizeof(s),stdin);
	n=strlen(s); //strlen 包括'\0',之前的数字，但别忘了fgets，遇到\n会读取\n,然后才终止。
	//printf("%d\n", n);
	for(int i=0;i<n-1;i++){  //减去'\n'
		m*=10;
		//printf("%d ", s[i]-'0');
		m+=(int)(s[i]-'0');
	}
	return m;
}

void getint3(){
	int n=0;
	for(char c = getchar(); c!=EOF && c!='\n';c=getchar()){
		s[n++]=c;
	}
	s[n]='\n';
	
	int m=0;
	while(s[m]!='\n'){
		printf("%c", s[m]);
		m++;
	}
	printf("%c", s[m]);
}


















