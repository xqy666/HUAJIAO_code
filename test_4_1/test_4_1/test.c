#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//����int��char����ô�����Ͷ���Ϊ�˸��ӷḻ�ı�������е�ֵ
//int main()
//{
//	printf("����\n");
//	printf("%d\n",100);//��������ʽ��ӡ
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(int));  //sizeof���Ǽ������ͻ��߱�����ռ�ռ��С
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
//	scanf("%d %d", &a, &b);//������������������Ȼ���a,b��ֵ�Ž�ȥ
//	sum = a + b;
//	printf("sum = %d\n", sum);
//	return 0;
//}
//
//int main()
//{
//	char arr1[] = "fighting";//�ں���/0��β
//	char arr2[] = {'f','i','g','h','t','i','n','g','\0'};//����/0��ӡ����������
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
//	printf("%c\n", '\'');//���һ���ַ�
//	printf("%s\n", "abc\\cv");//���һ���ַ���
//	printf("%c\n", '\101');//������\ddd��ʽ���ǰ˽���
//	printf("%c\n", '\x30');//������\xdd��ʽ����ʮ������
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	printf("��Ҫ�ú�ѧc������?\n��������ѡ��1 / 0��?");
//	scanf("%d",&input);
//	if (input=0)
//		printf("������\n");
//
//	else
//		printf("�õ���offer\n");
//	return 0;
//}
//int main()
//{
//	int codeline = 0;
//	while (codeline < 3000)
//	{
//
//		printf("��������:%d\n", codeline);
//
//		codeline++;
//	}
//	if (codeline == 3000)
//	   printf("�õ���offer\n");
//	return 0;
//}
//��ʼ���뺯��
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
//	printf("%d\n", sizeof(arr));//����Ԫ�صĴ�С
//	printf("%d\n", sizeof(arr[0]));//����ÿ��Ԫ�صĴ�С
//	int sz = sizeof(arr)/ sizeof(arr[0]); //������Ԫ�ظ����ķ���
//	printf("%d\n", sz);
//}
//int main()
//{
//	//int a = 10;
//	//int b = ++a;//�ȣ�����ʹ��
//	//printf("%d\n", b);//����Ԫ�صĴ�С11
//	//printf("%d\n", a);//����ÿ��Ԫ�صĴ�С11
//
//	int a = 10;
//	int b = a++;//��ʹ�ú󣫣�
//	printf("%d\n", b);//����Ԫ�صĴ�С 10
//	printf("%d\n", a);//����ÿ��Ԫ�صĴ�С11
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 4;//��ʹ�ú󣫣�
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
	int d = (a = b + 2, c = a - 4, b = c + 2);//���ű��ʽ���Ǵ����������μ���ģ��������ʽ�Ľ�������һ�����ʽ�Ľ��
	printf("%d\n", d);
	max = a > b ? a : b;//��Ŀ������ a>bΪ�棬���max=a;a>bΪ�٣����max=b
	printf("%d\n", max);
	return 0;
}