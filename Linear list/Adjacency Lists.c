#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100//��ඥ���� 
typedef char VerTexType;//���õ����������λ�ַ��� 

typedef struct ArcNode{//�߽�� 
	int adjvex;//�ñ���ָ��Ķ����λ�� 
	struct ArcNode *nextarc;//ָ����һ���ߵ�ָ�� 
//	OtherInfo info;//�ͱ���ص���Ϣ 
}ArcNode;

typedef struct VNode{
	VerTexType data;//������Ϣ 
	ArcNode *firstars;//ָ���һ�������ö���ıߵ�ָ�� 
}VNode,AdjList[MAXSIZE]; 


typedef struct {
	AdjList vertices;//vertices--vertes�ĸ���
	int vexnum,arcnum;//ͼ��ǰ�������ͻ��� 
}ALGraph;

int CreateUDG(ALGraph *G){
	printf("����:�ܶ����� �ܱ���\n");
	scanf("%d %d",&G->vexnum,&G->arcnum);
	getchar();
	int i,j,k;
	for(i = 0;i < G->vexnum;i++){//������㣬�����ͷ���� 
		printf("���붥���ֵ\n");
		scanf("%c",&G->vertices[i].data);
		getchar();
		G->vertices[i].firstars = NULL;//��ʼ����ͷ����ָ���� 
	}
	for(i = 0;i < G->vexnum;i++){
		printf("��������һ�����������Ķ���(�м���ո�):"); 
		VerTexType v1,v2;
		scanf("%c %c",&v1,&v2);
		j = LocateVex(*G,v1);
		k = LocateVex(*G,v2);//ȷ��v1��v2��G�е�λ��
		ArcNode *p1 = malloc(sizeof(ArcNode)); //����һ���µı߽�� 
		p1->adjvex = k;//�ڽӱ����λk 
		p1->nextarc = G->vertices[j].firstars;//���½��ͷ���붥��vj�ı߱�ͷ 
		G->vertices[j].firstars = p1;
		
		ArcNode *p2 = malloc(sizeof(ArcNode)); //����һ���µı߽�� 
		p2->adjvex = j;//�ڽӱ����λj
		p2->nextarc = G->vertices[k].firstars;//���½��ͷ���붥��vk�ı߱�ͷ
		G->vertices[k].firstars = p2;	
	}
	return 0;
}



int main() {//test

    return 0;
} 
