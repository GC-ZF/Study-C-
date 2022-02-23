#include <iostream>
using namespace std;

//冒泡排序函数 参数1 数组的首地址 参数2 数组的长度
void bubbleSort(int *arr, int len) //int arr[]也可以
{
	for (int i = 0; i < 10 - 1; i++)
	{
		for (int j = 0; j < 10-i-1; j++)
		{
			if (arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}
//打印数组
void printArray(int *arr, int len)
{
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << "  ";
	}
}
int main63()
{
	//1.先创建数组
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };

	//数组长度
	int len = sizeof(arr) / sizeof(arr[0]);

	//2.创建函数，实现冒泡排序
	bubbleSort(arr, len);

	//3.打印排序后的数组
	printArray(arr, len);

	system("pause");
	return 0;
}