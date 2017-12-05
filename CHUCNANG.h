#pragma once
#include "NGUOIDUNG.h"

class CHUCNANG
{
private:
	NGUOIDUNG TH;
	int m_nTienRut;
	int m_nTienChuyen;
	char m_cIDTam[20];
public:
	CHUCNANG(void);
	~CHUCNANG(void);
	void Nhap();
	void Xuat();
	void DangNhap();
	void RutTien();
	void ChuyenTien();
	

};

