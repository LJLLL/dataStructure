#include<iostream>
using namespace std; 
  
typedef struct List
{
	char a;
	List *next;
}List,*LL;

void shuru(LL A)
{
	LL p;
	int n;
	p=A;
	cout<<"������Ԫ�صĸ�����";
    cin>>n;
	for(int i=0;i<n;i++)
	{
		LL q=new List;
		q->next=A;
		cout<<"�������"<<i+1<<"��Ԫ�أ�";
		cin>>q->a;
		p->next=q;
		p=p->next;
	}
}

void shuchu(LL A)
{
	LL p;
	for(p=A;(p->next!=A)&&(p->next!=NULL);p=p->next)
	{
		cout<<p->next->a<<" ";
	}
    cout<<" "<<endl;
}

void fenlei(LL A,LL B,LL C)
{
	LL p,a,b,c;
    a=A;
	b=B;
	c=C;
	p=A->next;
	A->next=NULL;
	while(p!=A)
	{
	    if((p->a>='0')&&(p->a<='9'))
		{
		    b->next=p;
		    b=b->next;
			p=p->next;
		    b->next=B;    
		}
		else if(((p->a>='a')&&(p->a<='z'))||((p->a>='A')&&(p->a<='Z')))
		{
		    c->next=p;
		    c=c->next;
			p=p->next;
		    c->next=C;
		    
		}
		else
		{
			a->next=p;
			a=a->next;
		    p=p->next;
			a->next=A;
		}

	}

}

main()
{
	LL A=new List;
	A->next=NULL;
    LL B=new List;
	B->next=NULL;
	LL C=new List;
	C->next=NULL;
    shuru(A);
	cout<<"�������Ԫ��Ϊ��";
	shuchu(A);
	fenlei(A,B,C);
	cout<<"��������Ԫ��Ϊ��";
	shuchu(A);
	cout<<"��������Ԫ��Ϊ��";
	shuchu(B);
	cout<<"��ĸ����Ԫ��Ϊ��";
	shuchu(C);
}