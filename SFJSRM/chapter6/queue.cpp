// 队列queue

#include<cstdio>
#include<queue>

using namespace std;

queue<int> a;

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		a.push(i);
	}
	while(!a.empty()){
		printf("%d\n", a.front());
		a.pop();
	}
	
	return 0;
}