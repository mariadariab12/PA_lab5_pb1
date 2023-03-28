#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>

typedef char Data;

typedef struct Node{
	Data val;
	struct Node *next;
}Node;


Data top(Node *top);
void push(Node**top, Data v);
Data pop(Node**top);
int isEmpty(Node*top);
void deleteStack(Node**top);
