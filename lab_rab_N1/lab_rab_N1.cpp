

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    double a1 = 1000, b1 = 0.0001, res1, c1, c2, c3, c4, c5;
    float a2 = 1000.0, b2 = 0.0001, res2, x1, x2, x3, x4, x5;
    c1 = pow(a1 + b1, 3);
    c2 = pow(a1, 3);
    c3 = pow(3 * a1, 2);
    c4 = (3 * (a1 * b1), 2);
    c5 = pow(b1, 3);
    res1 = (c1 - (c2 + (c3 * b1)) / (c4 + c5));
    cout << "Результат задачи с типом double\t" << res1 << endl;

    x1 = pow(a2 + b2, 3);
    x2 = pow(a2, 3);
    x3 = pow(3 * a2, 2);
    x4 = (3 * (a2 * b2), 2);
    x5 = pow(b1, 3);
    res2 = (x1 - (x2 + (x3 * x1)) / (x4 + x5));
    cout << "Результат задачи с типом float\t" << res2 << endl;
    
    return 0;
    
}


