/*
Do Thi Thao Uyen
MSSV:16211TT1628
Nhom 5
*/
#include "NGUOIDUNG.h"
#include "iostream"
#include "fstream"
#include "windows.h"
using namespace std;
void NGUOIDUNG::Nhap()
{
	cout << "\nNhap So luong tai khoan: "; cin >> m_nSLTK;
	for (int i = 1; i <= m_nSLTK; i++)
	{
		cout << "\nTai khoan thu:" << i << endl;
		cout << "\nNhap ho ten tai khoan: ";
		fflush(stdin);cin.getline(m_cHoTen,50);

		do
		{
			cout << "\nNhap ma so tai khoan (nhap du 14 ki tu so): ";
			fflush(stdin);cin.getline(m_cID,20);
		}while(strlen(m_cID) != 14);

		do
		{
			cout << "\nNhap so PIN (nhap du 6 ki tu so): ";
			fflush(stdin);cin.getline(m_cPIN,10);
		}while(strlen(m_cPIN) != 6);

		cout << "\nNhap so du tai khoan: "; cin >> m_nSoDu;
		cout << "\nNhap loai tien te: ";
		fflush(stdin);cin.getline(m_cLoaiTien,5);
	}
}

void NGUOIDUNG::Xuat()
{
}

void NGUOIDUNG::DangNhap()
{
}

int NGUOIDUNG::getSoDu()
{
}

NGUOIDUNG::NGUOIDUNG(void)
{
}


NGUOIDUNG::~NGUOIDUNG(void)
{
}
