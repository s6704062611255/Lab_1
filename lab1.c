#include <stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	printf("a = %d",a);
	int b;
	scanf("%d",&b);
	printf("b = %d \n",b);
	if (a>b){
		printf("a is greater than b \n");
		printf("diff is %d \n",a-b);
	} else{
		printf("b is greter than a \n");
		printf("diff is %d ",b-a);
	}
		return 0;
		
}
