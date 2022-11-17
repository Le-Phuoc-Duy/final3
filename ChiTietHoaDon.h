#pragma once

class QuanLyHang;
class ChiTietHoaDon
{
    private:
        int maHH;
        double don_gia;
        int so_luong;
    public:
        ChiTietHoaDon();
        ChiTietHoaDon(int, int, double);
        ~ChiTietHoaDon();

        void setMaHH(int);
        void setDonGia(double);
        void setSoLuong(int);

        int getMaHH();
        double getDonGia();
        int getSoLuong();

        void InputB(QuanLyHang&);
        void InputM(QuanLyHang&);
        void Output(QuanLyHang&);
};