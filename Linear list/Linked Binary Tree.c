#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
#define ElemType int 
typedef struct BiNode{//链式二叉树 
	ElemType data;//数据域 
	struct BiNode *lchild,*rchild;//指针域 
}BiNode,*BiTree;

int PreOrderTraverse(BiTree T){//先序遍历二叉树(根左右)
	if(T == NULL) return 1;//空二叉树 
	else {
//		visit();//访问根节点，具体要这个函数做什么
	 PreOrderTraverse(T->lchild);//递归遍历左子树 
	 PreOrderTraverse(T->rchild);//递归遍历右子树
	}
	return 0; 
}

int InOrderTraverse(BiTree T){//中序遍历二叉树(左根右)
	if(T == NULL) return 1;//空二叉树
	else {
	 InOrderTraverse(T->lchild);//递归遍历左子树 
//		visit();//访问根节点，具体要这个函数做什么
	 InOrderTraverse(T->rchild);//递归遍历右子树
	}
	return 0; 
}

int PostOrderTraverse(BiTree T){//后序遍历二叉树(左右根)
	if(T == NULL) return 1;//空二叉树
	else {
	 PostOrderTraverse(T->lchild);//递归遍历左子树 
	 PostOrderTraverse(T->rchild);//递归遍历右子树
//		visit();//访问根节点，具体要这个函数做什么
	}
	return 0; 
}

//int InOrderTraverse(BiTree T) {//中序遍历二叉树的非递归算法，运用栈 
//	BiTree p;
//	InitStack(S);//初始化栈 
//	p=T;
//	while (p || !StackEmpty(S)){//栈不为空或p不为NULL，则循环 
//		if(p) {//p不为NULL则进栈 
//			Push(S,p);
//			p = p->lchild;
//		}else {
//			Pop(S,q);
//			printf("%c",q->data); 
//			p = q->rchild;
//		} 
//	}
//	return 0;
//}

//int LevelOrder(BiTree b){//二叉树层次遍历算法，运用队列 
//	BiTree p;
//	SqQueue *qu;
//	InitQueue(qu);//初始化队列 
//	enQueue(qu,b);//根节点指针进入队列 
//	while(!QueueEmpty(qu)){//队不为空，则循环 
//		deQueue(qu,p);//出队结点p 
//		printf("%c",p->data);//访问结点p 
//		if(p->lchild != NULL) enQueue(qu,p->lchild);//存在左孩子时将其入队 
//		if(p->rchild != NULL) enQueue(qu,p->rchild);//存在右孩子时将其入队 
//	}
//}

int CreateBiTree(BiTree *T){//先序建立二叉树 
	char ch;
	scanf("%c",&ch);
	if(ch == "#") *T = NULL;//#用来区别空结点 
	else {
		if(!(*T = malloc(sizeof(BiNode)))) return 1;
		(*T)->data = ch;
		CreateBiTree(&((*T)->lchild));
		CreateBiTree(&((*T)->rchild));
	}
	return 0;
} 

int Copy(BiTree T,BiTree *NewT){//先序复制二叉树 
	if(T == NULL){
		*NewT = NULL;//空树为NULL 
		return 0;
	}else {
		*NewT = malloc(sizeof(BiNode));
		(*NewT)->data = T->data;
		Copy(T->lchild,&((*NewT)->lchild));
		Copy(T->lchild,&((*NewT)->rchild));
	}	
}

int Depth(BiTree T){//计算二叉树的深度 
	if(T == NULL) return 0;//空树返回0 
	else {
		int m = Depth(T->lchild); 
		int n = Depth(T->rchild);
		if(m > n) return m + 1;
		else return n + 1;
	}
}

int NodeCount(BiTree T){//计算二叉树结点总数 
	if(T == NULL) return 0;
	else return NodeCount(T->lchild) + NodeCount(T->rchild) + 1;
} 

int LeadCount(BiTree T){//计算二叉树叶子结点总数 
	if(T == NULL) return 0;
	if(T->lchild == NULL && T->rchild == NULL) return 1; 
	else return LeadCount(T->lchild) + LeadCount(T->rchild);
} 

int main() {//test

    return 0;

} 
