#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
#define ElemType int 
typedef struct PTNode{//树的双亲表示法 
	ElemType data;//数据域 
	int parent;//双亲位置域 
}PTNode;

typedef struct {
	PTNode nodes[MAXSIZE];//创建PTNode数组 
	int r,n;//根结点的位置和结点个数 
}PTree;



int main() {//test

    return 0;

} 
