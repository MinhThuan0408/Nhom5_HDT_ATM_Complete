#include "CHUCNANG.h"
#include "iostream"
#include "fstream"
#include "windows.h"
using namespace std;

void CHUCNANG::Nhap()
{
	TH.Nhap();
}
void CHUCNANG::Xuat()
{
	TH.Xuat();
}
void CHUCNANG::DangNhap()
{
	TH.DangNhap();
}


void CHUCNANG::RutTien()
{
	int nKetQua = 0;
	do{
	cout << "Nhap vao so tien can rut: "; 
	cin >> m_nTienRut;
	}while(m_nTienRut <=50000);

	if (TH.getSoDu() >= m_nTienRut)
	{
		nKetQua = TH.getSoDu() - m_nTienRut;
		cout << "So tien sau khi rut: " << nKetQua << endl;
		ofstream ofile;
		ofile.open("DATABASE.dat", ios::app);
		ofile << "So tien sau khi rut: " << nKetQua << endl;
	}
	else
	{
		cout << "So tien ban vua nhap lon hon so tien co trong tai khoan" << endl;
	}
	Sleep(1000);
}

void CHUCNANG::ChuyenTien()
{
	int nKetQua = 0;
	do{
		fflush(stdin);
	cout << "Nhap ma pin tai khoan chuyen: ";
	cin.getline(m_cIDTam,20);
	}while(strlen(m_cIDTam) != 14);
	do{
	cout << "Nhap so tien muon chuyen: ";
	cin >> m_nTienChuyen;
	}while(m_nTienChuyen<=50000);
	if (TH.getSoDu() >= m_nTienChuyen)
	{
		nKetQua = TH.getSoDu() - m_nTienChuyen;
		cout << "So tien sau khi chuyen: " << nKetQua << endl;
		ofstream ofile;
		ofile.open("DATABASE.dat", ios::app);
		ofile << "So tien sau khi chuyen: " << nKetQua << endl;
	}
	else
	{
		cout << "so tien trong tai khoan khong du" << endl;
	}
	Sleep(1000);
}

CHUCNANG::CHUCNANG(void)
{
}


CHUCNANG::~CHUCNANG(void)
{
}
