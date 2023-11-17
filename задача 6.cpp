
#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    cout << "Введите число: " << endl;
    int n;
    cin >> n;
    cout << "Длеители числа"<< " " << n << ":S" << " ";
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) { cout << i << ", ";
        }
    }
    cout << endl;
    return 0;
}
