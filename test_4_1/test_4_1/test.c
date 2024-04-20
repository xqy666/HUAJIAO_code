#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//无论int，char等那么多类型都是为了更加丰富的表达生活中的值
//int main()
//{
//	printf("比特\n");
//	printf("%d\n",100);//以整数形式打印
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(int));  //sizeof就是计算类型或者变量所占空间大小
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}
//int main()
//{
//	int age = 20;
//	double weight = 89.5;
//	age = age+1;
//	weight = weight-10;
//	printf("%d\n", age);
//	printf("%lf\n", weight);
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d %d", &a, &b);//这里是输入两个数，然后把a,b的值放进去
//	sum = a + b;
//	printf("sum = %d\n", sum);
//	return 0;
//}
//
//int main()
//{
//	char arr1[] = "fighting";//内含有/0结尾
//	char arr2[] = {'f','i','g','h','t','i','n','g','\0'};//不含/0打印出来会乱码
//
//	
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//int main()
//{
//	printf("%c\n", '\'');//输出一个字符
//	printf("%s\n", "abc\\cv");//输出一个字符串
//	printf("%c\n", '\101');//像这种\ddd形式的是八进制
//	printf("%c\n", '\x30');//像这种\xdd形式的是十六进制
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	printf("你要好好学c语言吗?\n请输出你的选择（1 / 0）?");
//	scanf("%d",&input);
//	if (input=0)
//		printf("卖红薯\n");
//
//	else
//		printf("拿到好offer\n");
//	return 0;
//}
//int main()
//{
//	int codeline = 0;
//	while (codeline < 3000)
//	{
//
//		printf("代码行数:%d\n", codeline);
//
//		codeline++;
//	}
//	if (codeline == 3000)
//	   printf("拿到好offer\n");
//	return 0;
//}
//开始引入函数
//int add(int x,int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d",&num1,&num2);
//	int sum = add (num1, num2);
//	printf("%d\n",sum);
//}

//int main()
//{
//	int arr[10] = {0};
//	printf("%d\n", sizeof(arr));//数组元素的大小
//	printf("%d\n", sizeof(arr[0]));//数组每个元素的大小
//	int sz = sizeof(arr)/ sizeof(arr[0]); //求数组元素个数的方法
//	printf("%d\n", sz);
//}
//int main()
//{
//	//int a = 10;
//	//int b = ++a;//先＋＋后使用
//	//printf("%d\n", b);//数组元素的大小11
//	//printf("%d\n", a);//数组每个元素的大小11
//
//	int a = 10;
//	int b = a++;//先使用后＋＋
//	printf("%d\n", b);//数组元素的大小 10
//	printf("%d\n", a);//数组每个元素的大小11
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 4;//先使用后＋＋
//	int c = a && b;
//	printf("%d\n", c);
//	return 0;
//}
int main()
{
	int a = 0;
	int b = 3;
	int c = 9;
	int max = 0;
	int d = (a = b + 2, c = a - 4, b = c + 2);//逗号表达式，是从左向右依次计算的，整个表达式的结果是最后一个表达式的结果
	printf("%d\n", d);
	max = a > b ? a : b;//三目操作符 a>b为真，结果max=a;a>b为假，结果max=b
	printf("%d\n", max);
	return 0;
}