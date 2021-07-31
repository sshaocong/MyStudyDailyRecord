#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Date
{
	int year;
	int month;
	int day;
};


struct Student
{
	int No;
	char Name[20];
	float score;
	struct Date birthday;
};

void printStruct(struct Student *s)
{
	
	printf("No.%d\nName:%s\nscore = %.1f\n",s->No,s->Name,s->score);	
	printf("%d-%d-%d\n",s->birthday.year, s->birthday.month, s->birthday.day);
}

void printArryOfStudent(struct Student *s, int len)
{
	int i = 0;
	for(i = 0; i < len; i++)
	{
		printStruct(s + i);
	}
}

void reverseStudent(struct Student *s, int len)
{
	int i = 0;
	for(i = 0; i < len/2; i++)
	{
		struct Student tmp = *(s + i);
		*(s + i) = *(s + len - i - 1);
		*(s + len - i - 1) = tmp;
	}
}


int cmpScore(const void *s1, const void *s2)
{
	struct Student *p1 = (struct Student *)s1;
	struct Student *p2 = (struct Student *)s2;
	return p1->score - p2->score;
}

int cmpName(const void *s1, const void *s2)
{
	struct Student *p1 = (struct Student *)s1;
	struct Student *p2 = (struct Student *)s2;
	return strcmp(p1->Name, p2->Name);
}
int cmpNo(const void *s1, const void *s2)
{
	struct Student *p1 = (struct Student *)s1;
	struct Student *p2 = (struct Student *)s2;
	return p1->No - p2->No;
}

int bcmpName(struct Student *s1, struct Student *s2)
{
	return strcmp(s1->Name, s2->Name);
}

void bubbleSortStudent(struct Student *s,int len,int (*cmp)(struct Student *, struct Student *))
{
	int bound = 0;
	for(bound = len - 1; bound > 0; bound--)
	{
		int cur = 0;
		for(cur = 0; cur < bound; cur++)
		{
//			if(strcmp((s + cur)-> Name,(s + cur + 1) -> Name) > 0)
			if(cmp((s + cur), (s + cur + 1)) > 0)
			{			
				struct Student tmp = *(s + cur);
				*(s + cur) = *(s + cur + 1);
				*(s + cur + 1) = tmp;
			}
		}
	}
}
/*
struct Node
{
	int data;
	struct Node *next;
};


void push_front(struct Node *pHead,int n)
{
	struct Node *pNew = malloc(sizeof(struct Node));
	pNew->data = n;
	pNew->next = pHead->next;
	pHead->next = pNew;

}

void printList(struct Node *pHead)
{
	struct Node *p = pHead->next;
	while(p != NULL)
	{
		printf("%d\n",p -> data);
		p = p->next;
	}
}

int lenth(struct Node *pHead)
{
	struct Node *p = pHead->next;
	int count = 0;
	while(p != NULL)
	{
		count++;
		p = p->next;
	}
	return count;
}

int isEmpty(struct Node *pHead)
{
	return pHead->next == NULL;
}


void push_back(struct Node *pHead, int n)
{
	if(isEmpty(pHead))
	{
		push_front(pHead,n);
	}
	else
	{
		struct Node *p = pHead -> next;
		while(p -> next)
		{
			p = p -> next;
		}
		struct Node *pNew = malloc(sizeof(struct Node));
		p -> next = pNew;
		pNew -> data = n;
		pNew -> next = NULL;
	}
}
*/

struct Student
{
	int data;
	struct Student* next;
};

void push_front(struct Student* pHead, int n)
{
	struct Student* pNew = malloc(sizeof(struct Student));
	pNew -> data = n;
	pNew -> next = pHead -> next;
	pHead -> next = pNew;
}

void printList(struct Student* pHead)
{
	struct Student* p = pHead -> next;
	while(p != NULL)
	{
		printf("%d\n",p -> data);
		p = p -> next;
	}
}

int lenth(struct Student* pHead)
{
	struct Student* p = pHead -> next;
	int count = 0;
	while(p != NULL)
	{
		count++;
		p = p -> next;
	}
	return count;
}

int isEmpty(struct Student* pHead)
{
	return pHead -> next ==  NULL;
}

void push_back(struct Student* pHead, int n)
{
	if(isEmpty(pHead))
	{
		push_front(pHead,n);
	}
	else
	{
		struct Student* pNew = malloc(sizeof(struct Student));
		struct Student* p = pHead -> next;
		while(p -> next != NULL)
		{
			p = p -> next;
		}
		p -> next  = pNew;
		pNew -> data = n;
		pNew -> next = NULL;
	}


}


int main()
{
	struct Student head = {0, NULL};
	struct Student* pHead = &head;
//	printf("%d\n",isEmpty(pHead));
//	printf("lenth = %d\n",lenth(pHead));
	push_front(pHead,1);
	push_front(pHead,2);
	push_front(pHead,3);
	
	push_back(pHead,4);
	printList(pHead);
	
//	printf("%d\n",isEmpty(pHead));
	printf("lenth = %d\n",lenth(pHead));
	return 0;
}


#if 0
int main()
{
    
	struct Node head = {0 , NULL};
	struct Node *pHead = &head;

//	printf("%d\n",isEmpty(pHead));
	push_front(pHead,1);
	push_front(pHead,2);
	push_front(pHead,3);
	
	push_back(pHead,5);

	printList(pHead);
//	printf("lenth = %d\n",lenth(pHead));	
//	printf("%d\n",isEmpty(pHead));
	return 0;
}
#endif
#if 0
int main()
{
	struct Student s[3] = {{1, "zhangsan", 95.495,{2000, 1,31}},
		{2, "lisi", 92.47 , {1999, 2, 28}},
		{3, "wangwu", 98.86, {2001, 4, 30}}};
	int len = sizeof(s)/sizeof(*s);
//	reverseStudent(s, len);
	bubbleSortStudent(s, len,bcmpName);
//	qsort(s,len,sizeof(s[0]),cmpScore);
	printArryOfStudent(s, len);


//	scanf("%d%s%f",&s1.No,s1.Name,&s1.score);
//	printf("No.%d\nName:%s\nscore = %.1f\n",s1.No,s1.Name,s1.score);
	return 0;
}
#endif
