#include<stdio.h>
#include<stdlib.h>
#define ElemType int
#define MAXSIZE 100
typedef struct Qnode{
	ElemType data;//数据域 
	struct Qnode *next;//指针域 
}Qnode,*QueuePtr;

typedef struct{
	QueuePtr front;//队头指针 
	QueuePtr rear;//队尾指针 
}LinkQueue;

int InitQueue (LinkQueue *Q){//初始化链队列 
	Q->front = Q->rear = malloc(sizeof(Qnode));
	if(!Q->front) return 1;
	Q->front->next = NULL; 
	return 0;
}

int DestroyQueue (LinkQueue *Q){//销毁链队列 
	while(Q->front){
		QueuePtr p = Q->front->next;
		free(Q->front);
		Q->front = p; 
	}
	return 0;
}

int GetHead (LinkQueue *Q,ElemType *e){//获取队头数据 
	if(Q->front == Q->rear) return 1; 
	*e = Q->front->next->data;
	return 0;
}

int EnQueue (LinkQueue *Q,ElemType e){//入队 
	QueuePtr p = malloc(sizeof(Qnode));
	if(!p) return 1; 
	p->data = e;
	p->next = NULL;
	Q->rear->next = p; 
	Q->rear = p; 
	return 0;
}

int DeQueue (LinkQueue *Q,ElemType *e){//出队 
	if(Q->front == Q->rear) return 1;//队空
	QueuePtr p = Q->front->next;
	*e = p->data;
	Q->front->next = p->next;
	if(Q->rear == p) Q->rear = Q->front;
	free(p);	 
	return 0; 
} 
 
int main() {//test

	
	return 0;
} 
