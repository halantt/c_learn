#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//main是主函数
// 都是由main函数的第一行开始执行
// main函数是程序的入口
// 
//F10
//int main() 
//{
//	printf("hello c\n");
//	printf("hello c\n");
//	printf("hello c\n");
//	printf("hello c\n");
//	return 0;}
//int main()
//{
//	printf("hehe\n");//这里完成代码
//	return 0;
//}
//{}为函数体
//return 0 返回0 整型
// int integer整数
// main函数是程序入口有且只有一个，即使多个.c文件也只能有1个main函数
//代码使用英文符号



//main函数多种写法
//1.旧版写法
// void main()
// {}
// 2.void main(void)
// {}
// 3.int main（void)
// void表示不接受任何参数
// 4.int main(int argc,char*argv[],char*envp[])
// 只有你想使用main函数的参数的时候才这样写，每一个参数都有意义


//int main()
//{
//	printf("hehe\n");
//	printf("呵呵");
//	//return 0;
//}

//%d - 整型的打印
//int main()
//{
//	printf("hello world\n");//\n是换行
//	printf("%d\n", 100);
//	printf("%c\n", 'x');//单引号引起来的是字符
//	printf("%f\n", 3.14);
//	return 0;
//}
//键盘是输入 scanf
// 向屏幕打印信息 printf
// 求字符串长度 strlen
//char 字符
//short 短整型
// int 整型
// long 常整型
// float 单精度浮点数（小数）
// double 双精度浮点数（小数）

//int main()
//{
//	int i = 0;
//	for (i = 32; i <= 127; i++)
//	{
//		printf("%c", i);
//		if (i % 16 == 15)
//			printf("\n");
//	}
//	return 0;
//}
//int main() {
//	printf("%s\n", "abc\ndef");// n可以正常打出，在前面加\这变为转义字符
//	return 0;
//}
//int main()
//{
//	printf("(are you ok)");
//	return 0;
//}
//int main()
//{
//	printf("%c\n", '\132');//132这个8进制数字转化为10进制后的90，作为ASCII码值代表的字符
//	return 0;
//}