#include <iostream>
#include <math.h>

using namespace std;

int main()
{   double m;
    cout << " Enter mass of the spaceship " << endl;
    cout <<"m = ";
    cin >> m;
    m = (m / 3);
    m= round(m)- 2;
    cout << m << "  tonnes " ;
    return 0;
}
