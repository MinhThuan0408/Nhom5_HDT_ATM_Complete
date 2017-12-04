#include "GIAODIEN.h"
#include "iostream"
#include "windows.h"
#include "iomanip"
using namespace std;

void GIAODIEN::Nhap()
{
	CN.Nhap();
}
void GIAODIEN::Xuat()
{
	CN.Xuat();
}
void GIAODIEN::DangNhap()
{
	cout << "\t\t\t\t----------------------------------------\n";
	cout << "\t\t\t\t|                                       |\n";
	cout << "\t\t\t\t|               DANG NHAP               |\n";
	cout << "\t\t\t\t|                                       |\n";
	cout << "\t\t\t\t-----------------------------------------\n";
	CN.DangNhap();
	system("cls");
	LuaChonChucNang();
	Sleep(1000);
}


void GIAODIEN::LuaChonChucNang()
{
	int nChon;
	cout << "Dich vu ATM kinh chao quy khach" << setw(90) << "ATM Nhom5\n";
	cout << "\t\t\t\t\t\t\t1.Rut tien\n";
	cout << "\t\t\t\t\t\t\t2.Chuyen tien\n";
	cout << "\t\t\t\t\t\t\t3.Nhap ki tu bat khi de thoat\n";
	cout << "\n\t\tNhap lua chon: "; cin >> nChon;
	switch(nChon)
	{
	case 1:
		CN.RutTien();
		system("cls");
		LuaChonChucNang();
	case 2:
		CN.ChuyenTien();
		system("cls");
		LuaChonChucNang();
	default:
		cout << setw(40) << "CAM ON QUY KHACH DA SU DUNG DICH VU CUA CHUNG TOI\n";
		cout << setw(40) << "CHUC QUY KHACH MOT NGAY VUI VE\n";
		Sleep(2000);
		exit(1);
	}
}


GIAODIEN::GIAODIEN(void)
{
}

GIAODIEN::~GIAODIEN(void)
{
}
