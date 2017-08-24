#include <stdio.h>

main(){
	printf("℉  to  ℃\n\n"); 
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 100;
	upper = 300;
	step = 20;
	
	fahr = lower;
	while(fahr <= upper){
		celsius = 5 * (fahr-32) / 9;
		printf("%3.0f %6.1f\n", fahr, celsius); 
//		%3.0f -> 待打印浮点数至少占3个字符宽，且不带小数点和小数部分 ；
//		%6.1f ->  待打印浮点数至少占6个字符宽，且小数点后有1位数字 ；
		fahr += step;
	}
	
	printf("\n\n\n\n\n\n");
	printf("℃  to  ℉\n"); 
	fahr = lower;
	while(fahr <= upper){
		celsius = fahr * 9 / 5 + 32;
		printf("%3.0f %6.1f\n", fahr, celsius); 
		fahr += step;
	}
	
	
} 
