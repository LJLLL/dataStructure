#include<iostream>
using namespace std;

#define M 6

void MaxSum(int a[])
{ 
	int sum=0,b=0,i=0,j,x1=0,x2=0;
    for(j=1;j<=M;j++)
	{  
		if (b>0) 
			b+=a[j];
	    else
		{
			b=a[j];
			i=j;
		}
       if (b>sum)
	   {
		   sum=b;
		   x1=i;
		   x2=j;
	   }
    }
    cout<<"����Ӷ�Ϊ:"<<sum<<endl;
	cout<<"��ʵ�±�Ϊ:"<<x1<<endl;
	cout<<"��ֹ�±�Ϊ:"<<x2<<endl;
}

main()
{
	int a[M+1];
	cout<<"������"<<M<<"��������";
	for(int i=1;i<=M;i++)
		cin>>a[i];
	MaxSum(a);
}
 