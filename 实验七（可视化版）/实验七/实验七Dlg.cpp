// ʵ����Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "ʵ����.h"
#include "ʵ����Dlg.h"
#include "afx.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMyDlg dialog

CMyDlg::CMyDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CMyDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CMyDlg)
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMyDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CMyDlg)
	DDX_Control(pDX, IDC_BUTTON1, m_button1);
	DDX_Control(pDX, IDC_RADIO1, m_radio);
	DDX_Control(pDX, IDC_COMBO2, m_combo2);
	DDX_Control(pDX, IDC_COMBO1, m_combo1);
	DDX_Control(pDX, IDC_COMBO3, m_combo3);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CMyDlg, CDialog)
	//{{AFX_MSG_MAP(CMyDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_CBN_SELENDCANCEL(IDC_COMBO3, OnSelendcancelCombo3)
	ON_BN_CLICKED(IDC_RADIO1, OnRadio1)
	ON_BN_CLICKED(IDC_RADIO2, OnRadio2)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	ON_BN_CLICKED(IDC_BUTTON3, OnButton3)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_EN_CHANGE(IDC_EDIT2, OnChangeEdit2)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMyDlg message handlers

BOOL CMyDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here

	m_combo1.ResetContent();	
	m_combo1.AddString(_T("У�ſ�"));      
	m_combo1.AddString(_T("������"));  
	m_combo1.AddString(_T("��¥"));  
	m_combo1.AddString(_T("A������"));  
	m_combo1.AddString(_T("��Ӿ��"));      
	m_combo1.AddString(_T("��ͨ�㳡"));  
	m_combo1.AddString(_T("Уʷ��"));  
	m_combo1.AddString(_T("����㳡"));  
	m_combo1.AddString(_T("ũѧ¥"));      
	m_combo1.AddString(_T("A��ʳ��"));  
	m_combo1.AddString(_T("ʵ��¥"));  
	m_combo1.AddString(_T("ͼ���"));  
	m_combo1.AddString(_T("������")); 
	m_combo1.SetCurSel(0); 
	m_combo1.EnableWindow(FALSE);

	m_combo2.ResetContent();	
	m_combo2.AddString(_T("У�ſ�"));      
	m_combo2.AddString(_T("������"));  
	m_combo2.AddString(_T("��¥"));  
	m_combo2.AddString(_T("A������"));  
	m_combo2.AddString(_T("��Ӿ��"));      
	m_combo2.AddString(_T("��ͨ�㳡"));  
	m_combo2.AddString(_T("Уʷ��"));  
	m_combo2.AddString(_T("����㳡"));  
	m_combo2.AddString(_T("ũѧ¥"));      
	m_combo2.AddString(_T("A��ʳ��"));  
	m_combo2.AddString(_T("ʵ��¥"));  
	m_combo2.AddString(_T("ͼ���"));  
	m_combo2.AddString(_T("������")); 
	 m_combo2.SetCurSel(5);   

	m_combo3.ResetContent();	
	m_combo3.AddString(_T("У�ſ�"));      
	m_combo3.AddString(_T("������"));  
	m_combo3.AddString(_T("��¥"));  
	m_combo3.AddString(_T("A������"));  
	m_combo3.AddString(_T("��Ӿ��"));      
	m_combo3.AddString(_T("��ͨ�㳡"));  
	m_combo3.AddString(_T("Уʷ��"));  
	m_combo3.AddString(_T("����㳡"));  
	m_combo3.AddString(_T("ũѧ¥"));      
	m_combo3.AddString(_T("A��ʳ��"));  
	m_combo3.AddString(_T("ʵ��¥"));  
	m_combo3.AddString(_T("ͼ���"));  
	m_combo3.AddString(_T("������")); 
	 m_combo3.SetCurSel(0);   

    SetDlgItemText(IDC_EDIT1, _T("ѧУ�����"));  
	SetDlgItemText(IDC_EDIT2, _T("��У�ſڵ���ͨ�㳡���·��Ϊ:\r\n\r\n  У�ſ�-->��¥-->������-->��Ӿ��-->��ͨ�㳡\r\n\r\n·����Ϊ  11")); 

	CButton* radio=(CButton*)GetDlgItem(IDC_RADIO1);
	radio->SetCheck(1);


	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CMyDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CMyDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CMyDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CMyDlg::OnSelendcancelCombo3() 
{
	// TODO: Add your control notification handler code here
    CString strWeb;   
    int nSel;   
  
    // ��ȡ��Ͽ�ؼ����б����ѡ���������   
   nSel = m_combo3.GetCurSel();   
   // ����ѡ����������ȡ�����ַ���   
    switch(nSel){
		  case 0: strWeb="ѧУ�����";break;
		  case 1: strWeb="�����ݵ�Ȼ�Ǹ������ĵط�";break;
		  case 2: strWeb="��������ѧ�ĵر꽨��";break;
		  case 3: strWeb="��������8����";break;
		  case 4: strWeb="����˼�������Ӿ�ĵط�";break;
		  case 5: strWeb="��Ȧ�ĵط�������������Զ...";break;
		  case 6: strWeb="ѧУ��ʷ�ƾ�(������ʱ���ͼ���ɵɵ�ֲ����...)";break;
		  case 7: strWeb="����ʥ�أ������е��䣩";break;
		  case 8: strWeb="��������ϰ�ĵط���";break;
		  case 9: strWeb="����ȽϺóԣ���¥�Ĺ������ߣ���¥��������.....";break;
		  case 10: strWeb="�������繤ʵ��ĵط���ȥ�������ˣ���С������";break;
		  case 11: strWeb="����";break;
		  case 12: strWeb="Լ����Ա�ȥ�ĵط�";break;
		  }




   // m_combo3.GetLBText(nSel, strWeb);   
    // ����Ͽ���ѡ�е��ַ�����ʾ��IDC_SEL_WEB_EDIT�༭����   
    SetDlgItemText(IDC_EDIT1, strWeb);   

}

