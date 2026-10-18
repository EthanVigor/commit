# include <stdio.h>

void swap(int x,int y){
	int t= x;
	x = y;
	y = t;
	printf ("º¯ÊıÄÚ:x =%d y =%d",x,y);
}
int main(){
	int a = 1,b = 2;
	swap(a,b);
	printf("%d %d\n",a,b);
	return 0;
}
