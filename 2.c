#include<stdio.h>
int main(){
	int a ,b ,mul=0 , div=0 , i ;
	printf("enter first number :");
	scanf("%d" ,&a);
	printf("enter second number :");
	scanf("%d" ,&b);
	
	
	for( i = 0 ; i < b ; i++){
		mul += a;
	}
	int temp =a ;
	
	while(temp>= b)
{
	temp -= b ;
	div++ ;
}
	printf("%d\n", mul);
	printf("%f", div); 

}
