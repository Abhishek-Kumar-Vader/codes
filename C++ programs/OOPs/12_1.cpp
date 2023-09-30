#include <bits/stdc++.h>
using namespace std;

class point
{
    int x, y;
    friend void disance_betwwen_points(point, point);

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displayPoint()
    {
        cout << "your point is (" << x << ", " << y << ")" << endl;
    }
};

void disance_betwwen_points(point a, point b)
{
    int x = (a.x - b.x);
    int y = (a.y - b.y);
    cout << "the distance between the points is: " << sqrt(x * x + y * y) << endl;
}

int main()
{
    point a(4, 6); // implict call
    a.displayPoint();

    point b = point(5, 7); // explicit call
    b.displayPoint();

    disance_betwwen_points(a, b);
    return 0;
}