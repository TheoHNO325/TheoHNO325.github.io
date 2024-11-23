#include <iostream>

using namespace std;

class Dot
{
public:
    float x, y;
    Dot(float x = 0, float y = 0)
    {
        this->x = x;
        this->y = y;
    }
    void Print(void)
    {
        cout << "x= " << x << endl;
        cout << "y= " << y << endl;
    }
};

class Line : public Dot
{
    Dot d1, d2; // 默认为private初始化
public:
    Line(Dot dot1, Dot dot2) : d1(dot1), d2(dot2)
    {
        x = (d1.x + d2.x) / 2;
        y = (d1.y + d2.y) / 2;
    }
    void Show(void)
    {
        cout << "Dot1";
        d1.Print();
        cout << "Dot2";
        d2.Print();
        cout << "center" << x << '\t' << y << endl;
    }
};

int main()
{
    float a, b, c, d;
    cin >> a >> b >> c >> d;
    Dot d1(a, b);
    Dot d2(c, d);
    Line line(d1, d2);
    line.Show();
    return 0;
}