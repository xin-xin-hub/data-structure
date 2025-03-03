#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
#define ElemType int 
typedef struct CTNode {//孩子结点 
	int child;
	struct CTNode;
}*ChildPtr;

typedef struct {//双亲结点 
	ElemType data;//数据域 
	ChildPtr firstchild;//孩子链表头指针 
}CTBox;

typedef struct {//树的结构 
	CTBox nodes[MAXSIZE];//头指针数组  
	int n,r;//结点数和根结点的位置 
}CTree;
//可以将孩子链表与双亲链表结合，在树的结构中再存储双亲的位置 
int main() {//test

    return 0;

} 
