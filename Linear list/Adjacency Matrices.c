#include<stdio.h>
#include<stdlib.h>
#define MaxInt 32767//��ʾ����ֵ�������� 
#define MAXSIZE 100//��󶥵��� 
typedef char VerTexType;//���õ����������λ�ַ��� 
typedef int ArcType;//����ߵ�Ȩֵ����λ���� 

typedef struct{
	VerTexType vexs[MAXSIZE];//�����
	ArcType arcs[MAXSIZE][MAXSIZE];//�ڽӾ��� 
	int vexnum,arcnum;//ͼ�ĵ�ǰ�����ͱ��� 
}AMGraph; 

int CreateUDN(AMGraph *G){//�ڽӾ��󴴽������� 
	printf("����:�ܶ����� �ܱ���\n");
	scanf("%d %d",&G->vexnum,&G->arcnum);
	getchar(); 
	int i,j,k;
	for(i = 0;i < G->vexnum;i++){
		scanf("%c",&G->vexs[i]);//������������Ϣ
		getchar(); 
	}
	for(i = 0;i < G->vexnum;i++){//��ʼ���ڽӾ��� 
		for(j = 0;j< G->vexnum;j++){
			G->arcs[i][j] = MaxInt;//�ߵ�Ȩֵ����Ϊ����ֵ 
		}
	}
	for(i = 0;i < G->arcnum;i++){
		printf("��������һ�����������Ķ���(�м���ո�):"); 
		VerTexType v1,v2;
		scanf("%c %c",&v1,&v2);
		getchar();
		j = LocateVex(*G,v1);
		k = LocateVex(*G,v2);//ȷ��v1��v2��G�е�λ�� 
		int w;
		scanf("%d",&w);
		getchar();
		G->arcs[j][k] = w;//��<v1,v2>��Ȩֵ��Ϊw 
		G->arcs[k][j] = G->arcs[j][k];
	} 
	return 0; 
}

int main() {//test

    return 0;
} 
