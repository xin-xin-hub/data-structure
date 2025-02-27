#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 255
typedef struct SString{
	char ch[MAXSIZE + 1];//�±�Ϊ0�����洢 
	int length;//���� 
}SString;

void get_next (SString *T,int next[]){//��ģʽ��T���next���� 
	int j,i;//������������T��Ѱ������ǰ��׺ 
	next[1] = 0;//��һ���ַ�ǰ���ַ�������Ϊ������ѭ��Ѱ������ǰ��׺������ 
	j = 0;//��T�ĵ�һ���ַ�����ʼ 
	i = 1;//��������ѭ��Ѱ������ǰ��׺
	while (T->length > i){//ע��:next[i]��ֵ��ʾ�±�Ϊi���ַ�ǰ���ַ�������ǰ��׺�ĳ��ȡ�
		if(j == 0 || T->ch[i] == T->ch[j]){//��jΪ0ʱ����i+1���ַ�ǰû������ǰ��׺ 
			i++;//��jλ���ַ���kλ���ַ����ʱ 
			j++;//��k��ֵ+1������next[j+1]
			next[i] = j;//Ҳ��������ǰ��׺�ĳ���+1 
		}else {//��jλ���ַ���kλ���ַ������ʱ
			j = next[j];//��j����Ϊnext[j]���൱�ڽ�ǰ׺��ǰ��С���ڼ���������ǰ��׺ 
		}//������ݺ��jλ�õ��ַ�����iλ���ַ�����ȣ�������ҵ�������ǰ��׺ 
	}
}

int Index_KMP (SString *S,SString *T,int pos){
	int next[MAXSIZE];
	get_next(T,next); 
	int i = pos;
	int j = 1;//SString�ṹ���±�Ϊ0�����洢
	while (i <= S->length && j <= T->length){
		if(j == 0 || S->ch[i] == T->ch[j]){//��j���ݵ�j=0ʱ���ڻ��ݾͱ��-1����������Ҫ��j==0���ж����� 
			i++;
			j++; 
		}else {
			j = next[j];//���� 
		} 
	}
	if(j > T->length) return i - T->length;
	else return 0; 
}

int main() {//test
    SString S = { .ch = {0, 'a', 'b', 'a', 'b', 'a', 'a', 'b', 'a', 'c'}, .length = 9 }; // ����"ababaabac"
    SString T = { .ch = {0, 'a', 'b', 'a', 'c'}, .length = 4 }; // ģʽ��"abac"

    int pos = Index_KMP(&S, &T, 1);
    if (pos != 0)
        printf("ƥ��ɹ�����ʼλ��Ϊ��%d\n", pos);
    else
        printf("ƥ��ʧ��\n");
    return 0;

} 
