#include <stdio.h>
#include <string.h>
//================第五题============
int main()
{
	int n = 123456;
	char str[100];
	int i = 0;
	int num = 0;
	while(n)
	{
		num = n % 10;
		str[i] = num + 48;
		n = n / 10;
		i++;
	}
	str[i] = '\0';
	int len = strlen(str);
	i = 0;
	while(i < len/2)
	{
		char tmp = str[len - 1 -i];
		str[len - 1 - i] = str[i];
		str[i] = tmp;
		i++;
	}
	str[len] = '\0';

	puts(str);
	return 0;
}


#if 0
//======================第四题==============
int main()
{
	char str[100];
	gets(str);
	
//	int i = 0;
//	while(str[i] != '\0')
//	{
//		i++;
//	}
//
	int len = strlen(str);
	
	int j = 0;
	for(j = 0;j < len/2;j++)
	{
		char tmp = str[j];
		str[j] = str[len - 1 - j];
		str[len - 1 -j] = tmp;
	}
	
	str[len] = '\0';
	puts(str);

	return 0;
}
#endif

#if 0
//==================第三题strcmp===========
int main()
{
	char str1[100];
	char str2[100];
	gets(str1);
	gets(str2);
	
	int i = 0;
	while(str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0')
	{
		i++;
	}
	
	int ret = str1[i] - str2[i];
	printf("%d\n",ret);

	return 0;
}
#endif

#if 0
//==================第二题strcat======================
int main()
{
	char str1[100];
	char str2[100];
	gets(str1);
	gets(str2);
	
	int i = 0;
	while(str1[i] != '\0')
	{
		i++;
	}
	
	int j = 0;
	while(str2[j] != '\0')
	{
		str1[i] = str2[j];
		j++;
		i++;
	}
	str1[i] = '\0';

	puts(str1);

	return 0;
}
#endif

#if 0
//==============第一题strcpy ===================
int main()
{
	char str1[100];
	char str2[100];
	gets(str1);
	
	int i = 0;
	while( str1[i] != '\0')
	{
		str2[i] = str1[i];
		i++;
	}
	str2[i] = '\0';


	puts(str2);
	return 0;
}
#endif




#if 0
int main()
{	
	char str1[100] = "Hello";
	char str2[100] = "World";
	char str3[100] = "c language";
	char max[100];

	if(strcmp(str1,str2) > 0)
	{
		strcpy(max,str1);
	}
	else
	{
		strcpy(max,str2);
	}
	if(strcmp(max,str3) < 0)
	{
		strcpy(max,str3);
	}

	puts(max);
	
	return 0;
}
#endif

//========================strcmp
#if 0
int main()
{
	char str1[10] = "hello";
	char str2[10] = "hello!";
	int i = 0;
	while(str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0')
	{
		i++;
	}
	printf("%d\n",str1[i]-str2[i]);
/*	
	if((str1[i] - str2[i]) == 0)
	{
		printf("0\n");
	}
	else if((str1[i] - str2[i]) > 0)
	{
		printf("1\n");
	}
	else
	{
		printf("-1\n");
	}
*/	

	return 0;
//	int i = 1;
//	int* p = &i;
//	//printf("%p\n %d\n",p,sizeof(p));
//	printf("%d\n",*p);
	return 0;
}
#endif

#if 0
int main()
{
	char str1[100] = "hello ";
	char str2[100] = "world!";
//	int i = 0;
//	while(str1[i] != '\0')
//	{
//		i++;
//	}
	int i = strlen(str1);
	int j = 0;
	while(str2[j] != '\0')
	{
		str1[i] = str2[j];
		i++;
		j++;
	}
	str1[i] = '\0';

	puts(str1);
	return 0;
}
#endif	

#if 0
int main()
{
	char str1[100] = "hello";
	int len = strlen(str1);
	int i = 0;
	while(i < len/2)
	{
		char tmp = str1[i];
		str1[i] = str1[len - 1 -i];
		str1[len - 1 -i] = tmp;
		i++;
	}
	str1[len] = '\0';
	puts(str1);
	return 0 ;
}
#endif


#if 0
int main()
{
	char str1[100] = "hello";
	char str2[100];
	strcpy(str2,str1);
//	int i = 0;
//	while(str1[i] != '\0')
//	{
//		str2[i] = str1[i];
//		i++;
//	}
//	str2[i] = '\0';
	
	puts(str2);
	return 0;
}
#endif
/*
int main()
{
	char str[10] = "hello";
	int i = 0;

	while(str[i] != '\0')
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		puts(str);
		i++;
	}

//	puts(str);

//	int count = 0;
//	while(str[i] != '\0' )
//	{
//		count++;
//		i++;
//	}

//	printf("count = %d\n",i);

//	printf("%u\n",strlen(str));
//	puts(str);
	int i = 0;
	while(str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	printf("\n");

	return 0;

}
*/

/*
int main()
{
	int arr[] = {3,5,2,4,7,1,8,6,9};
	int len = sizeof(arr) / sizeof(arr[0]);

	int bound = 0;
	for(bound = len - 1; bound > 0; bound --)
	{
		int cur = 0;
		for(cur = 0; cur < bound ; cur++)
		{
			if(arr[cur] > arr[cur + 1])
			{
				int tmp = arr[cur];
				arr[cur] = arr[cur + 1];
				arr[cur + 1] =  tmp;
			}
		}
	}

	int i = 0;
	for(i = 0; i < len; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");

	int n = 0;
	scanf("%d",&n);
	int begin = 0;
	int end = len - 1;
	int mid = 0;

	while(begin <= end)
	{
		mid = (begin + end) / 2; 
		if(arr[mid] > n)
		{
			end = mid - 1;
		}
		else if(arr[mid] < n)
		{
			begin = mid + 1;
		}
		else
		{
			break;
		}
	}

	if(begin <= end)
	{
		printf("find it, is arr[%d]\n",mid);
	}
	else
	{
		printf("can not find it!\n");
	}

	return 0;
}
*/

#if 0
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int len = sizeof(arr) / sizeof(arr[0]);
	int n = 0;
	scanf("%d",&n);
	int i = len - 1;
	while(n)
	{
		i = len - 1;
		int tmp = arr[i];
		while(i>0)
		{
			arr[i]=arr[i-1];
			i--;
		}
		arr[0] = tmp;
		n--;

	}
	for(i = 0; i <= len-1; i++)
	{
		printf("%d ",arr[i]);
	}

	printf("\n");

	return 0;
}
#endif
