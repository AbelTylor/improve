#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�ṹ�壺
//struct Stu 
//{ char name[20];
//  int age;
//  char num[20]; };
//int main()
//{
//    struct Stu s1 = { "����",22,"190320006"};
//   /* printf("%d\n", s1.age);
//    printf("%s\n", s1.name);
//    printf("%s\n", s1.num);*/
//    //�ṹ��.��Ա��
//    struct Stu* ps = &s1;
//    printf("%s\n", (*ps).name);
//    printf("%s\n", ps->num);
//    //��߽ṹ��ָ��.��Ա��
//    return 0;
//}
// װ�ƹػ�����
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	again:
//	printf("��ĵ��Խ���һ����֮�ڹػ��������룺����������ȡ���ػ�");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//	{
//	system("shutdown -a");
//	}
//	else 
//	{
//		printf("�ٸ���һ�λ���");
//		goto again;
//	}
//	return 0;
//}
//ð������
//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 0; j <sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//		    }
//			
//		}if (flag == 1)
//			break;
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,10,6,5,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	int i = 0;
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}