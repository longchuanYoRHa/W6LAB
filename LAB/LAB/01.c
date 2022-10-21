#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//init
char name[] = { 'a','b','c','d' ,'\0'};
void quick_sorting(int num[], int size, int low, int high)
{
	int i, j, temp;
	int tmp;
	int s;
	s = size;

	i = low;
	j = high;
	tmp = num[low];
	if (i > j)  //如果下标i大于下标j，函数结束运行
	{
		return;
	}

	while (i != j)
	{
		while (num[j] >= tmp && j > i)
		{
			j--;
		}

		while (num[i] <= tmp && j > i)
		{
			i++;
		}

		if (j > i)
		{
			temp = num[j];
			num[j] = num[i];
			num[i] = temp;
		}
	}

	num[low] = num[i];
	num[i] = tmp;

	quick_sorting(num,s, low, i - 1);
	quick_sorting(num, s,i + 1, high);
}
int main()
{
	//EX1
	printf("%s\n", name);
	//如果以第一种方式声明字符串，需要手动加\0

	//EX2
	char* adr = "hello";
	int i;
	for (i = 0; i < 3; i++)
	{
		putchar(adr[i]);
	}
	printf("\n");
	i = 0;
	//while (adr[i]);
	//{
	//	printf("%c",adr[i]);
	//	i++;
	//}
	//printf("0\n");

	//EX3
	int digits[10] = { 0 };
	float rates[6] = { 0 };

	//EX4
	const int days[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int index;
	int month;
	printf("Enter month\n");
	scanf("%d", &month);
	index = --month;
	printf("Month %2d has %d days\n", ++month, days[index]);

	//EX5

	int arr1[] = { 1,2,3,8.16,32 };
	
	//EX6

	int arr2[100] = { 0 };
	arr2[99] = -1;
	printf("%d", arr2[99]);

	//EX7
	//EX9
	//rebo 
	index = 0;
	int ref[] = { 9, 10, 20, 12, 101, 32 };
	int* ptr;
	for (index = 0, ptr = ref + 5; index < 6; index++, ptr--)
		printf(" % d % d\n", ref[index], *ptr);

	//EX10
	i = 0;
	int t[8] = { 2,5,7,2,9,3,9,4 };
	quick_sorting(t,8, 0, 8 - 1);
	/*for (i = 0; i < 8; i++)
	{
		printf("%d", t[i]);
	}*/
	printf("%d", t[7]);
	return 0;
}