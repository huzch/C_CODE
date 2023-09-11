#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<windows.h>
#include<string.h>
//int main()
//{
//	//1.试除法
//	int count1 = 0;
//	int count2 = 0;
//	int i = 0;
//	for (i = 2; i < 1000; i++)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			count2++;//运算次数
//			if (i % j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d\n", i);
//			count1++;//素数个数
//		}
//	}
//	printf("\ncount1=%d\ncount2=%d\n", count1, count2);
//	return 0;
//}
//int main()
//{
//	//2.筛选法
//	int count1 = 0;
//	int count2 = 0;
//	int arr[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		arr[i] = 1;
//	}
//	for (i = 2; i < 1000; i++)
//	{
//		if (arr[i])
//		{
//			printf("%d ", i);
//			count1++;//素数个数
//			int j = 0;
//			for (j = i*i; j < 1000; j += i)
//			{
//				arr[j] = 0;
//				count2++;//运算次数
//			}
//		}
//	}
//	printf("\ncount1=%d\ncount2=%d\n", count1, count2);
//	return 0;
//}
//int main()
//{
//	//辗转相除法
//	int m, n,r;
//	scanf("%d %d", &m, &n);
//	while (r = m % n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}
//int main()
//{
//	//打印闰年
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	double sum = 0.0;
//	int count = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		count++;
//		if (count % 2 == 0)
//		{
//			sum -= 1.0 / i;
//		}
//		else
//		{
//			sum += 1.0 / i;
//		}
//	}
//	printf("sum=%lf\n", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	double sum = 0.0;
//	scanf("%d", &n);
//	int flag = 1;
//	for (i = 1; i <= n; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("sum=%lf\n", sum);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	scanf("%d", &k);
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标为%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "hello world!!!";
//	char arr2[] = "**************";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//	}
//	printf("hello world!!!");
//	return 0;
//}
//int main()
//{
//	//求10个整数中的最大值
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9 };
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (max < arr[i])
//			max = arr[i];
//	}
//	printf("max=%d\n", max);
//	return 0;
//}
//int main()
//{
//	//打印乘法口诀表
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//void game()
//{
//	int num = rand() % 100 + 1;
//	int k = 0;
//	while (1)
//	{
//		printf("请猜数字：");
//		scanf("%d", &k);
//		if (k > num)
//		{
//			printf("猜大了\n");
//		}
//		else if (k < num)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			Sleep(1000);
//			system("cls");
//			break;
//		}
//	}
//}
//void menu()
//{
//	printf("*******************\n");
//	printf("***1.play 0.exit***\n");
//	printf("*******************\n");
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择(1/0):");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("已退出游戏\n");
//			break;
//		default:
//			printf("输入错误,请重试\n");
//		}
//	} while (input);
//	return 0;
//}
//int Frog(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else if (n == 2)
//	{
//		return 2;
//	}
//	else
//	{
//		return Frog(n - 1) + Frog(n - 2);
//	}
//}
//int Frog(int n)
//{
//	int a = 1;
//	int b = 2;
//	int c = 0;
//	if (n == 1)
//	{
//		return 1;
//	}
//	else if (n == 2)
//	{
//		return 2;
//	}
//	else
//	{
//		while (n > 2)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//			n--;
//		}
//		return c;
//	}
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int ret=Frog(num);
//	printf("%d\n", ret);
//	return 0;
//}
//int main()
//{
//	//strcpy的用法，字符串拷贝，将后面赋给前面
//	char arr1[] = "bit";
//	char arr2[] = "********";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//int main()
//{
//	//memset的用法
//	char arr[] = "hello world!";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}
//int get_max(int a, int b)
//{
//	return (a > b) ? a : b;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}
//void Exchange(int* px, int* py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Exchange(&a, &b);//传址调用
//	printf("a=%d\nb=%d", a, b);
//	return 0;
//}
//void binary_search(int* arr, int sz, int k)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid]<k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标为%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//}
//int main()
//{
//	int arr[] = {0,1,2,3,4,5,6,7,8,9};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 0;
//	scanf("%d", &k);
//	binary_search(&arr,sz,k);
//	return 0;
//}
//void count(int* n)
//{
//	(*n)++;
//}
//int main()
//{
//	int num = 0;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		count(&num);
//		printf("%d\n", num);
//	}
//	return 0;
//}
//void abc(int n)
//{
//	if (n > 9)
//	{
//		abc(n / 10);
//	}
//	printf(" %d", n % 10);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	abc(n);
//	return 0;
//}
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	return 0;
//}
//int main()
//{
//	char arr[] = "hello world";
//	int ret = my_strlen(arr);
//	printf("len=%d\n", ret);
//	return 0;
//}
//void Fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//}
//int Fac2(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Fac2(n - 1);
//	}
//}
//int main()
//{
//	//求n的阶乘
//	int n = 0;
//	scanf("%d", &n);
//	int ret=Fac2(n);
//	printf("%d\n", ret);
//	return 0;
//}
//int Fib(int n)
//{
//	//递归做法
//	if (n == 1||n==2)
//	{
//		return 1;
//	}
//	//else if (n == 2)
//	//{
//	//	return 1;
//	//}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//int Fib(int n)
//{
//	//迭代做法
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	//求解第n个斐波那契数
//	int k = 0;
//	scanf("%d", &k);
//	int ret = Fib(k);
//	printf("%d\n", ret);
//	return 0;
//}
//void reserve_string(char* arr)
//{
//	int left = 0;
//	int right = strlen(arr) - 1;
//	while (left <= right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	printf("%s\n", arr);
//}
//int main()
//{
//	//字符串逆序
//	char arr[] = "hello world";
//	reserve_string(arr);//数组传参，传的是首元素的地址
//	return 0;
//}
//int calc(int k)
//{
//	int sum = 0;
//	if (k > 9)
//	{
//		return calc(k / 10)+(k % 10);
//	}
//	return k;
//}
//int main()
//{
//	//计算一个数的每位之和
//	int k = 0;
//	scanf("%d", &k);
//	int ret=calc(k);
//	printf("%d\n", ret);
//	return 0;
//}
//double Pow(int n, int k)
//{
//	if (k < 0)
//	{
//		return 1 / Pow(n,-k);
//	}
//	else if (k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Pow(n , k - 1);
//	}
//}
//int main()
//{
//	//实现n的k次方
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}
//void print(int* arr,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9 };
//	int arr2[] = { 9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	print(arr1,sz);
//	print(arr2,sz);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-5d", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return count;
}
void reserve_string(char* arr)
{
	int len = my_strlen(arr);
	char tmp = arr[0];
	arr[0] = arr[len - 1];
	arr[len - 1] = '\0';
	if (my_strlen(arr + 1) >= 2)
	{
		reserve_string(arr + 1);
	}
	arr[len - 1] = tmp;
}
int main()
{
	//逆序字符串，递归实现
	char arr[] = "abcdef";
	reserve_string(arr);
	printf("%s\n", arr);
	return 0;
}