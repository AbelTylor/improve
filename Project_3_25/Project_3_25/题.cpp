#define  _CRT_SECURE_NO_WARNINGS 1
////编程题1:统计二进制中（补码）1的个数，法1:转无符号数计数器 法2：按位与 法3：n与n-1按位与
#include<stdio.h>
////int count_one_bit(unsigned int x)
////{
////	int count = 0;
////	while (x)
////	{
////		if (x % 2 == 1)
////		{
////			count++;
////		}
////		x = x / 2;
////
////	}
////	return count;
////}
////int count_one_bit(int x)
////{
////	int count = 0;
////	for(int i=0;i<32;i++)//11111111111111111111111111111111
////	{
////		if (((x>>i) & 1) == 1)
////		{
////			count++;
////		}
////	}
////	return count;
////}
//int count_one_bit(int x)
//{
//	int count = 0;
////	1011  11
////&	1010  10
////	1010  10
////&	1001  9
////	1000  8
////&	0111  7
////	0000
//	while (x)
//	{
//		x=x& (x - 1);
//		count++;
//	}
//	return count;
//}
////
////int main()
////{
////	int a = 0;
////	scanf("%d", &a);
////	int count=count_one_bit(a);
////	printf("1的个数=%d", count);
////	return 0;
////}
////int main()
////{
////	int count = 0;
////	int n = 0;
////	scanf("%d", &n);
////	//10 00000000000000000000000000001010
//////       00000000000000000000000000000001
////	return 0;
////}
//
////编程题2：求二进制中不同位的个数，法：按位异或
//int count_difference(int x, int y)
//{
//	int n = 0;
//	n = x ^ y;
//	int coun=count_one_bit(n);
//	return coun;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d",&a, &b);
//	int count=count_difference(a, b);
//	printf("相异%d",count);
//}
//
////编程题3：打印二进制的奇数位与偶数位
////void count_odd_even(int n)
////{
////	printf("奇数位\n");
////	for (int i = 30; i >= 0; i -= 2)
////	{
////		printf("%d ", (n >> i) & 1);
////	}
////		printf("\n");
////		printf("偶数位\n");
////		for (int i = 31; i >=1; i-= 2)
////		{
////				printf("%d ", (n >> i) & 1);
////		
////		}
////	
////}
////
////int main()
////{
////	int a = 0;
////	scanf("%d", &a);
////	count_odd_even(a);
////	return 0;
////}
////编程题4：交换两个变量(不允许创建临时变量)三次异或
////int main()
////{
////	int a = 11;//1011  0110  0110  1101
////	int b = 13;//1101  1101  1011  1011
////	a = a ^ b;
////	b = a ^ b;
////	a = a ^ b;
////	printf("%d %d",a, b);
////}
//
////编程题5：使用指针打印数组内容
////int main()
////{
////	int arr[] = { 1,2,3,4,5,6,7,8,9 };
////	int* p = arr;
////	int sz = sizeof(arr) / sizeof(arr[0]);
////	for (int i = 0; i < sz; i++)
////	{
////		printf("%d ", *(p + i));
////	}
////	return 0;
////}
////编程题6：实现一个函数，打印乘法口诀表，行数和列数由自己决定
//void print_excel(int n) 
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	
//	int n = 0;
//	scanf("%d", &n);
//	print_excel(n);
//	return 0;
//}
//编程题7：编写一个reverse_string函数实现字符串的字符反向排列，不能使用库函数1.普通方法 2.递归
//方法一，自定义my_strlen函数
//int my_strlen(char*str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char arr[])
//{
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//	int tmp = 0;
//	while (left < right)
//	{
//		tmp = arr[right];
//		arr[right] = arr[left];
//		arr[left] = tmp;
//		left++;
//		right--;
//
//	}
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//方法二，sizeof
//void reverse_string(char arr[],int sz)
//{
//	int left = 0;
//	int right = sz - 2;
//	int tmp = 0;
//	while (left < right)
//	{
//		tmp = arr[right];
//		arr[right] = arr[left];
//		arr[left] = tmp;
//		left++;
//		right--;
//
//	}
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse_string(arr,sz);
//	printf("%s\n", arr);
//	return 0;
//}
//方法三，递归
int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
void reverse_string(char *arr)
{
//先交换第一个和最后一个，再调用函数逆转剩下的
	char tmp = arr[0];
	int len = my_strlen(arr);
	arr[0] = arr[len - 1];
	arr[len - 1] = '\0';
	if (my_strlen(arr + 1) > 1)
	{
		reverse_string(arr + 1);
	}
	arr[len - 1] = tmp;

}
int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s", arr);

	return 0;
}



