#include <bits/stdc++.h>

using namespace std;

class Vehicle{
private:
    string ID, name, brand, color;
    int price;
public:
    Vehicle(string ID, string name, string brand, string color, int price){
        this->ID = ID;
        this->name = name;
        this->brand = brand;
        this->color = color;
        this->price = price;
    }

    string getBrand(){
        return brand;
    }

    int getPrice(){
        return price;
    }

    string getID(){
        return ID;
    }

    void print1(){
        cout << ID << " " << name << " " << brand << " " << color << " ";
    }

    void print2(){
        cout << price << endl;
    }
};

class Car : public Vehicle{
private:
    int horsePower;
public:
    Car(string ID, string name, string brand, string color, int price, int horsePower) : Vehicle(ID, name, brand, color, price){
        this->horsePower = horsePower;
    }

    void print(){
        Vehicle::print1();
        cout << horsePower << " ";
        Vehicle::print2();
    }
};

class Motor : public Vehicle{
private:
    int maxSpeed;
public:
    Motor(string ID, string name, string brand, string color, int price, int maxSpeed) : Vehicle(ID, name, brand, color, price){
        this->maxSpeed = maxSpeed;
    }

    void print(){
        Vehicle::print1();
        cout << maxSpeed << " ";
        Vehicle::print2();
    }
};

bool cmp1(Car a, Car b){
    if(a.getPrice() != b.getPrice())
        return a.getPrice() > b.getPrice();
    return a.getID() < b.getID();
}

bool cmp2(Motor a, Motor b){
    if(a.getPrice() != b.getPrice())
        return a.getPrice() > b.getPrice();
    return a.getID() < b.getID();
}

int main(){
    int n; cin >> n;
    vector<Car> listOfCars;
    vector<Motor> listOfMotors;
    for(int i = 0; i < n; i++){
        cin.ignore();
        string ID, name, brand, color;
        getline(cin, ID);
        getline(cin, name);
        getline(cin, brand);
        getline(cin, color);
        int tmp; cin >> tmp;
        int price; cin >> price;
        if(ID.substr(0, 3) == "OTO"){
            Car x(ID, name, brand, color, price, tmp);
            listOfCars.push_back(x);
        }
        else{
            Motor x(ID, name, brand, color, price, tmp);
            listOfMotors.push_back(x);
        }
    }
    sort(listOfCars.begin(), listOfCars.end(), cmp1);
    sort(listOfMotors.begin(), listOfMotors.end(), cmp2);
    cout << "DANH SACH OTO :" << endl;
    for(Car x : listOfCars){
        x.print();
    }
    cout << "DANH SACH XE MAY :" << endl;
    for(Motor x : listOfMotors){
        x.print();
    }
}