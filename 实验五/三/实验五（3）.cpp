#include<iostream>
using namespace std;
typedef struct BTN
{
	char ch;
	BTN *lchild;
	BTN *rchild;
}BTN,*BT;

void shuru(BT &T)
{
	char ch;
	cin>>ch;
	if(ch=='#')
	{
		T=NULL;
	}
	else
	{
		T=new BTN;
		T->ch=ch;
		shuru(T->lchild);
		shuru(T->rchild);
	}
}

void qian(BT &T)
{
	int t=-1;
	BT st[100];
	BT p=T;
	if(p==NULL)
		return;
	do
	{
		while(p!=NULL)
		{
			cout<<p->ch<<" ";
			st[++t]=p;
			p=p->lchild;
		}
		p=st[t--];
		p=p->rchild;
	}while(t>=0||p!=NULL);

}

void zhong(BT &T)
{
	int t=-1;
	BT st[100];
	BT p=T;
	if(p==NULL)
		return;
	do
	{
		while(p!=NULL)
		{
			st[++t]=p;
			p=p->lchild;
		}	
		p=st[t--];
        cout<<p->ch<<" ";	
		p=p->rchild;
	}while(t>=0||p!=NULL);
}

void hou(BT &T)
{
	char c;
	int t=-1;
	int flag=1;
	BT st[100];
	BT p=T;
	if(p==NULL)
		return;
	do
	{
		while(p!=NULL)
		{
			st[++t]=p;
			p=p->lchild;
		}
	    p=st[t];
	    p=p->rchild;
		if(p==NULL)
		{
			cin>>c;
			p=st[t--];
            cout<<p->ch<<" ";
			while(p==st[t]->rchild)
			{
				cin>>c;
				p=st[t--];
                cout<<p->ch<<" ";
			}
				p=st[t]->rchild;
		}
	}while(t>=0);
}

void main()
{
	BT T;
	cout<<"����������(Ĭ��˳��Ϊǰ�����),�ս����'#'��ʾ"<<endl;
	shuru(T);
	cout<<"ǰ�����Ϊ��";
	qian(T);
	cout<<endl;
	cout<<"�������Ϊ��";
	zhong(T);
	cout<<endl;
	cout<<"ǰ�����Ϊ��";
	hou(T);
	cout<<endl;
}
