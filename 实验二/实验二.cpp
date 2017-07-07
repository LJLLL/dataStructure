#include <iostream>
#include <stdlib.h>
using namespace std; 

typedef struct LNode
{
	int data;
	struct LNode *next;
}LNode,*LinkList;

void chushihua(LinkList *L)
{
	(*L) = (LNode*)malloc(sizeof(LNode));
	(*L)->next=NULL;
}

void shuchu(LinkList L)
{
	LNode *r;
	r=L;
	cout<<"Ԫ��Ϊ��";
	for(;r->next!=NULL;r=r->next)
	    cout<<r->next->data<<" ";
	cout<<endl;
}

void paixu(LinkList L)
{
	LNode *m,*n;
	for(m=L->next;m->next!=NULL;m=m->next)
	{
		for(n=m->next;n!=NULL;n=n->next)
		{
			if((m->data)>(n->data))
			{
				int t=m->data;
				m->data=n->data;
				n->data=t;
			}
		}
	}
}

void shuru(LinkList L)
{
	int n;
	LNode *p,*r;
	cout<<"������Ԫ�صĸ�����";
	cin>>n;
	r=L;
	for(int i=0;i<n;i++)
	{
		p = (LNode *)malloc(sizeof(LNode));
    
		p->next=NULL;
		cout<<"�������"<<i+1<<"��Ԫ�أ�";
		cin>>p->data;
		r->next=p;
		r=p;
	}
	paixu(L);
}

void tianjia(LinkList L)
{
	LNode *r,*p;
	int f=1;
	r=L;
    p = (LNode *)malloc(sizeof(LNode));
	p->next=NULL;
	cout<<"��������Ҫ�����Ԫ�أ�";
	cin>>p->data;
	for(r;r->next!=NULL;r=r->next)
	{
		if(p->data<=r->next->data)
		{
		    p->next=r->next;
			r->next=p;
			f=0;
			break;
		}
	}
	if(f)
		r->next=p;
	shuchu(L);
}

void nizhi(LinkList L)
{
	LNode *p,*q,*r;
	int flag=1;
	if((L!=NULL)&&(L->next!=NULL))
	{
		p=L->next;
		q=p->next;
		r=q->next;
		for(;r!=NULL;p=q,q=r,r=r->next)
		{
			if(flag==1)
			{p->next=NULL;flag=0;}
			q->next=p;
			L->next=q;
		}
		q->next=p;
		L->next=q;
	}
	shuchu(L);
}

void hebing(LinkList L)
{
	LNode *A;
	chushihua(&A);
	shuru(A);
	cout<<"��һ";
	shuchu(L);
	cout<<"���";
	shuchu(A);
	LNode *C;
	chushihua(&C);
	LNode *p,*q,*r;
	p=L->next;
	q=A->next;
	r=C;
    while(p&&q)
	{
        if((p->data)<=(q->data))
		{
			r->next=p;
			p=p->next;
		}
		else
		{
			r->next=q;
			q=q->next;
		}
		r=r->next;
	}
	if(p!=NULL)
		r->next=p;
	if(q!=NULL)
		r->next=q;
	nizhi(C);
	free(A);
	free(L);
}





main()
{
	LNode *L;
	int flag=1;
	char a;
	chushihua(&L);
    shuru(L);
	shuchu(L);
	while(flag)
	{
	    cout<<"     ���ܱ�"<<endl;
	    cout<<"1.Ϊ�������Ԫ��"<<endl;
	    cout<<"2.����������"<<endl;
	    cout<<"3.�½�һ�������������ϲ�"<<endl;
	    cout<<"0.�˳�"<<endl;
	    cout<<"��ѡ����Ҫ���е���Ŀ��";
	    cin>>a;
	    switch(a)
		{
	     case '1':tianjia(L);break;
		 case '2':nizhi(L);break;
		 case '3':hebing(L);break;
		 case '0':flag=0;break;
		 default:cout<<"�����������������룡"<<endl;
		}
	}
}