/*
Do Thi Thao Uyen
MSSV:16211TT1628
Nhom 5
*/
#pragma once
class NGUOIDUNG
{
private:
	char m_cHoTen[50];
	char m_cID[20], m_cPIN[10];
	int m_nSoDu;
	char m_cLoaiTien[5];

	int m_nSLTK;
public:
	NGUOIDUNG(void);
	~NGUOIDUNG(void);
	void Nhap();
	void Xuat();
	void DangNhap();
	int getSoDu();
};

