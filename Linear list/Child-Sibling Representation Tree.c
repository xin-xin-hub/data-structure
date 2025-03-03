#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
#define ElemType int 
typedef struct CSNode {//孩子兄弟表示法结构 
	ElemType data;//数据域 
	struct CSNode *firstchild,*nextsibling;//指针域 
}CSNode,*CSTree;

int main() {//test

    return 0;

} 
