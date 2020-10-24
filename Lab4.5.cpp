#include <iostream>
#include <cmath>
#include<iomanip>
#include<time.h>

using namespace std;

int main()
{
    double R;
    double x;
    double y;
    int i;

    cout << "R = "; cin >> R;
    
    srand((unsigned)time(NULL));

    for (i = 1; i <= 10; i++) {
        cout << "x = "; cin >> x;
        cout << "y = "; cin >> y;

        if ((y <= 0 && x >= 0 && x < R && y > -R && pow(x - R, 2) + pow(y + R, 2) > pow(R, 2)) ||
            (y >= 0 && x <= 0 && x > -R && y < R && pow(x + R, 2) + pow(y - R, 2) > pow(R, 2)))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    cout << endl << fixed;

    for (i = 1; i <= 10; i++) {
        x = 2 * R * rand() / RAND_MAX - R;
        y = 2 * R * rand() / RAND_MAX - R;

        if ((y <= 0 && x >= 0 && x < R && y > -R && pow(x - R, 2) + pow(y + R, 2) > pow(R, 2)) ||
            (y >= 0 && x <= 0 && x > -R && y < R && pow(x + R, 2) + pow(y - R, 2) > pow(R, 2)))
            cout << setw(8) << setprecision(4) << x << "  " << setw(8) << setprecision(4) << y << "  " << "yes" << endl;
        else
            cout << setw(8) << setprecision(4) << x << "  " << setw(8) << setprecision(4) << y << "  " << "no" << endl;
    }

    system("pause");
    cin.get();
    return 0;
}

