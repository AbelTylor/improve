#define  _CRT_SECURE_NO_WARNINGS 1
//������ָ���ӡ��ά���飨1��
#include<stdio.h>
//void print(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			//printf("%d ", *(*(p+i)+j));
//			//printf("%d ",p[i][j]);
//			//printf("%d ", *(p[i] + j));
//			printf("%d ", (*(p+i))[j]);
//		}
//		printf("\n");
//	}
//
//
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print(arr,3,5);
//
//	return 0;
//}

//int arr[5]			 arr��һ����5������Ԫ�ص�����
//int *parr1[10]		 parr1��һ�����飬������10��Ԫ�أ�ÿ��Ԫ�ض���int *����
//int(*parr2)[10]		 parr2��һ������ָ�룬ָ���������10��Ԫ�أ�ÿ��Ԫ�ض���һ������
//int(*parr3[10])[5]	 parr��һ�����飬����10��Ԫ�أ��������ÿ��Ԫ�ض���һ������ָ�룬ÿһ��
//					     ����ָ��ָ��Ķ�����5��Ԫ�ص�ָ��


/*�����������д������˼��2��
(*(void(*)())0)();    void(*)()�Ǻ���ָ�����ͣ���0ǿ������ת����һ���������ٽ�����0�����ַ���ú���
void (*signal(int,void(*)(int)))(int)   signal()�Ǹ��������ã�������������һ����int,һ����void(*)(int)������
ָ������
�����ķ���������void(*)(int)����һ������ָ��
*/
//дһ������ָ������飬ʵ��һ����������3��
//void menu()
//{
//	printf("**************************************\n");
//	printf("*****1.add  ******** 2.sub ***********\n");
//	printf("*****3.mult ******** 4.div ************\n");
//	printf("************* 0.exit ******************\n");
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mult(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int xo (int x, int y)
//{
//	return x ^ y;
//}
//int main()
//{
//	int input = 0;
//	do 
//	{
//		
//		int x = 0;
//		int y = 0;
//		menu();
//		printf("��ѡ��:->");
//		scanf("%d", &input);
//		printf("����������������\n");
//		scanf("%d%d", &x, &y);
//		int (*cacl[4])(int, int) = { add,sub,mult,div };
//		switch(input)
//		{
//		case 1:
//			printf("%d\n", add(x, y));
//			break;
//		case 2:
//			printf("%d\n", sub(x, y));
//			break;
//		case 3:
//			printf("%d\n", mult(x, y));
//			break;
//		case 4:
//			printf("%d\n",div(x, y));
//			break;
//		case 0:
//			printf("�˳�\n");
//		default:
//			printf("�������\n");
//		}
//	} while (input);
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	int (*calc[6])(int, int) = { 0,add,sub,mult,div,xo };
//
//	do {
//		menu();
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("����������������\n");
//			int x = 0;
//			int y = 0;
//			scanf("%d%d", &x, &y);
//			printf("%d\n",calc[input](x, y));
//		}
//		else if (input == 0)
//		{
//			printf("�˳�");
//		}
//		else
//		{
//			printf("ѡ�����");
//		}
//
//	} while (input);
//
//	return 0;
//}

//��qsort����ʵ���������飬���������飬�ṹ�����������4��
#include<stdlib.h>
#include<string.h>
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;

}
int cmp_float(const void* e1, const void* e2)
{

	return (int)(*(float*)e1 - *(float*)e2);
}

struct stu
{
	char name[20];
	int age;
};
int cmp_struct_byname(const void* e1, const void* e2)
{
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);

}
//int main()
//{
//	int arr[] = { 1,4,5,6,7,8,9,2,3 };
//	float f[] = { 1.0,2.0,3.0,5.0,6.0,8.0,9.0,4.0,7.0 };
//struct stu s[] = { {"zhangsan",10},{"lisi",30},{"wangwu",20} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int fz = sizeof(f) / sizeof(f[0]);
//	int zs = sizeof(s) / sizeof(s[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	qsort(f, fz, sizeof(f[0]), cmp_float);
//	qsort(s, zs, sizeof(s[0]), cmp_struct_byname);
//	int i = 0;
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	int j = 0;
//	for (j = 0; j < fz; j++)
//	{
//		printf("%f ", f[j]);
//	}	
//	return 0;
//}
//����qsort������ʵ���Լ�����������5��
void swap(char* e1, char* e2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *e2;
		*e2 = *e1;
		*e1 = tmp;
		e1++;
		e2++;
	}



}
void bubble_sort(const void* base, int sz, int width, int(*cmp)(const void*, const void*))
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*) base + j * width, (char*) base + (j + 1) * width) > 0)
			{
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
			

		}
	}


}
//struct stu
//	{
//		char name[20];
//		int age;
//	};
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1 };
	float f[] = {9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0};
	struct stu s[] = { {"zhangsan",10},{"lisi",30},{"wangwu",20} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int fz = sizeof(f) / sizeof(f[0]);
	int zs = sizeof(s) / sizeof(s[0]);
	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
	bubble_sort(f, fz, sizeof(f[0]), cmp_float);
	bubble_sort(s, zs, sizeof(s[0]), cmp_struct_byname);
	return 0;
}
