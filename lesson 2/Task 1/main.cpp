#include <iostream>
using namespace std;

int main()
{
    int i, n, sum = 0;
    cout << " Enter values " << endl;
    cin >> n;
    for (i = n; i > 0; i = i / 10){
        sum += i%10;
    }
    cout << "sum = " << sum;

    return 0;
}
