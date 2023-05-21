#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<windows.h>
//#include<stdlib.h>
////i/*nt main()
////{
//	int a = 0;
//	int n = 0;
//	int sum = 1;
//	int ret = 0;
//	for (a=1;a<=3;a++)
//	{
//		sum = sum * a;
//		ret = ret + sum;
//	}
//	printf("ret=%d\n", ret);
//	return 0;
//	
//}*/
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int c = 0;
//	int k = 8;
//	c = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = c - 1;
//	while (left <= right)
//	{
//		int sum = (left + right) / 2;
//		if (arr[sum] > k)
//		{
//			right = sum - 1;
//		}
//		else if (arr[sum] < k)
//		{
//			left = sum + 1;
//		}
//		else
//		{
//			printf("zhaodaole;%d\n", sum);
//			break;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char arr[] = "welcome to you!!!!!!!";
//	char arr1[] = "#####################";
//	int left = 0;
//	int right = strlen(arr) - 1;
//	while (left <= right)
//	{
//		printf("%s\n", arr1);
//		arr1[left] = arr[left];
//		arr1[right] = arr[right];
//		left++;
//		right--;
//		Sleep(1000);
//		system("cls");
//		
//	}
//	return 0;
//
//}
//int main()
//{
//	int i = 0;
//	int a = 1;
//	double sum = 0.0;
//	for (i = 1; i < 100;i++)
//	{
//		sum += a*1.0/ i;
//		a = -a;
//	}
//	printf("%f", sum);
//	return 0;
//}
//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int i = 0;
//	int a = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (a < arr[i])
//		{
//			a = arr[i];
//		}
//
//	}
//	printf("max=%d\n", a);
//	return 0;
//}
//int main()
//{
//	int x = 0;
//	
//	
//	for (x = 1; x <= 9; x++)
//	{
//		
//		int y = 0;
//		for (y = 1; y <= x; y++)
//		{
//			
//			printf("%d*%d=%-2d ", y,x,x*y);
//		}
//		printf("\n");
//	}
//	return 0;
//}
