#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<memory.h>
int main()
{
	return 0;
}
	//long long a = 0, arr1[10000], b = 0, c = 0, ret = 0, arr2[10000], sum=0;
	//scanf("%d", &a);
	//for (b = 0; b < a; b++)
	//{
	//	scanf("%lld", &arr1[b]);
	//	arr2[b] = b + 1;
	//}
	//for (b = 0; b < a; b++)
	//{
	//	for (c = b + 1; c < a; c++)
	//	{
	//		if (arr1[b] > arr1[c])
	//		{
	//			ret = arr1[b];
	//			arr1[b] = arr1[c];
	//			arr1[c] = ret;
	//			ret = arr2[b];
	//			arr2[b] = arr2[c];
	//			arr2[c] = ret;
	//		}
	//	}
	//}
	//for (b = 0; b < a; b++)
	//{
	//	printf("%lld ", arr2[b]);
	//	for (c = 0; c < b; c++)
	//		sum=arr1[c] + sum;
	//}
	//printf("\n");
	//printf("%.2lf",(double)(sum)/(double)a);
//杨辉三角
//int c = 1;
//void print_YH(int pre[], int a)
//{
//	int b = 0, pre1[10000] = {0};
//	c++;
//	if (a > 1)
//	{
//		for (b = 0; b < c; b++)
//		{
//			if (b == 0)
//				pre1[b] = 1;
//			else if (b != c - 1)
//				pre1[b] = pre[b-1] + pre[b];
//			else
//				pre1[b] = 1;
//			printf("%d ", pre1[b]);
//		}
//		printf("\n");
//		return print_YH(pre1, a-1);
//	}
//	return 0;
//}
	//int a = 0, arr[10000] = {0};
	//scanf("%d",&a); 
	//printf("1\n");
	//print_YH(arr, a);
	//int arr[100], a = 0, b = 0,c=0;
	//do {
	//	scanf("%d", &arr[a]);
	//	a++;
	//} while (getchar() != '\n');
	//scanf("%d", &b);
	//printf("%d",two_find(arr,a, b));
//int two_find(int arr[], int a, int b)
//{
//	int n = 0, m = a-1,mid=0;
//	while (n+1 < m)
//	{
//		mid = (n + m) / 2;
//		if (arr[mid] < b)
//		{
//			n = mid;
//		}
//		else m = mid;
//	}
//		return m;
//}
//搜索插入位置
//int find(int* arr, int a, int b)
//{
//	return (arr[c] >= b) ? c : find((&arr[++c]), a, b);
//}bug
	//int arr[100], a = -1, b = 0, c = 0;
	//do {
	//	a++;
	//	scanf("%d", &arr[a]);
	//} while (getchar() != '\n');
	//scanf("%d", &c);
	//for (b = 0; b < a+1; b++)
	//{
	//	if (arr[b] >= c)
	//	{
	//		printf("%d", b);
	//		break;
	//	}
	//	if (b == a)
	//	{
	//		printf("%d", a+1);
	//	}
	//}