#include<stdio.h>
#include<stdlib.h>
#define ElemType int
#define MAXSIZE 100
typedef struct SqQueue{
	ElemType *base;
	int front;//头指针 
	int rear;//尾指针 
}SqQueue;

int InitQueue (SqQueue *Q){//初始化顺序队列 
	Q->base = malloc(MAXSIZE * sizeof(ElemType)); 
	if(!Q->base) return 1;
	Q->front = Q->rear = 0; 
	return 0;
}

int QueueLength (SqQueue *Q){//获取长度 
	return (Q->rear - Q->front + MAXSIZE) % MAXSIZE;
} 

int GetHead (SqQueue *Q,ElemType *e){//获取队头数据 
	if(Q->front != Q->rear) 
	*e = Q->base[Q->front];
	return 0;
}

int EnQueue (SqQueue *Q,ElemType e){//循环入队 
	if((Q->rear + 1) % MAXSIZE == Q->front) return 1;//队满 
	Q->base[Q->rear] = e;
	Q->rear = (Q->rear + 1) % MAXSIZE; 
	return 0;
}

int DeQueue (SqQueue *Q,ElemType *e){//循环出队 
	if(Q->front == Q->rear) return 1;//队空
	*e = Q->base[Q->front];
	Q->front = (Q->front + 1) % MAXSIZE; 	 
	return 0; 
} 
 
int main() {//test

	
	return 0;
} 
