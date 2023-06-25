#include <bits/stdc++.h>

using namespace std;

class Circle{
private:
    string color;
    double radius;
public:
    Circle(string color, double radius){
        this->color = color;
        this->radius = radius;
    }

    double getRadius(){
        return radius;
    }

    string getColor(){
        return color;
    }
};

class Cylinder : public Circle{
private:
    double height;
public:
    Cylinder(string color, double radius, double height) : Circle(color, radius){
        this->height = height;
    }

    double getVolume(){
        return 3.14 * Circle::getRadius() * Circle::getRadius() * height;
    }

    void print(){
        cout << "Color : "  << Circle::getColor() << endl;
        cout << "Height : " << fixed << setprecision(2) << height << endl;
        cout << "Radius : " << fixed << setprecision(2) << Circle::getRadius() << endl;
        cout << "Volume : " << fixed << setprecision(2) << getVolume() << endl;
        cout << "-------------------" << endl;
    }
};

bool cmp(Cylinder a, Cylinder b){
    if(a.getVolume() != b.getVolume())
        return a.getVolume() > b.getVolume();
    return a.getColor() < b.getColor();
}

int main(){
    int n; cin >> n;
    vector<Cylinder> v;
    for(int i = 0; i < n; i++){
        string color;
        double radius, height;
        cin >> color >> radius >> height;
        Cylinder x(color, radius, height);
        v.push_back(x);
    }
    sort(v.begin(), v.end(), cmp);
    for(Cylinder x : v){
        x.print();
    }
}