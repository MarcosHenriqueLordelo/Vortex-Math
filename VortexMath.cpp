#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int sumDigits(int num);
void recursive(int i);

int main(){
	int startNumber = 1;
	int numberOfRepetitions = 31;
	
	for(int i = 0; i < numberOfRepetitions; i++){
		recursive(startNumber);
		startNumber = startNumber * 2;
	}
	return 0;
}

int sumDigits(int num){
	int sum, aux;
	sum=0;
	aux = num;
	
	while(aux>0){
		sum+=aux%10;
		aux/=10;
	}
	return sum;
}

void recursive(int i){
	int sum;	
	
	sum = sumDigits(i);
	
	if(sum < 10){
		printf("%d | ", sum);
	}else{
		recursive(sum);
	}
}
