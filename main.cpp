#include "GIAODIEN.h"
#include "iostream"
#include "CHUCNANG.h"
#include "GIAODIEN.h"
#include "NGUOIDUNG.h"
using namespace std;

void main()
{
	system("color 2B");
	GIAODIEN CT;
	CT.Nhap();
	CT.Xuat();
	CT.DangNhap();
	CT.LuaChonChucNang();
	system ("pause");
}