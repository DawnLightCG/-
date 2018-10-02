//CPP-CPP iostream && fstream

// 1. gcc用于编译运行c语言， g++用于编译运行c++语言

// #include<iostream>
// using namespace std;

// int main(){
	// int n;
	// cin >> n;
	// cout << n << endl;
	
	// return 0;
// }



//C++ 文件输入输出
//多行缩进 tab 和 shift+tab

#include<fstream>
using namespace std;

// 这两句话必须放在函数体外，不然会报错无法定位。
ifstream fin("data.in");
ofstream fout("data.out");
	
int main(){
	// ifstream fin("data.in");     // 放在main函数中不可以
	// ofstream fout("data.out");
	
	int a,b;
	fin >> a >>b;
	fout << a+b;
	return 0;
}