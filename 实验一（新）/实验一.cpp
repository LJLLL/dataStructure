#include<iostream>
using namespace std;
#define arrsize 100

typedef struct
{
	int *elenum;
	int length;
}Sqlist;

bool chuangjian(Sqlist &L)
{
	L.elenum=new int[arrsize];
	if(!L.elenum)
		return false;  
	L.length=0;
	return true;
}

void pailie(Sqlist &L)
{
	for(int i=0;i<L.length;i++)
		cout<<L.elenum[i]<<" ";
	cout<<endl;
}

void shuru(Sqlist &L)
{
	int x;
	GOTO:cout<<"���������Ա���Ԫ�صĸ���(0-100)��";
    cin>>x;
	if(x>0&&x<=arrsize)
	{
		for(int i=0;i<x;i++)
		{
			cout<<"�������"<<i+1<<"��Ԫ��:";
			cin>>L.elenum[i];
		}
		L.length=x;
	}
	else
	{
		cout<<"����������ֲ��Ϸ�������������"<<endl;
		goto GOTO;
	}
}

void paixu(Sqlist &L)
{
	for(int i=0;i<L.length-1;i++)
	{
		for(int j=0;j<L.length-1-i;j++)
		{
			if(L.elenum[j]>L.elenum[j+1])
			{
				int t=L.elenum[j];
				L.elenum[j]=L.elenum[j+1];
				L.elenum[j+1]=t;
			}
		}
	}
	pailie(L);

}

void tianjia(Sqlist &L)
{
    int x;
	cout<<"��������Ҫ��ӵ�Ԫ�أ�";
	cin>>x;
	if((L.length+1)>100)
	{
		cout<<"Ԫ�س����޶�����"<<endl;
	}
	else
	{
		L.length++;
		for(int i=L.length-2;i>=0;i--)
		{
			if(x>L.elenum[i])
			{
				L.elenum[i+1]=x;
				break;
			}
			else
				L.elenum[i+1]=L.elenum[i];
		}
		if(x<L.elenum[0])
			L.elenum[0]=x;
	    pailie(L);
	}
}

void youyi(Sqlist &L)
{
	int n;
	cout<<"���������Ƶ�λ��:";
	cin>>n;
	while(n>=L.length)
		n=n-L.length;
	for(;n>0;n--)
	{
		int p=L.elenum[L.length-1];
		for(int i=L.length-1;i>0;i--)
		{
			L.elenum[i]=L.elenum[i-1];
		}
		L.elenum[0]=p;
	}
	pailie(L);
}

void nizhi(Sqlist &L)
{
	for(int i=0,j=L.length-1;i<j;i++,j--)
	{
	    int	p=L.elenum[i];
		L.elenum[i]=L.elenum[j];
		L.elenum[j]=p;
	}
	pailie(L);
}

main()
{
	char c;
	int flag=1;
	Sqlist L;
	chuangjian(L);
	shuru(L);
	paixu(L);
	while(flag)
	{
		GOTO1:cout<<"    ���ܱ�"<<endl;
     	cout<<"1.Ϊ���Ա����Ԫ��"<<endl;
    	cout<<"2.�����Ա�����"<<endl;
    	cout<<"3.�����Ա�����"<<endl;
    	cout<<"0.�˳�"<<endl;
		cin>>c;
		if(c>='0'&&c<='3')
		{
           switch(c)
		   {
		   case'1':tianjia(L);break;
		   case'2':youyi(L);break;
		   case'3':nizhi(L);break;
		   case'0':flag=0;
		   }
		}
		else
		{
			cout<<"�������ѡ����ڣ����������룡"<<endl;
			goto GOTO1;
		}
	}
} 