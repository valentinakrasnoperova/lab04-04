#include <iostream>
#include <iomanip>
#include "cmath"

using namespace std;
int main()
{
    double x, xp, xk, dx, y, R;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "R = "; cin >> R;

    cout << fixed;
    cout << "Function value table" << endl;
    cout << "---------------------------" << endl;
    cout << "|" << setw(7) << "x" << "  |"
         << setw(7) << "y" << "  |" << endl;
    cout << "---------------------------" << endl;
    x = xp;
    while (x <= xk)
    {
        if (x<=-8-R)
            y = -R;
        else
        if (-8-R<=x && x<=-8+R)
            y =  sqrt(R*R - (x+8)*(x+8))-R;
        else
        if (-8+R<=x && x<=2)
            y = (2*x + 16.0+ R*x - 4*R)/(10.0 - R);
        else
        if (2<=x && x<=6)
            y = 0;
        else
            y = (x-6.0)*(x-6.0);

        cout << "|" << setw(7) << setprecision(3) << x
             << "|" << setw(10) << setprecision(3) << y
             << "|" << endl;
        x +=dx;
    }
    cout << "---------------------------" << endl;
    return 0;
}
