#define  _CRT_SECURE_NO_WARNINGS 1
//�˽�strerror��������;
#include<stdio.h>
#include<string.h>
//int main()
//{
//	printf("%s\n", strerror(1));
//	printf("%s\n", strerror(2));
//	printf("%s\n", strerror(3));
//	printf("%s\n", strerror(4));
//	printf("%s\n", strerror(5));
//
//	return 0;
//}


//�˽�memcpy��������;����ģ��ʵ��memcpy����
//void* my_memcpy(void *dest,const void* src,size_t count)
//{
//	char* ret = dest;
//	while (count--) 
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//
//}
 /*struct stu
 {
 char name[20];
 char tele[15];
 };*/
//int main()
//{
//	/*int arr1[] = { 1,2,3,4,5,6,7,8,9 };
//	int arr2[10] = { 0 };*/
//	struct stu s1 = { "zhangsan","12345" };
//	struct stu s2 = { "lisi","67890" };
//	my_memcpy(&s2,&s1 , sizeof(s1));
//	return 0;
//}


//memmove�����ڴ��ص������
//void* my_memmove(void* dest,void* src,size_t count)
//{
//	void* ret = dest;
//	if (dest < src)
//	{
//	//ǰ->��
//		while (count--)
//				{
//					*(char*)dest = *(char*)src;
//					++(char*)dest;
//					++(char*)src;
//				}
//	}
//	else
//	{
//		//��->ǰ
//		while (count--)
//		{
//			*((char*)dest + count )= *((char*)src + count);
//
//		}
//
//	}
//	return ret;
//}
//int main()
//{
//	int a[] = { 1,2,3,4,5,6,7,8,9 };
//	my_memmove(a, a + 2, 20);
//	return 0;
//}

//�˽�memcmp��������;
//int main()
//{
//	int s1[] = { 1,2,3,6,5,6 };
//	int s2[] = { 1,2,3,5,7,8 };
//	int ret=memcmp(s1, s2, 13);
//	printf("%d", ret);
//	return 0;
//}
//�˽�memset�ڴ����ú�������;
//int main()
//{
//
//	char a[10] = { 0 };
//	memset(a, '*', 5);
//	return 0;
//}