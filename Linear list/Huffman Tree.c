#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
#define ElemType int 
typedef struct HuffmanTree {//��������������ʼ��n����㣬����Ҫ2n-1�����ռ� 
	int weight;//����Ȩ�� 
	int parent,lch,rch;
}HTNode,*HuffmanTree;

void Select(HuffmanTree HT,int i,int *s1, int *s2) {//δ��� 
	int weightmin;
}

void CreatHuffmanTree (HuffmanTree *HT,int n){//�����������
	if(n <= 1) return;
	int m = 2*n-1;//���鹲2n-1Ԫ��
	*HT = malloc((m + 1) * sizeof(HTNode));
	int i;
	for(i = 1;i <= m;++i){//��2n-1��Ԫ�ص�lch��rch��parent��ʼ��Ϊ0 
		(*HT)[i].lch = 0;
		(*HT)[i].rch = 0;
		(*HT)[i].parent = 0; 
	}
	
	for(i = 1;i <= n;++i) {
		scanf("%d",&(*HT)[i].weight);
	}
	//��ʼ����������ʼ������������
	for(i = n + 1;i <= m;i++){//�ϲ�ѡ���ĵĽ�����n-1����㣬����Huffman�� 
		int s1,s2;
		Select(*HT,i-1,&s1,&s2);//��HT[k](1 <= k <= i-1)��ѡ��������˫����Ϊ0 
		//��Ȩֵ��С�Ľ�㣬������������HT�е����s1��s2
		(*HT)[s1].parent = i;//��ʾ��F��ɾ��s1,s2 
		(*HT)[s2].parent = i;
		(*HT)[i].lch = s1;
		(*HT)[i].rch = s2;
		(*HT)[i].weight = (*HT)[s1].weight + (*HT)[s2].weight;//iȨֵΪ���Һ���֮�� 
		 
	} 
}

int main() {//test

    return 0;
} 