void CMyDlg::OnRadio1() 
{
	// TODO: Add your control notification handler code here
	if (((CButton *)GetDlgItem(IDC_RADIO1))->GetCheck())
   {
		m_combo1.SetCurSel(0); 
		m_combo1.EnableWindow(FALSE);
   }// TODO: Add your control notification handler code here
   else 
   {
	   	m_combo1.EnableWindow(TRUE);
   }
}

void CMyDlg::OnRadio2() 
{
	// TODO: Add your control notification handler code here
	if (((CButton *)GetDlgItem(IDC_RADIO2))->GetCheck())
   {
		m_combo1.EnableWindow(TRUE);
   }// TODO: Add your control notification handler code here
   else 
   {
	   	m_combo1.EnableWindow(FALSE);
   }
}

void CMyDlg::OnButton2() 
{
	// TODO: Add your control notification handler code here
	int v1,v2,m;
	int chang;
    int cost[maxs][maxs];
	int flag=1;
	int	flag1=1;
	int num,a;
	char ch;
	chang=chushihua(cost);
	v1 = m_combo1.GetCurSel()+1;
	v2 = m_combo2.GetCurSel()+1;  
	chaxun2(cost,chang,v2,v1);
}

void CMyDlg::OnButton3() 
{
	// TODO: Add your control notification handler code here
	int v1,v2,m;
	int chang;
    int cost[maxs][maxs];
	int flag=1;
	int	flag1=1;
	int num,a;
	char ch;
	chang=chushihua(cost);
	v1 = m_combo1.GetCurSel()+1;
	v2 = m_combo2.GetCurSel()+1;  
	chaxun1(cost,chang,v2,v1);
}


int CMyDlg::chushihua(int cost[][maxs]) 
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

void CMyDlg::chaxun1(int cost[][maxs],int chang,int v1,int v2)
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
	CString a;
	a="��";
	CString b=show(v2);
	a=a+b;
	b="��";
	a=a+b;
	b=show(v1);
	a=a+b;
	b="���·��Ϊ:";
	a=a+b;
	a=a+"\r\n\r\n  ";
	if(s[v2]==1)
	{
		v=v2;
		while(v!=v1)
		{
			b=show(v);
			a=a+b;
			a=a+"-->";
			v=p[v];
		}
		b=show(v);
		a=a+b;
		a=a+"\r\n\r\n";
		b="·����Ϊ  ";
		a=a+b;
		b.Format("%d",d[v2]);
		a=a+b;

		SetDlgItemText(IDC_EDIT2, a); 
	}
}

void CMyDlg::chaxun2(int cost[][maxs],int chang,int v1,int v2)
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
	CString a;
	a="��";
	CString b=show(v2);
	a=a+b;
	b="��";
	a=a+b;
	b=show(v1);
	a=a+b;
	b="���·��Ϊ:";
	a=a+b;
	a=a+"\r\n\r\n  ";
	if(p[v1][v2]!=-1)
	{
		k=p[v1][v2];
		b=show(v2);
		a=a+b+"-->";
		while(k!=v1)
		{
			b=show(k);
			a=a+b+"-->";
			k=p[v1][k];
		}
		b=show(k);
		a=a+b;
	}
	a=a+"\r\n\r\n";
	b="·����Ϊ  ";
	a=a+b;
	b.Format("%d",d[v1][v2]);
	a=a+b;

	SetDlgItemText(IDC_EDIT2, a); 
}



CString CMyDlg::show(int i)
{
	CString q;
	switch(i){
		   case 1: q="У�ſ�";break;
		   case 2: q="������";break;
		   case 3: q="��¥";break;	
		   case 4: q="A������";break;		
		   case 5: q="��Ӿ��";break;	
		   case 6: q="��ͨ�㳡";break;
		   case 7: q="Уʷ��";break;
		   case 8: q="����㳡";break;	
		   case 9: q="ũѧ¥";break;		
		   case 10: q="A��ʳ��";break;	
		   case 11: q="ʵ��¥";break;
		   case 12: q="ͼ���";break;
		   case 13: q="������";break;
	   }
	return q;
}

void CMyDlg::OnButton1() 
{
	// TODO: Add your control notification handler code here

}

void CMyDlg::OnChangeEdit2() 
{
	// TODO: If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	
}
