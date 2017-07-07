#include<iostream>
using namespace std;

typedef struct QNode
{
	int data;
	struct QNode *next;
}QN,*QQ;

typedef struct
{
	QQ rear;
}LQ;

LQ chushihua(LQ &Q)
{
	Q.rear=new QN;
	Q.rear->next=Q.rear;
	return Q;
}

int rudiu(LQ &Q,int &e)
{
	QQ p=new QN;
	p->data=e;
	p->next=Q.rear->next;
	Q.rear->next=p;
	Q.rear=p;
	return 1;
}

int chudiu(LQ &Q,int &e)
{
	if(Q.rear==Q.rear->next)
		return 0;
	else
	{
		QQ p=Q.rear->next->next;
		e=p->data;
		if(Q.rear==p)
		{
			Q.rear=Q.rear->next;
			Q.rear->next =Q.rear;
		}
		else
	        Q.rear->next->next=p->next;
	    delete p;
	}
	return 1;
}

void shuchu(LQ Q)
{
	if(Q.rear->next==Q.rear)
	{cout<<"��Ϊ�գ�"<<endl;return;}
	for(QQ p=Q.rear->next;p!=Q.rear;p=p->next)
		cout<<p->next->data<<" ";
	cout<<endl;
}

main()
{
	int n,e,a,i,j,flag=1,t;
	LQ Q;
	chushihua(Q);
	while(flag)
	{
	    cout<<"���ܱ�"<<endl;
	    cout<<"1.���"<<endl;
	    cout<<"2.����"<<endl;
		cout<<"3.��ʾ����Ԫ��"<<endl;
	    cout<<"0.�˳�"<<endl;
	    cout<<"��ѡ��";
	    cin>>a;
		switch(a)
		{
		case 1:
             cout<<"���������Ԫ�صĸ�����";
	         cin>>n;
			 cout<<"������"<<n<<"��Ԫ�أ�";
	         for(i=0;i<n;i++)
			 {
		        cin>>e;
	            rudiu(Q,e);
			 }
			 break;
		case 2:
	         cout<<"�������Ԫ�صĸ���:";
			 cin>>n;
			 cout<<"���ӵ�Ԫ��Ϊ��";
           	 for(j=0;j<n;j++)
			 {
		          t=chudiu(Q,e);
				  if(t==0)
				  {cout<<"��Ϊ�գ�"<<endl;break;}
				  else
		              cout<<e<<" ";
			 }
          	 cout<<endl;
			 break;
		case 3:
			cout<<"����Ԫ��Ϊ��";
            shuchu(Q);
			break;
		case 0:
			flag=0;
			break;
		}
	}
}

