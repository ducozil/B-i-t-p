#include "sinhvien.h"

main(){
    SinhVien sv1;
    sv1.setMaSV("1111");
    sv1.display();

    SinhVien sv2("2222", "Nguyen Van A");
    sv2.display();

    return 0;
}