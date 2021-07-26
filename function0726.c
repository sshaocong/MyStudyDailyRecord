#include<stdio.h>

void print2Arr(int arr[][4],int rows)
{
	int cols = sizeof(arr[0]) / sizeof(arr[0][0]);
	int i = 0;
	int j = 0;
	for(i = 0; i < rows; i++)
	{
		for(j = 0; j < cols; j++)
		{
			printf("%2d ",arr[i][j]);
		}
		putchar('\n');
	}
}

int sum2Arr(int arr[][4], int rows)
{
	int cols = sizeof(arr[0]) / sizeof(arr[0][0]);
	int sum = 0;
	int i = 0;
	int j = 0;
	for(i = 0; i < rows; i++)
	{
		for(j = 0; j < cols; j++)
		{
			sum = sum + arr[i][j];
		}
	}
	return sum;
}

int sum2ArrBorder(int arr[][4],int rows)
{
	int cols = sizeof(arr[0]) / sizeof(arr[0][0]);
	int i = 0;
	int j = 0;
	int sum = 0;
	for(i = 0; i < rows; i++)
	{
		for(j = 0; j < cols; j++)
		{
			if( i == 0 || i == rows - 1 ||
					j == 0 || j == cols - 1)
			{
				sum = sum + arr[i][j];
			}
		}
	}
	return sum;
}

void myPuts(const char str[])
{
	int i = 0;
	while(str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}

int myStrlen(const char str[])
{
	int i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return i;
}

void myStrcpy(char dest[], const char src[])
{
	int i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void myStrcat(char dest[], const char src[])
{
	int i = 0;
	while(dest[i] != '\0')
	{
		i++;
	}
	int j = 0;
	while(src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
}

int myStrcmp(const char str1[],const char str2[])
{
	int i = 0;
	while(str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0')
	{
		i++;
	}
	return str1[i] - str2[i];
}
