// stack

#include<cstdio>
#include<stack>

using namespace std;

stack<int> a;

int main(){
	int n;

	scanf("%d", &n);
	
	for(int i=0;i<n;i++){
		a.push(i);
	}
	
	while(!a.empty()){
		printf("%d\n", a.top());
		a.pop();
	}
	
	return 0;
	
}