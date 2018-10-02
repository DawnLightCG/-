//cppIO-c版
// c的标准输入输出流和文件输入输出,以及重定向版

// notepad 注释快捷键ctrl+k  ctrl+shift+k

// freopen 版
// 1. 调用freopen函数两次，3个参数，1文件，2模式，3输入输出流


// #include<stdio.h>

// #define local

// int main(){
	// #ifdef local 
		// freopen("data.in", "r", stdin);
		// freopen("data.out", "w", stdout);
	// #endif
	
	// int n;
	// while(scanf("%d", &n)==1){
		// printf("%d\n", n);
	// }
	
	// return 0;
// }


// fopen版
// 1. 两个文件指针
// 2. 用fopen函数给文件指针赋值，函数两个参数，1文件 2模式，3输入输出流
// 3. fscanf和fprintf，第一个参数是文件指针，其他一样
// 4. 调用fclose函数两次，关闭文件指针

// #include<stdio.h>

// int main(){
	// FILE *fin, *fout;
	// int n;
	
	// fin = fopen("data.in", "rb");
	// fout = fopen("data.out", "wb");
	
	// while(fscanf(fin,"%d",&n)==1){
		// fprintf(fout, "%d\n", n);
	// }
	
	// fclose(fin);
	// fclose(fout);
	
	
	// return 0;
// }







