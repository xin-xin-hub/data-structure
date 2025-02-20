#include<stdio.h>
#include<stdlib.h>
#define ElemType int
#define MAXSIZE 100
typedef struct StackNode{
	ElemType data;//Êý¾ÝÓò 
	struct StackNode *next;//Ö¸ÕëÓò 
}StackNode,*LinkStack;

int InitStack (LinkStack *S){//³õÊ¼»¯Á´Õ» 
	*S = NULL; 
	return 0;
}

int StackEmpty (LinkStack *S){//ÅÐ¶ÏË³ÐòÕ»ÊÇ·ñÎª¿Õ 
	if(*S == NULL) return 1;
	else return 0; 
} 

int GetTop (LinkStack *S){
	if(*S != NULL) return (*S)->data;
}

int Push (LinkStack *S,ElemType e){//ÈëÕ» 
	LinkStack p = malloc(sizeof(StackNode));
	if(!p) return 1; 
	p->data = e; 
	p->next = *S;
	*S = p;
	return 0;
}

int Pop (LinkStack *S,ElemType *e){//³öÕ» 
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
