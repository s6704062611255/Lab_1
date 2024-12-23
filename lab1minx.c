#include <stdio.h>
int main(){

int n1 ;
int n2 ;
scanf("%d %d",&n1 ,&n2);
if (n1>n2){
	printf("n1 is greater than n2 \n");
	printf("diff n1>n2 = %d \n",(n1-n2));
} 
else {
	printf("n2 is greater than n1 \n");
	printf("diff n2 > n1 = %d \n",(n2-n1));	
}
return 0;
}
