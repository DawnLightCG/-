// 统计 stat

#include<stdio.h>
#include<time.h>

void freopenMethod();
void fopenMethod();

int main(){
	
	freopenMethod();
	fopenMethod();
	
	return 0;
}

void freopenMethod(){
	freopen("data1.in", "r", stdin);
	freopen("data1.out", "w", stdout);
	int a[100000];  // 当给它分配过大空间，会报错Program received signal SIGSEGV, Segmentation fault.__chkstk_ms () at ../../../
	int n,m;
	int count;
	while(scanf("%d", &n)==1){
		count = 0;
		for(int i=0; i<n; i++){
			scanf("%d", &a[i]);
		}
		scanf("%d", &m);
		for(int i=0; i<n;i++){
			if(a[i]<m) count++;
		}
		printf("%d\n", count);
		printf("%.15lf\n", (double)clock()/CLOCKS_PER_SEC);
	}
}

void fopenMethod(){
	FILE *fin, *fout;
	fin = fopen("data1.in", "rb");
	fout = fopen("data2.out", "wb");
	
	int a[100000];
	int n,m;
	int count;
	while(fscanf(fin, "%d", &n)==1){
		count = 0;
		for(int i=0; i<n; i++){
			fscanf(fin, "%d", &a[i]);
		}
		fscanf(fin, "%d", &m);
		for(int i=0; i<n;i++){
			if(a[i]<m) count++;
		}
		fprintf(fout, "%d\n", count);
		fprintf(fout, "%.15lf\n", (double)clock()/CLOCKS_PER_SEC);
	}
	
	fclose(fin);
	fclose(fout);
}






