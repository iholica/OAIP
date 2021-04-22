#define _USE_MATH_DEFINES 
#include <cmath>
#include <iostream>


using namespace std;

typedef float (*TFunction)(float);      // Декларация типа указателя на функцию
float FunctionY(float);               // Декларации прототипов функций
float FunctionS(float, int);
void Out_Rez(float);


int main()
{
    double a, b, x, h, r, s = 0, y, m;
    int n;

    cout << "Enter a, b, n , h: " << endl;
    cin >> a;
    cin >> b;
    cin >> n;
    cin >> h;




}

float FunctionY(float a)
{
    y = -1 * (1 / 2) * log10(1 - 2 * x * cos(3.14 / 3 + pow(x, 2)));
}
float FunctionS(float a, int n)
{
    r = x;//начальное значение рекуренты
    for (int k = 1; k <= n; k++)
    {
        r = x;//рекурента
        s += (pow(x, k) * cos((k * 3.14) / 3)) / k;
    }
}
float FunctionYMinusS()
{
    m = fabs(s - y);
}
void Out_Rez(TFunction function, float xn, float xk, float h)
{
    for (float x = xn; x <= xk; x += h)
    {
        cout << "x = " << x << " y = " << function(x) << " and s - y = " << m << endl;
    }
}

