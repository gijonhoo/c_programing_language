#include <stdio.h> //������׼������������Ϣ 

main(){  //  main���� 
	printf("hello world\n\c\n\n");  // ˫�����е����� -> �ַ���(�ַ���������   \n ���з�(ת���ַ�����) \c �����ͨ�ַ� 
	
	/* ע�� 
	*/ 
	int fahr, celsius;
	int lower, upper, step;
	
	lower = 100;
	upper = 300;
	step = 20;
	
	fahr = lower;
	while(fahr <= upper){
		celsius = 5 * (fahr-32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr += step;
	}
	
} 
