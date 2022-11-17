#include "QuanLy.h"
#include "NhanVien.h"
#include "List.h"
#pragma once

class QuanLyHD;
class QuanLyNV : public QuanLy
{
private:
    List <NhanVien*> databaseNV;
    int lengthNV;
public:
        QuanLyNV();
        ~QuanLyNV();

        void setLengthNV(int);
        int getLengthNV();

        void Readf();
        void Insert();
        void Show(int);
        void Update();
        void Remove();
        void Writef();
        void Find();
        void Sort();
        void selectionsortTen(bool (*cmp)(string, string));
        int FindIndex(const int&);
        int FindIndexTen(const string&);

        friend void Input(QuanLyNV&, int, string);
        friend class ThongKe;
        friend class QuanLyHD;
};