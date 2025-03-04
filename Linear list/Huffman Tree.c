#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
#define ElemType int 
typedef struct HuffmanTree {//哈夫曼树，若初始有n个结点，则需要2n-1个结点空间 
	int weight;//结点的权重 
	int parent,lch,rch;
}HTNode,*HuffmanTree;

void Select(HuffmanTree HT,int i,int *s1, int *s2) {//未完成 
	int weightmin;
}

void CreatHuffmanTree (HuffmanTree *HT,int n){//构造哈夫曼树
	if(n <= 1) return;
	int m = 2*n-1;//数组共2n-1元素
	*HT = malloc((m + 1) * sizeof(HTNode));
	int i;
	for(i = 1;i <= m;++i){//将2n-1个元素的lch、rch、parent初始化为0 
		(*HT)[i].lch = 0;
		(*HT)[i].rch = 0;
		(*HT)[i].parent = 0; 
	}
	
	for(i = 1;i <= n;++i) {
		scanf("%d",&(*HT)[i].weight);
	}
	//初始化结束，开始创建哈夫曼树
	for(i = n + 1;i <= m;i++){//合并选出的的结点产生n-1个结点，构造Huffman树 
		int s1,s2;
		Select(*HT,i-1,&s1,&s2);//在HT[k](1 <= k <= i-1)中选择两个其双亲域为0 
		//且权值最小的结点，并返回它们在HT中的序号s1和s2
		(*HT)[s1].parent = i;//表示从F中删除s1,s2 
		(*HT)[s2].parent = i;
		(*HT)[i].lch = s1;
		(*HT)[i].rch = s2;
		(*HT)[i].weight = (*HT)[s1].weight + (*HT)[s2].weight;//i权值为左右孩子之和 
		 
	} 
}

int main() {//test

    return 0;
} 
