#include <iostream>
using namespace std;

#define MAXSIZE 100
typedef struct
{
	char *base;
	char *top;
	int stacksize;
}SS;

void chushihua(SS &S)
{
	S.base=new char[MAXSIZE];
	if(!S.base) cout<<"��ʼ��ʧ��"<<endl;
	S.top=S.base;
	S.stacksize=MAXSIZE;
}

int ruzhan(SS &S)
{
	if(S.top-S.base==S.stacksize) return 0;
	S.top++;
	return 1;
}

int chuzhan(SS &S)
{
	if(S.top==S.base) return 1;
    S.top--;
	return 0;
}

main()
{
	int a=0,b=0;
	SS S;
	chushihua(S);
	char s[100];
	cout<<"������һ������ʽ��"<<endl;
	gets(s);
	int len=strlen(s);
	for(int i=0;i<=len;i++)
	{
		if(s[i]=='(')
			ruzhan(S);
		if(s[i]==')')
			a=chuzhan(S);
		if(a==1)
			break;
	}
	b=chuzhan(S);
	if(a==0&&b==1)
	{
		cout<<"ƥ��"<<endl;
	}
	else
       cout<<"��ƥ��"<<endl;

}