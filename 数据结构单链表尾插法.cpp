#include <stdio.h>
#include <malloc.h>

typedef struct node {
	int data;
	struct node *next;
} node;

node *creat() {
	node *head, *p, *q;
	char ch;
	head = (node *)malloc(sizeof(node));
	q = head;
	ch = '*';
	puts("µ¥Á´±íÎ²²å·¨");
	while (ch != '?') {
		int a;
		scanf("%d", &a);
		p = (node *)malloc(sizeof(node));
		p->data = a;
		q->next = p;
		q = p;
		ch = getchar();
	}
	q->next = NULL;
	return (head);
}

void print(node *a) {
	puts("print ");
	a = a->next;
	while (a != NULL) {
		printf("%d ", a->data);
		a = a->next;
	}
}

void reverse(node *head) {
	node *p, *q;
	p = head->next;
	head->next = NULL;
	while (p) {
		q = p;
		p = p->next;
		q->next = head->next;
		head->next = q;
	}
}

main() {
	node *a;
	a = creat();
	print(a);
	reverse(a);
	puts("\nhaved reversed£º");
	print(a);
	return 0;
}