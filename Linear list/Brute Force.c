#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 255
typedef struct SString{//顺序字符串 
	char ch[MAXSIZE + 1];//下标为0处不存储 
	int length;//串长 
}SString;

int Index_BF (SString *S,SString *T,int pos){//BF算法//pos为主串开始匹配的位置 
	int i=pos,j=1;//i为主串下标，j为子串下标 ,从1开始 
	while (i <= S->length && j <= T->length){
		if(S->ch[i] == T->ch[j]) {
			i++;
			j++;
		}else {
			i = i - j + 2;
			j = 1;
		} 
	}
	if(j > T->length) return i - T->length;//根据上面的while循环可知i - T->length为匹配字符串的第一个字符的下标
	else return 0;//模式匹配失败 
} 

int main() {//test
	SString S, T;

	return 0;
} 
