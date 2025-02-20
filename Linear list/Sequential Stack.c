#include<stdio.h>
#include<stdlib.h>
#define ElemType int
#define MAXSIZE 100
typedef struct SqStack{
	ElemType *base;//栈底指针 
	ElemType *top;//栈头指针 
	int stacksize;//栈最大容量 
}SqStack;

int InitStack (SqStack *S){//初始化顺序栈 
	S->base = malloc(sizeof(ElemType) * MAXSIZE);  
	if(!S->base) return 1;
	S->top = S->base;
	S->stacksize = MAXSIZE; 
	return 0;
}

int StackEmpty (SqStack *S){//判断顺序栈是否为空 
	if(S->base == S->top) return 1;
	else return 2; 
} 

int StackLength (SqStack *S){//获取顺序栈长度
	return S->top - S->base;
} 

int ClearStack (SqStack *S){//清空顺序表 
	if(S->base) S->top = S->base; 
	return 0; 	
}

int DestroyStack (SqStack *S){//销毁顺序栈 
	if(S->base){
		free(S->base);
		S->stacksize = 0;
		S->base = S->top = NULL; 
	}
	return 0; 
} 

int Push (SqStack *S,ElemType e){//入栈
	if(S->top - S->base == S->stacksize) return 1;
	*S->top++ = e; 
	return 0;
}

int Pop (SqStack *S,ElemType *e){//出栈
	if(S->top == S->base) return 1;
	*e = *--S->top; 
	return 0; 
} 
 
int main() {//test

	
	return 0;
} 
