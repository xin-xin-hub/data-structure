#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100//最多顶点数 
typedef char VerTexType;//设置点的数据类型位字符型 

typedef struct ArcNode{//边结点 
	int adjvex;//该边所指向的顶点的位置 
	struct ArcNode *nextarc;//指向下一条边的指针 
//	OtherInfo info;//和边相关的信息 
}ArcNode;

typedef struct VNode{
	VerTexType data;//顶点信息 
	ArcNode *firstars;//指向第一条依附该顶点的边的指针 
}VNode,AdjList[MAXSIZE]; 


typedef struct {
	AdjList vertices;//vertices--vertes的复数
	int vexnum,arcnum;//图当前顶点数和弧数 
}ALGraph;

int CreateUDG(ALGraph *G){
	printf("输入:总顶点数 总边数\n");
	scanf("%d %d",&G->vexnum,&G->arcnum);
	getchar();
	int i,j,k;
	for(i = 0;i < G->vexnum;i++){//输入各点，构造表头结点表 
		printf("输入顶点的值\n");
		scanf("%c",&G->vertices[i].data);
		getchar();
		G->vertices[i].firstars = NULL;//初始化表头结点的指针域 
	}
	for(i = 0;i < G->vexnum;i++){
		printf("依次输入一条边所依附的顶点(中间隔空格):"); 
		VerTexType v1,v2;
		scanf("%c %c",&v1,&v2);
		j = LocateVex(*G,v1);
		k = LocateVex(*G,v2);//确定v1和v2在G中的位置
		ArcNode *p1 = malloc(sizeof(ArcNode)); //生成一个新的边结点 
		p1->adjvex = k;//邻接表序号位k 
		p1->nextarc = G->vertices[j].firstars;//将新结点头插入顶点vj的边表头 
		G->vertices[j].firstars = p1;
		
		ArcNode *p2 = malloc(sizeof(ArcNode)); //生成一个新的边结点 
		p2->adjvex = j;//邻接表序号位j
		p2->nextarc = G->vertices[k].firstars;//将新结点头插入顶点vk的边表头
		G->vertices[k].firstars = p2;	
	}
	return 0;
}



int main() {//test

    return 0;
} 
