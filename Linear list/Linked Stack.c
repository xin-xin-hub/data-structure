#include<stdio.h>
#include<stdlib.h>
#define ElemType int
typedef struct StackNode{
	ElemType data;//数据域 
	struct StackNode *next;//指针域 
}StackNode,*LinkStack;

int InitStack (LinkStack *S){//初始化链栈 
	*S = NULL; 
	return 0;
}

int StackEmpty (LinkStack *S){//判断顺序栈是否为空 
	if(*S == NULL) return 1;
	else return 0; 
} 

int GetTop (LinkStack *S){
	if(*S != NULL) return (*S)->data;
}

int Push (LinkStack *S,ElemType e){//入栈 
	LinkStack p = malloc(sizeof(StackNode));
	if(!p) return 1; 
	p->data = e; 
	p->next = *S;
	*S = p;
	return 0;
}

int Pop (LinkStack *S,ElemType *e){//出栈 
	if(*S == NULL) return 1;
	*e = (*S)->data;
	LinkStack p = *S;
	*S = (*S)->next;
	free(p); 
	return 0; 
} 
 
int main() {//test
	LinkStack S;
	
	return 0;
} 
