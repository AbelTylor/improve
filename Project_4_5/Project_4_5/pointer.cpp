#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//�۲���������Ľ��
//int main() 
//{
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));//16
//	printf("%d\n", sizeof(a + 0));//8
//	printf("%d\n", sizeof(*a));//4
//	printf("%d\n", sizeof(a + 1));//8
//	printf("%d\n", sizeof(a[1]));//4,a[1]=*(a+1)
//	printf("%d\n", sizeof(&a));//8
//	printf("%d\n", sizeof(*&a));//16
//	printf("%d\n", sizeof(&a + 1));//8
//	printf("%d\n", sizeof(&a[0]));//8
//	printf("%d\n", sizeof(&a[0] + 1));//8
//	return 0;
//}

//
//�ַ�����
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));//6
	//printf("%d\n", sizeof(arr + 0));//8
	//printf("%d\n", sizeof(*arr));//1
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));//8
	//printf("%d\n", sizeof(&arr + 1));//8
	//printf("%d\n", sizeof(&arr[0] + 1));//8
	//printf("%d\n", strlen(arr));//���ֵ
	//printf("%d\n", strlen(arr + 0));//���ֵ
	//printf("%d\n", strlen(*arr));//�Ƿ�����
	//printf("%d\n", strlen(arr[1]));//�Ƿ�����
	//printf("%d\n", strlen(&arr));//���ֵ
	//printf("%d\n", strlen(&arr + 1));//���ֵ-6
	//printf("%d\n", strlen(&arr[0] + 1));//���ֵ-1
	//return 0;
//}
//
//
//
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));//7
//	printf("%d\n", sizeof(arr + 0));//8
//	printf("%d\n", sizeof(*arr));//1
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//8
//	printf("%d\n", sizeof(&arr + 1));//8
//	printf("%d\n", sizeof(&arr[0] + 1));//8
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr + 0));//6
//	//printf("%d\n", strlen(*arr));//�Ƿ�����
//	//printf("%d\n", strlen(arr[1]));//�Ƿ�����
//	//printf("%d\n", strlen(&arr));//6
//	//printf("%d\n", strlen(&arr + 1));//���ֵ
//	printf("%d\n", strlen(&arr[0] + 1));//5
//	return 0;
//}

//int main()
//{
//	const char *p = "abcdef";		
//	printf("%d\n", sizeof(p));//8
//	printf("%d\n", sizeof(p + 1));//8
//	printf("%d\n", sizeof(*p));//1
//	printf("%d\n", sizeof(p[0]));//1,p[0]=*(p+0)
//	printf("%d\n", sizeof(&p));//8
//	printf("%d\n", sizeof(&p + 1));//8
//	printf("%d\n", sizeof(&p[0] + 1));//8
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1));//5
//	//printf("%d\n", strlen(*p));//�Ƿ�����
//	//printf("%d\n", strlen(p[0]));//�Ƿ�����
//	printf("%d\n", strlen( (const char*)&p));//���ֵ
//	printf("%d\n", strlen((const char*)&p + 1));//���ֵ
//	printf("%d\n", strlen(&p[0] + 1));//5
//	return 0;
//}


// int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//16,���԰�a[0]���ɵ�һ�е�һά�����������
//	printf("%d\n", sizeof(a[0] + 1));//a[0]���ڱ��ʽ��ȥ�ˣ����Կ������Ϊһά����a[0]����Ԫ�ص�ַ,8
//	printf("%d \n", sizeof(*(a[0] + 1)));//4
//	printf("%d \n", sizeof(a + 1));//8
//	printf("%d\n", sizeof(*(a + 1)));//16
//	printf("%d \n", sizeof(&a[0] + 1));//8
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16
//	printf("%d \n", sizeof(*a));//16
//	printf("%d\n", sizeof(a[3]));//sizeof�����������������ı��ʽ������ȥ����,�ȼ���sizeof(a[0]),16
//	return 0;
//}

//�۲���������Ľ��
//struct Test {
//	int Num;
//	char* pcName; 
//	short sDate; 
//	char cha[2]; 
//	short sBa[4];
//}*p;
 //����p��ֵΪ0x100000�����±���ʽ��ֵ�ֱ�Ϊ���� ?
//��֪���ṹ��Test���͵ı�����С��20���ֽ�
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);//0x100014
//	printf("%p\n", (unsigned long)p + 0x1); //0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);//0x100004
//	return 0;
//}

//�۲���������Ľ��
//int main() 
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1); 
//	int* ptr2 = (int*)((int)a + 1); 
//	printf("%x,%x", ptr1[-1], * ptr2); //ptr1[-1]=*(ptr-1)
//	return 0;
//}//0x00000004, 0x02000000 


//�۲�����Ľ��
//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) }; //�����������Բ���ţ������Ƕ��ű��ʽ����ʼ��Ϊ1��3��5��0...
//	int* p;
//	p = a[0];
//	printf("%d\n", p[0]);
//	return 0; 
//}//1

//�۲�����Ľ��
//int main()
//{
//	int a[5][5];
//	int(*p)[4];//a������ int(*)[5],p��������int(*)[4]d
//	p = (int(*)[4])a;//��һ�еĵ�ַ����p
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//1111 1111 1111 1111 1111 1100
//																//	F   F     F    F    F   C
//	return 0;
//}