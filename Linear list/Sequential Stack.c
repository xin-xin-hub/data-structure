#include<stdio.h>
#include<stdlib.h>
#define ElemType int
#define MAXSIZE 100
typedef struct SqStack{
	ElemType *base;//ջ��ָ�� 
	ElemType *top;//ջͷָ�� 
	int stacksize;//ջ������� 
}SqStack;

int InitStack (SqStack *S){//��ʼ��˳��ջ 
	S->base = malloc(sizeof(ElemType) * MAXSIZE);  
	if(!S->base) return 1;
	S->top = S->base;
	S->stacksize = MAXSIZE; 
	return 0;
}

int StackEmpty (SqStack *S){//�ж�˳��ջ�Ƿ�Ϊ�� 
	if(S->base == S->top) return 1;
	else return 2; 
} 

int StackLength (SqStack *S){//��ȡ˳��ջ����
	return S->top - S->base;
} 

int ClearStack (SqStack *S){//���˳��� 
	if(S->base) S->top = S->base; 
	return 0; 	
}

int DestroyStack (SqStack *S){//����˳��ջ 
	if(S->base){
		free(S->base);
		S->stacksize = 0;
		S->base = S->top = NULL; 
	}
	return 0; 
} 

int Push (SqStack *S,ElemType e){
	if(S->top - S->base == S->stacksize) return 1;
	*S->top++ = e; 
	return 0;
}

int Pop (SqStack *S,ElemType *e){
	if(S->top == S->base) return 1;
	*e = *--S->top; 
	return 0; 
} 
 
int main() {//test

	
	return 0;
} 
