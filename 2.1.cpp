#include <stdio.h>
int main () {
	int a,b,c,d,max,max2;
	scanf ("%d %d %d %d",&a,&b,&c,&d);
	a > b ? max = a : max = b;
	max > c ? max = max : max = c;
	max > d ? max = max : max = d;
	a >= max ? max = a : max2 = a;
	b >= max ? max = b : b > max2 ? max2 = b : max2 = max2;
	c >= max ? max = c : c > max2 ? max2 = c : max2 = max2;
	d >= max ? max = d : d > max2 ? max2 = d : max2 = max2;
	printf ("%d",max2);
}
