#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node* next;
};

void push_front(struct Node* pHead, int n)
{
	struct Node* pNew = malloc(sizeof(struct Node));
	pNew -> data = n;
	pNew -> next = pHead -> next;
	pHead -> next = pNew;
}

void printList(struct Node* pHead)
{
	struct Node* p = pHead -> next;
	while(p != NULL)
	{
		printf("%d\n",p->data);
		p = p -> next;
	}
}

size_t lenth(struct Node* pHead)
{
	struct Node* p = pHead -> next;
	size_t count = 0;
	while(p)
	{
		count++;
		p = p -> next;
	}
	return count;
}

int isEmpty(struct Node* pHead)
{
	return pHead -> next == NULL; 
}

void push_back(struct Node* pHead, int n)
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
//		p -> next = pNew;
//		pNew -> data = n;
//		pNew -> next = NULL;
	}

}


void pop_front(struct Node* pHead)
{
	if(isEmpty(pHead))
	{
		return;
	}

	struct Node* p = pHead -> next;
//	struct Node* tmp = p;
//	tmp = tmp -> next;
//	free(p);
//	pHead -> next = tmp;
	pHead -> next = p -> next;
	free(p);
}


void pop_back(struct Node* pHead)
{
	if(lenth(pHead) >= 2){
		struct Node* p = pHead -> next;
		while((p -> next) -> next)
		{
			p = p -> next;
		}
		free(p -> next);
		p -> next = NULL;
	}
	else if(lenth(pHead) == 1)
	{
		pop_front(pHead);
	}
//	return ;
}

void destroy(struct Node* pHead)
{
	while(!isEmpty(pHead))
	{
		pop_front(pHead);
	}
}

void reverseList(struct Node* pHead)
{
	struct Node* p = pHead -> next;
	struct Node newHead = {0, NULL};

	while(p)
	{
		push_front(&newHead,p -> data);
		p = p -> next;
	}
	destroy(pHead);
	pHead -> next = newHead.next;
}

#if 0
int main()
{
	struct Node head = {0,NULL};
	struct Node* pHead = &head;
	
	push_front(pHead,3);
	push_front(pHead,2);
	push_front(pHead,1);

	push_back(pHead,4);
	push_back(pHead,5);
	push_back(pHead,6);

//	pop_front(pHead);
//	pop_front(pHead);
//	pop_front(pHead);

//	pop_back(pHead);	
//	pop_back(pHead);
//	pop_back(pHead);
//	destroy(pHead);
	reverseList(pHead);
	printList(pHead);
	printf("lenth = %d\n",lenth(pHead));

	return 0;
}
#endif

union Demo
{
	char c;
	short s;
	int i;
};


void bigOrLittle(union Demo d)
{
	if(d.c == 1)
	{
		printf("little\n");
	}
	else if(d.c == 0)
	{
		printf("big\n");
	}
}


int main()
{
	unsigned int i = 0xFFFFFFFF;
//	unsigned int j = 0xFFFFFFB7;
	int n = 0;
	for(n = 0;n < 32;n+=2)
	{
		i = i & ~(1 << n);
	}
	printf("%x\n",i);

//	int count = 0;
//	for(n = 0;n < 32;n++)
//	{
//		if(0x80000000 & (i << n))
//		{
//			count++;
//		}
//	}
//	printf("count = %d\n",count);

//	unsigned int i = 0;
//	int n = 0;
//	for(n = 0;n < 31;n+=2)
//	{
//		i = i | (1 << n);
//	}
	
//	printf("%x\n",i);

//	union Demo d;
//	d.i = 1;
//	bigOrLittle(d);
	return 0;
}

