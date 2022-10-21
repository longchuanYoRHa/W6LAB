#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//init
char name[] = { 'a','b','c','d' ,'\0'};
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
	return 0;
}