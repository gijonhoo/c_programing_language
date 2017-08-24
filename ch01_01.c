#include <stdio.h> //包含标准输入输出库的信息 

main(){  //  main函数 
	printf("hello world\n\c\n\n");  // 双引号中的内容 -> 字符串(字符串常量）   \n 换行符(转移字符序列) \c 输出普通字符 
	
	/* 注释 
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
