#include<stdio.h>
#include<stdlib.h>
#define KeyType int
typedef struct {
	KeyType key;//�ؼ�����
	//...		//������ 
}ElemType;

typedef struct BSTNode{//˳���ṹ�����Ͷ��� 
	ElemType data;//������ 
	struct BSTNode *lchild,*rchild;//���Һ���ָ�� 
}BSTNode,*BSTree;

BSTree SearchBST(BSTree T,KeyType key){//����key 
	if((!T) || key == T->data.key) return T;
	else if(key < T->data.key)
		return SearchBST(T->lchild,key);//������������ 
	else return SearchBST(T->rchild,key);//������������ 
}


int main() {//test
	
    return 0;
} 
