#include<stdio.h>
#include<stdlib.h>
#define ElemType int
#define MAXSIZE 100
typedef struct SqStack{
	ElemType *base;//Õ»µ×Ö¸Õë 
	ElemType *top;//Õ»Í·Ö¸Õë 
	int stacksize;//Õ»×î´óÈİÁ¿ 
}SqStack;

int InitStack (SqStack *S){//³õÊ¼»¯Ë³ĞòÕ» 
	S->base = malloc(sizeof(ElemType) * MAXSIZE);  
	if(!S->base) return 1;
	S->top = S->base;
	S->stacksize = MAXSIZE; 
	return 0;
}

int StackEmpty (SqStack *S){//ÅĞ¶ÏË³ĞòÕ»ÊÇ·ñÎª¿Õ 
	if(S->base == S->top) return 1;
	else return 2; 
} 

int StackLength (SqStack *S){//»ñÈ¡Ë³ĞòÕ»³¤¶È
	return S->top - S->base;
} 

int ClearStack (SqStack *S){//Çå¿ÕË³Ğò±í 
	if(S->base) S->top = S->base; 
	return 0; 	
}

int DestroyStack (SqStack *S){//Ïú»ÙË³ĞòÕ» 
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
