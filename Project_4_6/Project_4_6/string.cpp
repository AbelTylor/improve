#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//模拟实现strcpy(1)

//char* my_strcpy(char *dest,const char *src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while ( *dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "###############";
//	char arr2[] = "hello";
//	printf("%s\n",my_strcpy(arr1, arr2));
//
//
//
//	return 0;
//}


//模拟实现strcmp(2)

//int my_strcmp(char* e1, char* e2)
//{
//	assert(e1 && e2);
//	while (*e1 == *e2)
//	{
//		if (*e1 == '\0')
//		{
//			return 0;
//
//		}
//		e1++;
//		e2++;
//	}
//	
//	return (*e1 - *e2);
//	 
//
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	int ret = my_strcmp(arr1, arr2);
//	printf("%d\n", ret);
//	return 0;
//}


//模拟实现strlen(3)

//int my_strlen(const char* str)
//{
//	assert(str);
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//
//int main()
//{
//	char arr[] = "abcdef";
//	
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}


//模拟实现strcat(4)

//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//
//
//}
//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//模拟实现strstr(5)

//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	char* cur = (char*)p1;
//	char* s1 = NULL;
//	char* s2 = NULL;
//	if (*p2 == '\0')
//	{
//		return (char*)p1;
//	}
//	while (*cur)
//	{
//		
//		s1 = cur;
//		s2 = (char*)p2;
//		while (s1 && s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;
//		}
//		if (*p2 == '\0')
//		{
//			return (char*)p1;
//		}
//		cur++;
//
//	}
//	return NULL;
//
//
//}
//int main()
//{
//	char* p1 = (char*)"abcdefg";
//	char* p2 = (char*)"cd";
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("字串不存在");
//	}
//	else
//		printf("%s\n", ret);
//	return 0;
//}

//运用实现strtok(6)

//#include<string.h>
//int main()
//{
//	char p1[] = "yupeng.3384304050@qq.com";
//	char buf[30] = {0};
//	strcpy(buf, p1);
//	char* p2 = (char*)"@.";
//	//printf("%s\n", strtok(buf, p2));
//	char* ret = NULL;
//	for (ret = strtok(buf, p2); ret != NULL; ret = strtok(NULL, p2))
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}



