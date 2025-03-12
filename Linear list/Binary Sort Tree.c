#include<stdio.h>
#include<stdlib.h>
#define KeyType int
typedef struct {
	KeyType key;//关键字域
	//...		//其他域 
}ElemType;

typedef struct BSTNode{//顺序表结构体类型定义 
	ElemType data;//数据域 
	struct BSTNode *lchild,*rchild;//左右孩子指针 
}BSTNode,*BSTree;

BSTree SearchBST(BSTree T,KeyType key){//查找key 
	if((!T) || key == T->data.key) return T;
	else if(key < T->data.key)
		return SearchBST(T->lchild,key);//在左子树中找 
	else return SearchBST(T->rchild,key);//在右子树中找 
}


int main() {//test
	
    return 0;
} 
