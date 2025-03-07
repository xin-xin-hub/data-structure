#include<stdio.h>
#include<stdlib.h>
#define MaxInt 32767//表示极大值，即无穷 
#define MAXSIZE 100//最大顶点数 
typedef char VerTexType;//设置点的数据类型位字符型 
typedef int ArcType;//假设边的权值类型位整型 

typedef struct{
	VerTexType vexs[MAXSIZE];//顶点表
	ArcType arcs[MAXSIZE][MAXSIZE];//邻接矩阵 
	int vexnum,arcnum;//图的当前点数和边数 
}AMGraph; 

int CreateUDN(AMGraph *G){//邻接矩阵创建无向网 
	printf("输入:总顶点数 总边数\n");
	scanf("%d %d",&G->vexnum,&G->arcnum);
	getchar(); 
	int i,j,k;
	for(i = 0;i < G->vexnum;i++){
		scanf("%c",&G->vexs[i]);//依次输入点的信息
		getchar(); 
	}
	for(i = 0;i < G->vexnum;i++){//初始化邻接矩阵 
		for(j = 0;j< G->vexnum;j++){
			G->arcs[i][j] = MaxInt;//边的权值均置为极大值 
		}
	}
	for(i = 0;i < G->arcnum;i++){
		printf("依次输入一条边所依附的顶点(中间隔空格):"); 
		VerTexType v1,v2;
		scanf("%c %c",&v1,&v2);
		getchar();
		j = LocateVex(*G,v1);
		k = LocateVex(*G,v2);//确定v1和v2在G中的位置 
		int w;
		scanf("%d",&w);
		getchar();
		G->arcs[j][k] = w;//边<v1,v2>的权值置为w 
		G->arcs[k][j] = G->arcs[j][k];
	} 
	return 0; 
}

int main() {//test

    return 0;
} 
