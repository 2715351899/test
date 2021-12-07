#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (size_t i = 0; i < sz-1; i++)//确定趟数
//	{
//		for (int j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j]>arr[j+1])
//			{
//				int tem = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tem;
//
//			}
//		}
//	}
//}
//int main()
//
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//所以求sz要写在函数外面
//	bubble_sort(arr, sz);//数组传参的时候,传递的其实是数组首元素的地址
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#define N 14
//void main()
//{
//    int i, j, k, n = 0, a[N][N];  /*定义二维数组a[14][14]*/
//    while (n <= 0 || n >= 13) {  /*控制打印的行数不要太大，过大会造成显示不规范*/
//        printf("请输入要打印的行数：");
//        scanf("%d", &n);
//    }
//    printf("%d行杨辉三角如下：\n", n);
//    for (i = 1; i <= n; i++)
//    {
//        a[i][1] = a[i][i] = 1;  /*两边的数令它为1，因为现在循环从1开始，就认为a[i][1]为第一个数*/
//    }
//        
//    for (i = 3; i <= n; i++)
//        for (j = 2; j <= i - 1; j++)
//            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];  /*除两边的数外都等于上两顶数之和*/
//    for (i = 1; i <= n; i++) {
//        for (k = 1; k <= n - i; k++)
//            printf("   ");  /*这一行主要是在输出数之前打上空格占位，让输出的数更美观*/
//        for (j = 1; j <= i; j++)  /*j<=i的原因是不输出其它的数，只输出我们想要的数*/
//            printf("%6d", a[i][j]);
//
//        printf("\n");  /*当一行输出完以后换行继续下一行的输出*/
//    }
//    printf("\n");
//}		
#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#define N 14
//void main()
//{
//    int i, j, k, n = 0, a[N][N];  
//    while (n <= 0 || n >= 13) {  
//        printf("请输入要打印的行数：");
//        scanf("%d", &n);
//    }
//    for (i = 1; i <= n; i++)
//    {
//        a[i][1] = a[i][i] = 1; 
//    }
//   for (i = 3; i <= n; i++)
//        for (j = 2; j <= i - 1; j++)
//            a[i][j] = a[i - 1][j - 1] + a[i - 1][j]; 
//    for (i = 1; i <= n; i++) {
//        /*for (k = 1; k <= n - i; k++)
//            printf("   ");  */
//        for (j = 1; j <= i; j++)  
//            printf("%6d", a[i][j]);
//
//        printf("\n");  
//    }
//    printf("\n");
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	while (~scanf("%d%d%d", &a, &b, &c))
//	
//		if (a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
//		{
//			printf("yes\n");
//
//		}
//		else
//		{
//			printf("no\n");
//		}
//return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//	int year, month, s;
//	while( ~scanf("%d%d", &year, &month))
//	{
//
//		s = 28 + (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
//		switch(month)
//		{
//		case 1: 
//		case 3:
//		case 5:
//		case 7:
//		case 8:
//		case 10:
//		case 12:
//			printf("31\n"); break;
//			
//		case 4:
//		case 6:
//		case 9:
//		case 11:
//			printf("30\n");
//			break;
//		case 2:
//			printf("%d\n", s);
//		}
//			
//
//	}
//return 0;
//}
in