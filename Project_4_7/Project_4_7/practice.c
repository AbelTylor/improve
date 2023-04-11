#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int	aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa+1);
//	int* ptr2= (int*)(*(aa+1));
//	printf("%d,%d", *(ptr1-1), *(ptr2-1));//10,5
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}//a数组有三个元素，每个元素都是char*类型，存放的是每个常量字符串首元素的地址，
//char**pa,表示pa是个指针，指向的是char*类型,指向a数组首元素的地址，pa++指向的是“at”字符串的a


//#include <stdio.h>
//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s \n", **++cpp);//POINT
//	printf("%s \n", *-- * ++cpp + 3);
//	printf("%s \n", *cpp[-2] + 3);
//	printf("%s \n", cpp[-1][-1] + 1);
//	return 0;
//}