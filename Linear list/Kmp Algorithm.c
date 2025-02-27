#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 255
typedef struct SString{
	char ch[MAXSIZE + 1];//下标为0处不存储 
	int length;//串长 
}SString;

void get_next (SString *T,int next[]){//由模式串T求出next数组 
	int j,i;//这两个变量在T中寻找最长相等前后缀 
	next[1] = 0;//第一个字符前无字符串，且为是下面循环寻找最长相等前后缀的特例 
	j = 0;//从T的第一个字符串开始 
	i = 1;//方便下面循环寻找最长相等前后缀
	while (T->length > i){//注意:next[i]的值表示下标为i的字符前的字符串最长相等前后缀的长度。
		if(j == 0 || T->ch[i] == T->ch[j]){//当j为0时代表i+1的字符前没有最长相等前后缀 
			i++;//当j位置字符与k位置字符相等时 
			j++;//将k的值+1并赋给next[j+1]
			next[i] = j;//也就是最长相等前后缀的长度+1 
		}else {//当j位置字符与k位置字符不相等时
			j = next[j];//将j回溯为next[j]，相当于将前缀往前缩小，在继续找最长相等前后缀 
		}//如果回溯后的j位置的字符串与i位置字符串相等，则代表找到了最长相等前后缀 
	}
}

int Index_KMP (SString *S,SString *T,int pos){
	int next[MAXSIZE];
	get_next(T,next); 
	int i = pos;
	int j = 1;//SString结构体下标为0处不存储
	while (i <= S->length && j <= T->length){
		if(j == 0 || S->ch[i] == T->ch[j]){//当j回溯到j=0时候在回溯就变成-1，所以这里要加j==0的判断条件 
			i++;
			j++; 
		}else {
			j = next[j];//回溯 
		} 
	}
	if(j > T->length) return i - T->length;
	else return 0; 
}

int main() {//test
    SString S = { .ch = {0, 'a', 'b', 'a', 'b', 'a', 'a', 'b', 'a', 'c'}, .length = 9 }; // 主串"ababaabac"
    SString T = { .ch = {0, 'a', 'b', 'a', 'c'}, .length = 4 }; // 模式串"abac"

    int pos = Index_KMP(&S, &T, 1);
    if (pos != 0)
        printf("匹配成功，起始位置为：%d\n", pos);
    else
        printf("匹配失败\n");
    return 0;

} 
