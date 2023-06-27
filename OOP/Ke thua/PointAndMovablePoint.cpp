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

    double getX(){
        return x;
    }

    double getY(){
        return y;
    }

    void setX(double newX){
        x = newX;
    }

    void setY(double newY){
        y = newY;
    }
};


class MovablePoint : public Point{
private:
    double xSpeed, ySpeed;
    int turn;
public:
    MovablePoint(double x, double y, double xSpeed, double ySpeed, int turn) : Point(x, y){
        this->xSpeed = xSpeed;
        this->ySpeed = ySpeed;
        this->turn = turn;
    }

    void move(){
        setX(getX() + xSpeed * turn);
        setY(getY() + ySpeed * turn);
    }

    void print(){
        cout << "X : " << fixed << setprecision(2) << getX() << endl;
        cout << "Y : " << fixed << setprecision(2) << getY() << endl;
        cout << "X Speed : " << fixed << setprecision(2) << xSpeed << endl;
        cout << "Y Speed : " << fixed << setprecision(2) << ySpeed << endl;
        cout << "-------------------" << endl;
    }
};

int main(){
    int n; cin >> n;
    vector<MovablePoint> Positions;
    for(int i = 0; i < n; i++){
        double x, y, xSpeed, ySpeed, turn;
        cin >> x >> y >> xSpeed >> ySpeed >> turn;
        Positions.push_back(MovablePoint(x, y, xSpeed, ySpeed, turn));
    }
    for(MovablePoint x : Positions){
        x.move();
        x.print();
    }
}