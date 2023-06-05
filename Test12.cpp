#include <bits/stdc++.h>
using namespace std;

class sinhvien {
    private :
        string ten, lop, ns;
        double gpa;
    public :
        
        void nhap (){
            getline (cin, this -> ten);
            cin >> lop >> ns >> gpa;
        }
        void chuanhoa (){
            if (this->ns[1] == '/')
                this->ns = "0" + this->ns;
            if (this->ns[4] == '/')
                this ->ns.insert (3,"0");
        }
        void in (){    
            cout << "SV001" << " " << ten << " " << lop << " " << ns << " ";
            cout << fixed << setprecision (1) << gpa;
        }
};

int main (){
    sinhvien a;
    a.nhap();
    a.chuanhoa();
    a.in();
    return 0;
}