#include <stdio.h>

main(){
	printf("�H  to  ��\n\n"); 
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 100;
	upper = 300;
	step = 20;
	
	fahr = lower;
	while(fahr <= upper){
		celsius = 5 * (fahr-32) / 9;
		printf("%3.0f %6.1f\n", fahr, celsius); 
//		%3.0f -> ����ӡ����������ռ3���ַ����Ҳ���С�����С������ ��
//		%6.1f ->  ����ӡ����������ռ6���ַ�����С�������1λ���� ��
		fahr += step;
	}
	
	printf("\n\n\n\n\n\n");
	printf("��  to  �H\n"); 
	fahr = lower;
	while(fahr <= upper){
		celsius = fahr * 9 / 5 + 32;
		printf("%3.0f %6.1f\n", fahr, celsius); 
		fahr += step;
	}
	
	
} 
