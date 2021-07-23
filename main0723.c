#include <stdio.h>
#include <string.h>

#define N 5

int main()
{
	int arr[N][N] = { 0 };
	int row = sizeof(arr)/sizeof(arr[0]);
	int col = sizeof(arr[0])/sizeof(arr[0][0]);

	int i = 0;
	int j = N / 2;
	arr[i][j] = 1;
	
	int n = 0;
	for(n = 2; n <= row * row;n++)
	{
		int x = i;
		int y = j;
		i--;
		j++;
		if(i < 0)
		{
			i = row - 1; 
		}
		if(j > col - 1)
		{
			j = 0;
		}
		if(arr[i][j] != 0)
		{
			i = x;
			j = y;
			i++;
			if(i > row - 1)
			{
				i = 0;
			}
		}
		arr[i][j] = n;
	}

	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col;j++)
		{
			printf("%2d ",arr[i][j]);
		}
		printf("\n");
	
	}

 	int	max = arr[0][0];
	i = 1;
	j = 1;
	while(i < N && j < N)
	{
		if(max < arr[i][j])
		{
			max = arr[i][j];
		}
		i++;
		j++;
	}
	printf("max = %d\n",max);
	
	int min = arr[N-1][0];
	i = N-1;
	j = 0;
	while(i >= 0 && j <= N-1)
	{
		if(min > arr[i][j])
		{
			min = arr[i][j];
		}
		i--;
		j++;
	}
	
	printf("min = %d\n",min);
	return 0;
}


#if 0
int main()
{
	char str[4][100] = {"Hello","World","c language","China"};
	int rows = sizeof(str)/sizeof(str[0]);
	
/*	int bound = 0;
	for(bound = rows-1; bound > 0; bound--)
	{
		int cur = 0;
		for(cur = 0;cur < bound; cur++)
		{
			if(strcmp(str[cur],str[cur+1]) > 0)
			{
				char tmp[100];
				strcpy(tmp,str[cur+1]);
				strcpy(str[cur+1],str[cur]);
				strcpy(str[cur],tmp);
			}

		}
	
	}
*/	

/*	int i = 0;
	int j = 0;
	for(i = 0;i < rows-1;i++)
	{
		for(j = i + 1;j < rows;j++)
		{
			if(strcmp(str[i],str[j]) > 0)
			{
				char tmp[100];
				strcpy(tmp,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],tmp);
			}
		
		}
	}
*/
	int i = 1;
	int j = 1;
	for(i = 1;i < rows;i++)
	{
		j = i;
		char tmp[100];
		strcpy(tmp,str[j]);
		while(j > 0 && strcmp(str[j-1],tmp) > 0)
		{
			strcpy(str[j],str[j-1]);
			j--;
		}
		strcpy(str[j],tmp);
	}
	
	for(i = 0; i < rows; i++)
	{
		puts(str[i]);
	}

	char n[100] = "Hello";
	int begin = 0;
	int end = rows - 1;
	int mid;
	while(begin <= end)
	{
		mid = (begin + end) / 2;
		if(strcmp(str[mid],n) > 0)
		{
			end = mid - 1;
		}
		else if(strcmp(str[mid],n) < 0)
		{
			begin = mid + 1;
		}
		else
		{
			break;
		}
	}

	printf("Hello index is %d\n",mid);

	return 0;
}
#endif

#if 0
int main()
{
	char str[4][100] = {"Hello","World!","c language","china"};
	char tmp[100];
	int rows = sizeof(str)/sizeof(str[0]);
	int i = 0;
	for(i = 0;i < rows/2;i++)
	{
		strcpy(tmp,str[rows - 1 -i]);
		strcpy(str[rows - 1 -i],str[i]);
		strcpy(str[i],tmp);
	}
	for(i = 0;i < rows;i++)
	{
		puts(str[i]);
	}

	return 0;
}
#endif

#if 0
int main()
{
	char str[3][100] = {"Hello","World!","c language"};
	char max[100];
	int rows = sizeof(str)/sizeof(str[0]);
	int i = 0;
	strcpy(max,str[0]);
	for(i = 1; i < rows;i++)
	{
		if(strcmp(max,str[i]) < 0)
		{
			strcpy(max,str[i]);
		}	
	}

/*	while(max[i] == str[1][i] && max[i] != '\0' && str[1][i] != '\0')
	{
		i++;
	}
	if(max[i] - str[1][i] < 0)
	{
		strcpy(max,str[1]);
	}
	i = 0;
	while(max[i] == str[2][i] && max[i] != '\0' && str[2][i] != '\0')
	{
		i++;
	}
	if(max[i] - str[2][i] < 0)
	{
		strcpy(max,str[2]);
	}
*/	
	puts(max);
	
	return 0;
}
#endif

/*
#define row 3
#define col 3
int main()
{
	int arr[row][col] = { 0 };
	int i = 0;
	int j = col / 2;
	int n = 0;
	arr[i][j] = 1;
	for(n = 2;n <= row * col ;n++)
	{
		int x = i;
		int y = j;
		--i;
		if(i < 0)
		{
			i = row - 1;

		}
		++j;
		if(j > col - 1)
		{
			j = 0;
		}
		if(arr[i][j] != 0)
		{
			i = x;
			j = y;
			i++;
		}
		arr[i][j] = n;
	}

	for(i = 0;i < row;i++)
	{
		for(j = 0;j < col;j++)
		{
			printf("%2d ",arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
*/

#if 0
int main()
{
	int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	int row = sizeof(arr) / sizeof(arr[0]);
	int col = sizeof(arr[0]) / sizeof(arr[0][0]);
	
	int i = 0;
	int j = 0;
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col/2; j++)
		{
			int tmp = arr[i][col - 1 - j];
			arr[i][col - 1 - j] = arr[i][j];
			arr[i][j] = tmp;

		}

	}

	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
		{
			printf("%2d ",arr[i][j]);
		}
		printf("\n");
	}

	
	return 0;
}
#endif


#if 0
int main()
{
	int a[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	int sum = 0;
	int row = sizeof(a)/sizeof(a[0]);
	int col = sizeof(a[0])/sizeof(a[0][0]);
	
	int i = 0;
	int j = 0;
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
		{
			if(i == 0 || i == row-1 || j == 0 || j == col-1  )
			{
				sum = sum + a[i][j];
		
			}
		}
	}

	printf("sum = %d\n",sum);

	return 0;
}
#endif

#if 0
int main()
{
    int n = 0;
    scanf("%d",&n);
    int arr[4];
    int i = 0;
    while(n)
    {
        arr[i] =  n % 10;
        n = n / 10;
        i++;
    }
    
    for(i = 0;i < 4;i++)
    {
        printf("%d",arr[i]);      
    }
    
    return 0;
    
}
#endif

#if 0
int main()
{
	int n = 123456;
	char str[100];

	int i = 0;
	while(n)
	{
		str[i] = n % 10 + '0';  // str[i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	str[i] = '\0';
	int len = strlen(str);
	i = 0;
	while(i < len/2)
	{
		char tmp = str[len-1-i];
		str[len-1-i] = str[i];
		str[i] = tmp;
		i++;
	}
	str[len] = '\0';
	puts(str);
	return 0;
}
#endif
