#include<stdio.h>
#include<stdlib.h>
#define ElemType int
#define MAXSIZE 100
typedef struct StackNode{
	ElemType data;//������ 
	struct StackNode *next;//ָ���� 
}StackNode,*LinkStack;

int InitStack (LinkStack *S){//��ʼ����ջ 
	*S = NULL; 
	return 0;
}

int StackEmpty (LinkStack *S){//�ж�˳��ջ�Ƿ�Ϊ�� 
	if(*S == NULL) return 1;
	else return 0; 
} 

int GetTop (LinkStack *S){
	if(*S != NULL) return (*S)->data;
}

int Push (LinkStack *S,ElemType e){//��ջ 
	LinkStack p = malloc(sizeof(StackNode));
	if(!p) return 1; 
	p->data = e; 
	p->next = *S;
	*S = p;
	return 0;
}

int Pop (LinkStack *S,ElemType *e){//��ջ 
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
