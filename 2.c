
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
	
	
	while(a >= b) {
        a -= b ;
        div++ ;
    }

    printf("multiply:%d\n", mul); 
    printf("divide:%d", div);   
    return 0; 
}

