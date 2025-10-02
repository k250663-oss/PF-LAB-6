#include<stdio.h>
int main(){

int num , first , last;

printf("Enter a num: ");
scanf("%d", &num);

last = num %10;
first = num;
for(;first >=10 ; first/=10){
}


printf("sum of first and last is:%d\n", first + last);

}



