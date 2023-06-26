#include <bits/stdc++.h>

using namespace std;

class Point{
private:
    double x, y;
public:
    Point(double x, double y){
        this->x = x;
        this->y = y;
    }

    void print(){
        cout << "X : " << fixed << setprecision(2) << x << endl;
        cout << "Y : " << fixed << setprecision(2) << y << endl;
    }
};

class MovablePoint : public Point{
private:
    double xSpeed, ySpeed;
public:
    MovablePoint(double x, double y, double xSpeed, double ySpeed) : Point(x, y){
        this->xSpeed = xSpeed;
        this->ySpeed = ySpeed;
    }

    void print(){
        Point::print();
        cout << "X Speed : " << xSpeed << endl;
        cout << "Y Speed : " << ySpeed << endl;
        cout << "-------------------" << endl;
    }
};

int main(){
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        double x, y, xSpeed, ySpeed, turn;
        cin >> x >> y >> xSpeed >> ySpeed >> turn;
    }


}