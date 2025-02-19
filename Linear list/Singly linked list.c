#include<stdio.h>
#include<stdlib.h>
#define ElemType int
typedef struct Lnode{
	ElemType data;//数据域 
	struct Lnode *next;//指针域 
}Lnode,*LinkList;

int InitList_L (LinkList *L){//初始化单链表 
	*L = malloc(sizeof(Lnode));
	(*L)->next = NULL; 
	if(*L == NULL) return 1; 
	return 0;
}

int IsEmpty (LinkList L){//判断单链表是否为空 
	if(L->next) return 0;
	else return 1; 
} 

int DestroyList_L (LinkList L){//销毁单链表 
	LinkList p;
	while(L){
		p = L;
		L = L->next;
		free(p);
	}
	return 0; 
} 

int ClearList (LinkList L){//清空单链表
	LinkList p,q;
	p = L->next;
	while(p){
		q = p->next;
		free(p);
		p = q;
	}
	L->next = NULL;
	return 0; 	
}

int GetLength (LinkList L){//获取链表长度
 	LinkList p;
 	p = L->next;
 	int count=0;
	 while(p){
	 	count++;
	 	p = p->next;
	 } 
	return count;
} 

int GetElem_L (LinkList L,int i,ElemType *e){//获取链表中数据的内容 
	LinkList p = L->next;
	int j = 1;
	while(p && j < i){
		p = p->next;
		j++;
	}
	if(!p || j > i) return 1;//第i元素不存在 
	*e = p->data;
	return 0;
}

LinkList LocateElem_L (LinkList L,ElemType *e){//按值查找元素 
	LinkList p = L->next;
	while(p && p->data != *e){
		p = p->next;
	}
	return p;
}

int ListInsert_L (LinkList L,int i,ElemType *e){//在第i个元素之前插入数据元素e 
	LinkList p = L;
	int j = 0;
	while(p && j < i-1){
		p = p->next;
		j++;
	}
	if(!p || j > i-1) return 1;
	LinkList s = malloc(sizeof(Lnode));
	s->data = *e;
	s->next = p->next;
	p->next = s; 
	return 0;
}

int ListDelete_L (LinkList L,int i,ElemType *e){//删除链表中第i个数据元素 
	LinkList p = L;
	int j = 0; 
	while(p->next && j < i-1){
		p = p->next;
		j++;
	} 
	LinkList q = p->next;
	p->next = q->next;
	*e = q->data;
	free(q);
	return 0;
} 

void CreateList_H (LinkList *L,int n){//头插法 
	*L = malloc(sizeof(Lnode));
	(*L)->next = NULL;
	int i;
	for(i = n;i > 0;i--){
		LinkList p = malloc(sizeof(Lnode));
		scanf("%d",&p->data);
		p->next = (*L)->next;
		(*L)->next = p;
	}
}

void CreateList_R (LinkList *L,int n){//尾插法 
	*L = malloc(sizeof(Lnode));
	(*L)->next = NULL;
	LinkList r = *L;//尾指针 
	int i;
	for(i = n;i > 0;i--){
		LinkList p = malloc(sizeof(Lnode));
		scanf("%d",&p->data);
		p->next = NULL;
		r->next = p; 
		r = p;
	}
}
 
int main() {//test

	
	return 0;
} 
