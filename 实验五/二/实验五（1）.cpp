#include<iostream>
using namespace std;

void bianli(int T[],int n)
{
	int m,i=1,f1=1,f2=1,w=n,j;

	if(n>0)
	{
		cout<<T[i]<<" ";
		m=n;
		while(m>0)
		{
			j=2*i;
		     if(j<=w&&f2==1)
			 {
				 i=j;
				 cout<<T[i]<<" ";
				 m--;
				 if(2*i>w)
				 {
					 f2=0;
					 i=i/2;
				 }
			 }
			 else if(j<=w-1&&f2==0)
			 {
				 i=j+1;
				 cout<<T[i]<<" ";
				 m--;
				 if(2*i<w)
					 f2=1;
				 else
				 {
					 while(i%2==1)
					 {
						 i--;
						 i=i/2;
						 if(i<1)
							 return;
					 }
					 i=i/2;
				 }
			 }
		}
	}
	else
		cout<<"������Ϊ��"<<endl;

}

void main()
{
	int n;
	cout<<"�����������"<<endl;
	cin>>n;
	int *T=new int[n+1];
	for(int j=0;j<n;j++)
	{
		cin>>T[j+1];
	}
	cout<<endl;
	cout<<"ǰ�����Ϊ��";
	bianli(T,n);
	cout<<endl;
}