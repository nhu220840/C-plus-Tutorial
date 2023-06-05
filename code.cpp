#include <bits/stdc++.h>

using namespace std;

int stt = 0;

string chuanHoaTen(string name){
        stringstream ss(name);
        string res = "", tmp;
        while(ss >> tmp){
            res += toupper(tmp[0]);
            for(int j = 1; j < tmp.size(); j++){
                res += tolower(tmp[j]);
            }
            res += " ";
        }
        res.pop_back();
        return res;
    }

struct Patien{
    string name, address, dateF0;
    int year;
    string XY = "";

    void nhap(){
        stt++;
        cout << "Ho ten: ";
        getline(cin, name);
        name = chuanHoaTen(name);
        cout << "Nam sinh: ";
        cin >> year;
        cout << "Dia chi: ";
        getline(cin, address);
        cout << "Ngay xet nghiem F0: ";
        getline(cin, dateF0);

        string ten;
        string tendau = "";
        stringstream ss(name);
        while(ss >> ten){
            tendau += toupper(ten[0]);
            XY = to_string(stt) + tendau;
        }
    }

    int getSTT(string XY){
        string STT = "";
        for(int i = 0; i < XY.size(); i++){
            if(isdigit(XY[i]))
                STT += XY[i];
        }
        int so = stoi(STT);
        return so;
    }

    void in(){
        cout << "Ho ten: " << name << endl;
        cout << "Nam sinh: " << year << endl;
        cout << "Dia chi: " << address << endl;
        cout << "Ngay xet nghiem F0: " << dateF0 << endl;
        cout << "Ma benh nhan: " << XY << endl;
    }
};

void LogIn(){
    const string STUDENT_NAME = "Nhu";
    const string STUDENT_ID = "22";
    const int MAX_LOGIN = 6;

    string inputName, inputPassword;
    int login = 0;
    bool isLoggedIn = false;

    while(!isLoggedIn){
        cout << "---------------DANG NHAP---------------" << endl;
        cout << "Ho ten SV: ";
        getline(cin, inputName);
        cout << "Mat khau: ";
        getline(cin, inputPassword);

        if(inputName == STUDENT_NAME && inputPassword == STUDENT_ID){
            isLoggedIn = true;
        }
        else{
            login++;
            if(login >= MAX_LOGIN){
                cout << "Ban da nhap sai qua 5 lan. Vui long lien he ho tro 18001919" << endl;
            }
            else{
            cout << "Ban da nhap sai " << login << " lan. Moi ban nhap lai." << endl;
            }
        }
    }
}

vector<Patien> listOfPatiens;

void xuatThongTin(){
    cout << "Vui long nhap so luong benh nhan: ";
    int i; cin >> i;
    if(i <= listOfPatiens.size()){
        for(int j = listOfPatiens.size() - i; j < listOfPatiens.size(); j++){
            listOfPatiens[j].in();
            cout << endl;
        }
    }
    else{
        bool all = false;
        while(!all){
            cout << "So luong benh nhan trong danh sach khong du." << endl;
            cout << "Vui long nhap 'all' de xem tat ca benh nhan: ";
            string sl; getline(cin, sl);
            if(sl == "all"){
                all == true;
                for(auto it : listOfPatiens){
                    it.in();
                    cout << endl;
                }
                break;
            }
            else{
                cout << "Chuc nang khong phu hop. Vui long nhap lai." << endl;
            }
        }
    }
}

bool isInteger(string s){
    for(int i = 0; i < s.length(); i++){
        if(!isdigit(s[i]))
            return false;
    }
    return true;
}

void timKiemTT(){
    cout << "Vui long nhap ma benh nhan, ho ten hoac nam sinh can tim kiem: ";
    string tt; getline(cin, tt);
    for(int i = 0; i < listOfPatiens.size(); i++){
        if(tt == listOfPatiens[i].XY){
            listOfPatiens[i].in();
            cout << endl;
        }
        else if(chuanHoaTen(tt) == listOfPatiens[i].name){
            listOfPatiens[i].in();
            cout << endl;
        }
        else if(isInteger(tt)){
            if(stoi(tt) == listOfPatiens[i].year){
                listOfPatiens[i].in();
                cout << endl;
            }
            else
                cout << "Khong tim thay benh nhan phu hop." << endl;
        }
        else
            cout << "Khong tim thay benh nhan phu hop." << endl;
    }
}

void xoaThongTin(){
    AGAIN:
    cout << "Vui long nhap STT cua benh nhan can xoa: ";
    int num; cin >> num;
    int i = 0;
    bool found = false;
    while (i < listOfPatiens.size()) {
        if (num == listOfPatiens[i].getSTT(listOfPatiens[i].XY)){
            found = true;
            cout << "Ban co chac chan muon xoa thong tin cua benh nhan nay khong?" << endl;
            cout << "Co hoac Khong?" << endl;
            cout << "Lua chon cua ban: ";
            string option; getline(cin, option);
            if(option == "Co"){
                listOfPatiens.erase(listOfPatiens.begin() + i);
                cout << "Da xoa thong tin cua benh nhan co STT " << num << endl;
            }
            else if(option == "Khong"){
                break;
            }
            break;
        }
        i++;
    }
    if(!found){
        cout << "Khong tim thay benh nhan nay trong danh sach." << endl;
        goto AGAIN;
    }
}

void luuThongTin(){
    ofstream file("data_f0.c19"); 

    if(file.is_open()){
        for (const Patien& patient : listOfPatiens) {
            file << patient.name << endl;
            file << patient.year << endl;
            file << patient.address << endl;
            file << patient.dateF0 << endl;
            file << patient.XY << endl;
            cout << endl;
        }

        file.close(); 
        cout << "Da luu thong tin vao file data_f0.c19" << endl;
    } 
    else{
        cout << "Khong the mo file de ghi!" << endl;
    }
}


int main(){
    LogIn();

    int choice;
    Patien x;

    while(true){
        cout << "---------------MENU---------------" << endl;
        cout << "1. Nhap thong tin benh nhan." << endl;
        cout << "2. Danh sach benh nhan." << endl;
        cout << "3. Tim kiem thong tin cua benh nhan." << endl;
        cout << "4. Xoa thong tin cua benh nhan." << endl;
        cout << "5. Luu thong tin." << endl;
        cout << "6. Thoat chuong trinh." << endl;
        cout << "----------------------------------" << endl;

        cin >> choice;
        if(choice == 1){
            x.nhap();
            listOfPatiens.push_back(x);
        }
        else if(choice == 2){
            xuatThongTin();
        }
        else if(choice == 3){
            timKiemTT();
        }
        else if(choice == 4){
            xoaThongTin();
        }
        else if(choice == 5){
            luuThongTin();
        }
        else{
            cout << "Da thoat chuong trinh." << endl;
            return 0;
        }
    }
}