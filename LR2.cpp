#include <iostream>
#include <cmath>

using namespace std;

long long  fact(int n) {
    long long f = 1;
    for (int i = 1; i <= n; ++i) {
        f *= i;
    }
    return f;
}

int main()
{
    setlocale(LC_ALL, "RUS");
    char a = 0;// №1
    cout << "ASCII" << endl;
    for (int i = 0; i <= 255; ++i) {

        cout<<"Code: "<< i <<" Char: "<< a << endl;
        a++;
    }

    cout << "Введите символ:" << endl;//№2
    cin >> a;
    if ((a >= 48) && (a <= 57))
        cout << "Число" << endl;
    else if ((a >= 65) && (a <= 90) || (a >= 97) && (a <= 122))
        cout << "Буква" << endl;
    else cout << "Неизвестно" << endl;

    unsigned int x;
    int y;//№3
    cout << "Введите X" << endl;
    cin >> x;
    y = x % 5;
    switch (y)
    {
    case 0: cout << 0 << endl; break;
    case 1:cout << x << endl; break;
    case 2:cout << pow(x, 2) << endl; break;
    case 3:cout << 1 << endl; break;
    case 4:cout << static_cast<int>(x * (-1)) << endl; break;
    }


double y1; //№4
cout << "Введите X" << endl;
float x1;
int    n = 0;
float q = 0.01;
double t = 0;
cin >> x1;
t = 1;
y1 = cos(x1);

for (int i = -2; i >= -6; --i)
{
    n = 0;
    while (abs(y1-t) > q)
    {
        n++;
        cout << n << " ";
        t += pow(-1, n) * pow(x1, 2 * n) / fact(n * 2);

    }
    cout << "Необходимо итераций для 10^"<< q <<": "<< n << endl;
    q *= 0.1;
    t = 0;
}
return 0;
}
