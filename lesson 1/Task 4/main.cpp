#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a ,b ,c;
    float x1, x2, x, D, i = -1;
    cout << " ax^2 + bx - c = 0 " << endl;
    cout << " a = ";
    cin >> a ;
    cout << " b = ";
    cin >> b;
    cout << " c = ";
    cin >> c;
    cout << " get ready to count " << endl;
    system(" pause ");
    D = pow(b, 2) - 4 * a * c;
    if(D > 0){
        cout << " D = " << sqrt(D) << endl;
        x1 = (-b + sqrt(D))/ 2 * a;
        cout << " x1 = " << x1 << endl;
        x2 = (-b - sqrt(D))/ 2 * a;
        cout << " x2 = " << x2 << endl;
    }
        else if (D < 0){
            cout << " there is no solution ";

        }
            else{
                cout << " D = " << sqrt(D) << endl;
                x = -b / (2 * a);
                cout <<" x = "<< x << endl;
            }


    return 0;
}
