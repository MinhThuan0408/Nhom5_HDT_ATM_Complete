#pragma once
#include "NGUOIDUNG.h"
#include "CHUCNANG.h"

class GIAODIEN
{
private:
	NGUOIDUNG TK;
	CHUCNANG CN;
public:
	GIAODIEN(void);
	~GIAODIEN(void);
	void Nhap();
	void Xuat();
	void DangNhap();
	void LuaChonChucNang();
};

