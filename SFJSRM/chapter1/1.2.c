#include<stdio.h>
#include<math.h>

int main(){
	const double pi = 4.0 * atan(1.0); //atan()是反正切函数，正切函数tan(1)=π/4,所以pi=4.0*atan(1.0)=3.14159......
	double r, h, s1, s2, s;
	
	scanf("%lf%lf", &r, &h);
	s1 = pi*r*r;
	s2 = 2*pi*r*h;
	s = s1*2+s2;
	printf("%lf\n", pi);
	printf("Area = %.3lf\n", s);
	
	return 0;
}