#include <stdio.h>
int main(){

int x = 1;
int y = 2;


if (x>y){
	printf("x is greater than y \n");
	printf("diff x>y = %d \n",(x-y));
} 
if (y>x){
	printf("y is greater than x \n");
	printf("diff y > x = %d \n",(y-x));	
}
return 0;
}
