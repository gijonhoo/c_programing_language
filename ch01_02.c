#include <stdio.h>

main(){
	
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 100;
	upper = 300;
	step = 20;
	
	fahr = lower;
	while(fahr <= upper){
		celsius = 5 * (fahr-32) / 9;
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr += step;
	}
	
} 
