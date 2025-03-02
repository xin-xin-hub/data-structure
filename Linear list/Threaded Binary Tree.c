#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
#define ElemType int 
typedef struct BiThrNode{//线索二叉树(将无用的指针域利用起来) 
	ElemType data;//数据域 
	int ltag,rtag;//标记域 
	struct BiNode *lchild,*rchild;//指针域 
}BiThrNode,*BiThrTree;



int main() {//test

    return 0;

} 
