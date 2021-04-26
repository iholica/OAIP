#define _USE_MATH_DEFINES 
#include <cmath>
#include <iostream>


using namespace std;

typedef double (*TFunction)(double);    // Декларация типа указателя на функцию
double FunctionY(double);               // Декларации прототипов функций
double FunctionS(double);
double FunctionYMinusS(double);
void Out_Rez(TFunction, double, double, double);


int main()
{
    double a, b, h;

    cout << "Enter a, b, h: " << endl;
    cin >> a;
    cin >> b;
    cin >> h;

    cout << "FunctionY" << endl;
    Out_Rez(FunctionY, a, b, h);

    cout << "FunctionS" << endl;
    Out_Rez(FunctionS, a, b, h);

    cout << "FunctionYMinusS" << endl;
    Out_Rez(FunctionYMinusS, a, b, h);

    cout << "Press any key ..." << endl;
    return getchar();

}

double FunctionY(double x)
{
    return -1.0 * (1.0 / 2.0) * log10(1.0 - 2.0 * x * cos(3.14 / 3.0) + pow(x, 2.0));
}
double FunctionS(double x)
{
   double m = 1.0;
   double s = 0.0;
   int k = 1.0;

   for (int k = 1.0; k <= 10; k++)
   {
       m *= x;
       s += (m * cos((k * 3.14) / 3.0)) / k;
   }

    return s;
}
double FunctionYMinusS(double x)
{
    return fabs(FunctionY(x) - FunctionS(x));
}
void Out_Rez(TFunction function, double xn, double xk, double h)
{
    for (double x = xn; x <= xk; x += h)
    {
        cout << "x = " << x << " y = " << function(x)  << endl;
    }
}

