#include<iostream>
using namespace std;

typedef struct LNode
{
    char data;
    struct LNode *next;
}LNode,*LinkList;


void shuru(LinkList L,LinkList s)
{
    int n;
    LNode *p;
    cout<<"������Ԫ�صĸ�����";
    cin>>n;
	cout<<"�������1��Ԫ�أ�";
	cin>>s->data;
    for(int i=1;i<n;i++)
    {
        p=new LNode;
		cout<<"�������"<<i+1<<"��Ԫ�أ�";
        cin>>p->data;
        p->next=L;
		s->next=p;
		s=p;
    }
}

void shuchu(LinkList L,LinkList s)
{
    int i=1;
    LNode *p;
    cout<<"��Ϊ";
    for(p=L;p->next!=L;p=p->next)
        cout<<p->data<<" ";
	cout<<p->data;
    cout<<endl;    
    for(p=L;p!=s;p=p->next)
         i++;
    cout<<"sָ���"<<i<<"�����"<<endl;
    cout<<"s��ֵΪ"<<s->data<<endl;                  
}



void main()
{
    LinkList L=new LNode;
	LinkList s;
    int flag=1;
    char n;
    //chushihua(&L);
    s=L;
    shuru(L,s);
    shuchu(L,s);
    while(flag)
    {
         cout<<"1.�ƶ�s��λ��"<<endl;
         cout<<"2.ɾ��s��ֱ��ǰ��"<<endl;
         cout<<"0.�˳�"<<endl;
         cout<<"��ѡ��";
         cin>>n;
         switch(n)
         {
          case'1':
			  { int t;
              cout<<"������s�ƶ���λ��:";
              cin>>t;
              for(int i=0;i<t;i++)
                   s=s->next;
			  }
			  shuchu(L,s);break;
          case'2':
			  {
               LNode *r,*p;
               for(r=s,p=r->next;p->next!=s;r=r->next,p=p->next);
			    r->next=s;
                delete p;
				  
			  }
			  
			  shuchu(L,s);break;
          case '0':flag=0;break;
	  default:cout<<"�����������������룡"<<endl;
         }
    }
}