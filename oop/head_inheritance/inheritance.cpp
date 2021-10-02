#include <iostream>
using namespace std;
/* trong 1 truong co 3 khu sau:
khu giang duong:(ten khu,so luong den,so luong sinh vien )
khu hoi dong:(ten khu ,so luong den ,so luong giao vien)
khu the thao:(ten khu,so luong den, so dung cu) 
==> TA SẼ SỬ DỤNG ENHERITANCE(TÍNH KẾ THỪA-những phần tử chung) để tối ưu hóa code và biên dịch(complete)*/
class khu_o_truong
{
    protected:
    string tenkhu;
    int so_luong_den;
    public:
    void nhapdulieu();
    void xuatdulieu();
};
class khu_giang_duong :public khu_o_truong //cú pháp kế thừa lớp cha(khu_o_truong)
{
    private:
    int soluongsinhvien;
    public:
    void nhapdulieu();
    void xuatdulieu();
};
class khu_hoi_dong :public khu_o_truong //cú pháp kế thừa lớp cha(khu_o_truong)
{
    private:
    int soluonggiaovien;
    public:
    void nhapdulieu();
    void xuatdulieu();
};
class khu_the_thao :public khu_o_truong //cú pháp kế thừa lớp cha(khu_o_truong)
{
    private:
    int soluongdungcu;
    public:
    void nhapdulieu();
    void xuatdulieu();
};
void khu_o_truong:: nhapdulieu()
{
    cout <<"nhap ten khu"<<endl;
    getline(cin,tenkhu);
    cout <<"nhap so luong den \n";
    cin >>so_luong_den;
}
int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
