#pragma once
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class KhachHang{
    private:
        int static count_id;
        int maKH;
        string hodem;
        string tenKH;
        string sdt;
        int so_diem;
        int check_delete;
    public:
    // Ham getter
        int getMaKH();
        string getHoDemKH();
        string getTenKH();
        string getSDT();
        int getSoDiem();
        int getCheckDeleteSo();
        string getCheckDelete();
    // Ham setter
        void setMaKH(int);
        void setHoDemKH(string);
        void setTenKH(string);
        void setSDT(string);
        void setSoDiem(int);
        void setCheckDelete(int);
    // Ham constructor & destructor
        KhachHang(int = -1, string = "", string = "", string = "", int = 0, int = 0);
        ~KhachHang();
        friend istream& operator>>(istream&, KhachHang&);
        friend ostream& operator<<(ostream&, KhachHang&);
};


