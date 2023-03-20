#include "sinhvien.h"
SinhVien:: SinhVien(){}
SinhVien:: SinhVien(string masv){
    this->MaSV = masv;
}
SinhVien:: SinhVien(string masv, string tensv){
    this-> MaSV= tensv;
    this->TenSV = tensv;
}

string SinhVien::getMaSV(){
    return this ->MaSv;
}
void SinhVien::setMaSV(string masv){
    this-> 
}