#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<stdio.h>
#include<conio.h>

using namespace std;

#define maxs 50

void show(int i)
{
	switch(i){
		   case 1: cout<<"У�ſ�";break;
		   case 2: cout<<"������";break;
		   case 3: cout<<"��¥";break;	
		   case 4: cout<<"A������";break;		
		   case 5: cout<<"��Ӿ��";break;	
		   case 6: cout<<"��ͨ�㳡";break;
		   case 7: cout<<"Уʷ��";break;
		   case 8: cout<<"����㳡";break;	
		   case 9: cout<<"ũѧ¥";break;		
		   case 10: cout<<"A��ʳ��";break;	
		   case 11: cout<<"ʵ��¥";break;
		   case 12: cout<<"ͼ���";break;
		   case 13: cout<<"������";break;
	   }
}

int chushihua(int cost[][maxs])
{
	int chang,kuan,i,j;
	chang=14;
	kuan=14;
	for(i=1;i<=chang;i++)
		for(j=1;j<=kuan;j++)
			cost[i][j]=9999;
		cost[1][3]=2;
		cost[3][1]=2;
		cost[3][2]=3;
		cost[2][3]=3;
		cost[3][4]=4;
		cost[4][3]=4;
		cost[4][8]=2;
		cost[8][4]=2;
		cost[4][7]=3;
		cost[7][4]=3;
		cost[8][7]=7;
		cost[7][8]=7;
		cost[7][6]=6;
		cost[6][7]=6;
		cost[6][5]=1;
		cost[5][6]=1;
		cost[5][2]=5;
		cost[2][5]=5;
		cost[5][13]=7;
		cost[13][5]=7;
		cost[6][12]=7;
		cost[12][6]=7;
		cost[6][11]=8;
		cost[11][6]=8;
		cost[7][10]=9;
		cost[10][7]=9;
		cost[8][9]=6;
		cost[9][8]=6;
		cost[9][10]=5;
		cost[10][9]=5;
		cost[10][3]=9;
		cost[3][10]=9;
		cost[11][12]=1;
		cost[12][11]=1;
		cost[12][13]=2;
		cost[13][12]=2;
	return chang;
}

void chaxun1(int cost[][maxs],int chang,int v1,int v2)
{
	int i,j,v,min;
	int s[maxs],d[maxs],p[maxs];
	for(i=1;i<chang;i++)
	{
		s[i]=0;
		d[i]=cost[v1][i];
		if(d[i]<maxs)
			p[i]=v1;
		else 
			p[i]=-1;
	}
	s[v1]=1;
	d[v1]=0;
	for(i=1;i<chang;i++)    
	{
		min=9999;
		for(j=1;j<chang;j++) 
		{
			if(s[j]==0&&d[j]<min)
			{
				v=j;         
				min=d[j];     
			}
		}
		s[v]=1;             
		for(j=1;j<chang;j++)     
		{
			if(s[j]==0&&d[v]+cost[v][j]<d[j])
			{
				d[j]=d[v]+cost[v][j];
				p[j]=v;
			}
		}
	}
	cout<<"��";
    show(v2);
	cout<<"��";
	show(v1);
	cout<<"���·��Ϊ:"<<endl;
	if(s[v2]==1)
	{
		v=v2;
		while(v!=v1)
		{
			cout<<v;
			show(v);
			cout<<"-->";
			v=p[v];//ͨ���ҵ�ǰ�����㣬����������·��
		}
		cout<<v;
		show(v);
		cout<<"  ·����Ϊ"<<d[v2]<<endl;
	}
}

void print(){
	cout<<"                 ��ӭʹ�ú�������ѧУ԰����ϵͳ       "<<endl;
	cout<<"                    ����ѧ"<<endl;
	cout<<"    |-|-------------------------------------------------------"<<endl;
	cout<<"    | |               ѧ��������"<<endl;
	cout<<"    |-|-------------------------------------------------------"<<endl;
	cout<<"  ѧ|-��      ��������         ����Ӿ��             �٢�������"<<endl;
	cout<<"    |-У                                                      "<<endl;
	cout<<"  ��|         ����             ����ͨ               �٢�ͼ��ݣ��ɣ�"<<endl;
	cout<<"    |-��        ¥               �㳡               �٢�ʵ��¥"<<endl;
	cout<<"  ·                                                          "<<endl;
	cout<<"    |-��                       ��Уʷ�ݣ���ͼ��ݣ� ��A��ʳ��"<<endl;
	cout<<"    |-|       ��A��            ������                        "<<endl;
	cout<<"    |-|         ����             �㳡               ��ũѧ¥-"<<endl;
    cout<<"    |-|------------------------------------------------------"<<endl;
	cout<<"    |                 ѧ���ĵ���"<<endl;
	cout<<"    |--------------------------------------------------------"<<endl;
	cout<<"    |                 ҽ�ƴ�ѧ"<<endl;
	cout<<"****************************************************************"<<endl;

}

