#include<stdio.h>
#include<stdlib.h>

struct Student
{
	char name[20];
	char sex[20];
	int age;
	int score;

};

void getNstudents(struct Student* s, int n)
{
	int i = 0;
	while(i < n)
	{
		scanf("%s%s%d%d",(s+i)->name,(s+i)->sex,&(s+i)->age,&(s+i)->score);
		i++;
	}
}

void printNStudet(struct Student* s, int n)
{
	int i = 0;
	while(i < n)
	{
		printf("name:%9s  sex:%7s  age:%d  score:%d\n",
				(s+i)->name,(s+i)->sex,(s+i)->age,(s+i)->score);
		i++;
	}
}

#if 0
int main()
{
	struct Student s[3];
	getNstudents(s,3);
	printStudet(s,3);
	return 0;
}
#endif

struct StudentScore
{
	int No;
	float course1;
	float course2;
	float course3;
	float course4;
	float course5;
};

float averageOfCourse1(struct StudentScore* s,int n)
{
	float ret = 0.0;
	float sum = 0.0;
	int i = 0;
	while(i < n)
	{
		sum = sum + (s + i) -> course1;
		i++;
	}
	ret = sum / n;
	return ret;
}

float avergeScore(struct StudentScore* s)
{
	
	return (s->course1 + s->course2 + s->course3 +
			s->course4 + s->course5) / 5.0;
	
}


void printAllScore(struct StudentScore* s)
{
	printf("No:%d course1:%.1f course2:%.1f course3:%.1f course4:%.1f course5:%.1f\n",
			s->No, s->course1, s->course2, s->course3, s->course4, s->course5);
}

void findFail2Course(struct StudentScore* s,int n)
{
	int i = 0;
	int arr[4] = { 0 };
	while(i < n)
	{
		if( ((s + i)->course1 < 60 && (s + i)->course2 < 60) ||
			((s + i)->course1 < 60 && (s + i)->course3 < 60) ||
			((s + i)->course1 < 60 && (s + i)->course4 < 60) ||
			((s + i)->course1 < 60 && (s + i)->course5 < 60) ||
			((s + i)->course2 < 60 && (s + i)->course3 < 60) ||
			((s + i)->course2 < 60 && (s + i)->course4 < 60) ||
			((s + i)->course2 < 60 && (s + i)->course5 < 60) ||
			((s + i)->course3 < 60 && (s + i)->course4 < 60) ||
			((s + i)->course3 < 60 && (s + i)->course5 < 60) ||
			((s + i)->course4 < 60 && (s + i)->course5 < 60) )
		{
			printAllScore(s + i);	
			printf("averge:%.1f\n",avergeScore((s + i)));
		}
		i++;
	}
}

void findExcellent(struct StudentScore*s, int n)
{
	int i = 0;
	while(i < n)
	{
		if(avergeScore(s+i) > 90)
		{
			printAllScore(s+i);
		}
		else if((s+i)->course1 > 85 && (s+i)->course2 > 85 &&
			(s+i)->course3 > 85 && (s+i)->course4 > 85 && (s+i)->course5 > 85)
		{		
			printAllScore(s+i);
		}
		i++;
	}
}

#if 0
int main()
{
	struct StudentScore s[4] = {{1, 56.5, 78.5, 66, 80, 51},
			{2, 78, 82, 89, 95, 87},
			{3, 88, 86, 91, 90.5, 97},
			{4, 65, 37, 45, 75, 46}};
//	printf("%f\n",averageOfCourse1(s,4));
//	findFail2Course(s,4);
	findExcellent(s,4);
	return 0;
}
#endif

struct Node
{
	int data;
	struct Node* next;
};

void push_front(struct Node* pHead,int n)
{
	struct Node* pNew = malloc(sizeof(struct Node));
	pNew -> data = n;
	pNew -> next = pHead -> next;
	pHead -> next = pNew;
}

void printList(struct Node* pHead)
{
	struct Node* p = pHead -> next;
	while(p)
	{
		printf("%d\n",p -> data);
		p = p -> next;
	}
}

int isEmpty(struct Node* pHead)
{
	return pHead -> next == NULL; 
}

int insertTailLinkList(struct Node* pHead, int n)
{
	if(isEmpty(pHead))
	{
		push_front(pHead,n);	
	}
	else
	{
		struct Node* p = pHead -> next;
		while(p -> next)
		{
			p = p -> next;
		}
		struct Node* pNew = malloc(sizeof(struct Node));
		pNew -> data = n;
		pNew -> next = p -> next;
		p -> next = pNew;	
	}
	return n;
}

int lenth(struct Node* pHead)
{
	struct Node* p = pHead -> next;
	int count = 0;
	while(p)
	{
		count++;
		p = p -> next;
	}
	return count;
}


struct Node* findListMid(struct Node* pHead)
{
	struct Node* p = pHead -> next;
	int i = 0;
	while(i < lenth(pHead) / 2)
	{
		p = p -> next;
		i++;
	}
	return p;
}


void reverse(struct Node *pHead){
	 
}


int main()
{
	struct Node head = {0, NULL};
	struct Node* pHead = &head;
	
	push_front(pHead,1);
	push_front(pHead,2);
	push_front(pHead,3);
	
	insertTailLinkList(pHead,4);
//	printf("lenth = %d\n",lenth(pHead));
	insertTailLinkList(pHead,5);
	insertTailLinkList(pHead,6);
//	printf("%d\n",findListMid(pHead)->data);
	
	printList(pHead);
	return 0;
}
