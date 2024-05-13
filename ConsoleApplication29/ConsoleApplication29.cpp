#include <iostream>
using namespace std;
class Point
{
private:
    int x;
    int y;
public:

    int getX1() { return x; }
    void setX1(int x1) { this->x = x1; }
    int getY1() { return y; }
    void setY1(int y1) { this->y = y1; }

    Point(int x1, int y1, int x2, int y2)
    {
        setX1(x1); setY1(y1);
    }
    bool operator== (Point& other)
    {
        return this->x == other.x && this->y == other.y;
    }
    bool operator== (Point& other)
    {
        return this->x != other.x && this->y != other.y;
    }
};

int main()
{

}