void print2(){
	cout<<"�밴���������";
	getch();
}

void print1(){
	int flag=1;
	int a;
		while(flag){
		      cout<<"��������Ҫ�˽�ĵص㣺";
		      cin>>a;
			 
			  switch(a){
			  case 1: system("cls");print();cout<<"ѧУ�����"<<endl;break;
			  case 2: system("cls");print();cout<<"�������ĵط�"<<endl;break;
			  case 3: system("cls");print();cout<<"��������"<<endl;break;
			  case 4: system("cls");print();cout<<"�����ӣ��Ќ�˿������...."<<endl;break;
			  case 5: system("cls");print();cout<<"����ˮ������........ˮ"<<endl;break;
			  case 6: system("cls");print();cout<<"��Ȧ�ĵط�"<<endl;break;
			  case 7: system("cls");print();cout<<"ѧУ��ʷ�ƾã�������������...."<<endl;break;
			  case 8: system("cls");print();cout<<"����ʥ��ps�������е��䣩"<<endl;break;
			  case 9: system("cls");print();cout<<"��������ϰ�ĵط���"<<endl;break;
			  case 10: system("cls");print();cout<<"����ȽϺóԣ���¥�Ĺ������ߣ���¥��������....."<<endl;break;
			  case 11: system("cls");print();cout<<"�������繤ʵ��ĵط���ȥ�������ˣ���С������"<<endl;break;
			  case 12: system("cls");print();cout<<"����"<<endl;break;
			  case 13: system("cls");print();cout<<"Լ����Ա�ȥ�ĵط�"<<endl;break;
			  }
			 cout<<"****************************************************************"<<endl;
		cout<<"��0�ص����˵��������������";
	    flag=getch()-48;
		cout<<endl;
	}
}

chaxun2(int cost[][maxs],int chang,int v1,int v2)
{
	int i,j,k;
	int d[maxs][maxs],p[maxs][maxs];
	for(i=1;i<chang;i++)
	{
		for(j=1;j<chang;j++)
		{
			d[i][j]=cost[i][j];
			if(d[i][j]<maxs)
				p[i][j]=i;
			else
				p[i][j]=-1;
			if(i==j)
				d[i][j]=0;
		}
	}
	for(k=1;k<chang;k++)
	{
		for(i=1;i<chang;i++)
		{
		    for(j=1;j<chang;j++)
			{
				if(d[i][k]+d[k][j]<d[i][j])
				{
					d[i][j]=d[i][k]+d[k][j];
					p[i][j]=p[k][j];
				}
			}
		}
	}
	cout<<"��";
    show(v1);
	cout<<"��";
	show(v2);
	cout<<"���·��Ϊ:"<<endl;
	if(p[v1][v2]!=-1)
	{
		int s[maxs],t=-1,n=1;
		k=p[v1][v2];
		i=v1;
		j=v2;
		cout<<i;
		show(i);
		cout<<"-->";
		while(n==1||t!=-1)
		{
			if(n!=1)
			{
			
				i=j;
				j=s[t--];
				k=p[i][j];
				cout<<i;
				show(i);
				cout<<"-->";
			}
			n++;
			while(k!=i)
			{
				s[++t]=j;
				j=k;
				k=p[i][j];
				
			}
		}
		cout<<v2;
		show(v2);
	}		
	cout<<"  ·����Ϊ"<<d[v1][v2]<<endl;
}

main(){
	int v1,v2,m;
	int chang;
    int cost[maxs][maxs];
	int flag=1;
	int	flag1=1;
	int num,a;
	char ch;
	chang=chushihua(cost);
	/**/
   while(flag){
	   system("cls");
	   print();
	   cout<<"1�������"<<endl;
	   cout<<"2����¥���������������·����ѯ"<<endl;
	   cout<<"3�����������·��"<<endl;
	   cout<<"0�˳�"<<endl;
	   cin>>num;
	   switch(num){
	   case 1:print1();break;
	   case 2:cout<<"������Ҫ����ص���:";
	          cin>>v1;
			  system("cls");print();chaxun1(cost,chang,v1,1);print2();break;
	   case 3:cout<<"��������Ҫ��ѯ�������ص���:";
	          cin>>v1>>v2;
			  system("cls");print();chaxun2(cost,chang,v1,v2);print2();break;
	   case 0:flag=0;
	   }
   }
}