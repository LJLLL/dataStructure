#include <iostream>
using namespace std;

typedef struct BTN
{
	char a;
	struct BTN *lchild,*rchild;
}BTN,*BT;

void shuru(BT &T);
int gaodu(BT &T);

void main()
{
	BT T;
	cout<<"����������(Ĭ��˳��Ϊǰ�����),�ս����'#'��ʾ��"<<endl;
	shuru(T);
	cout<<"�������ĸ߶�Ϊ��"<<gaodu(T)<<endl;
}

void shuru(BT &T)
{
	char ch;
	cin>>ch;
	if(ch=='#')
		T=NULL;
	else
	{
		T=new BTN;
		T->a=ch;
		shuru(T->lchild);
		shuru(T->rchild);
	}
}

int gaodu(BT &T)
{
	int h1,h2;
	if(T)
	{
	    if(T->lchild==NULL&&T->rchild==NULL)
		    return 1;
	    else
		{
		    h1=gaodu(T->lchild);
		    h2=gaodu(T->rchild);
		}
	    if(h1>h2) return h1+1;
		else return h2+1;
	}
	else 
		return 0;
}