#include<stdio.h>
int main(){
	int n , i;
	printf("enter value of n:");
	scanf("%d" ,&n);
	
	for ( i = n; i >= 1; i--){
		printf("%d" , i);
	}
}
