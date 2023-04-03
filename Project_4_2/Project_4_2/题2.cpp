#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//编程题8：写一个递归函数digitsum(n),输入一个非负整数，返回组成他的数字之和
//int digitsum( unsigned int n)
//{
//	int sum_2 = 0;
//	if (n > 9) 
//	{
//		sum_2=digitsum(n / 10) + n % 10;
//		return sum_2;
//	}
//	
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	unsigned int n = 0;
//	scanf("%d", &n);
//	int sum=digitsum(n);
//	printf("%d", sum);
//	return 0;
//}
//编程题9：递归实现n的k次方
//double pow(int n, int k)
//{
//	if (k > 0)
//	{
//		return pow(n, k - 1) * n;
//	}
//	else if (k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//	return (1.0/ pow(n, -k));
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n,&k);
//	double sqrt=pow(n,k);
//	printf("%lf", sqrt);
//	return 0;
//}

//编程题10：写一段代码告诉我们当前机器的字节序是什么
//int bite_xu(int n)
//{
//	char *p = (char *) & n;
//	return(*p);
//}
//int main()
//{
//	int n = 1;
//	int ret=bite_xu(n);
//	if (ret == 1)
//		printf("小端");
//	else
//		printf("大端");
//
//	return 0;
//}
//编程题11：实现自己的字符串拷贝函数 
//void my_strcpy(char* p1,  const char* p2)
//{
//	while (*p1++ = *p2++)
//	{
//		;
//		
//	}
//
//}
#include<assert.h>
char * my_strcpy(char* p1, const char* p2)
{
	assert(p1 != NULL);
	assert(p2!= NULL);
	char* ret = p1;
	while (*p2!='\0')
	{
		*p1=*p2;
		p1++;
		p2++;
	}
	*p1 = *p2;
	return ret;
}
int main()
{
	char arr1[] = "############";
	char arr2[] = "bit";
	my_strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}