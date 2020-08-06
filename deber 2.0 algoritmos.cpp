#include <iostream>
using namespace std;
void ingresar(double a[], double n);
void imprimir(double a[], double n);
int main()
{
    double arreglo[10];
    double n = 10;
    cout << "Ingresar 10 elementos comprendidos entre 50 -100\n";
    ingresar(arreglo, n);
    cout << endl;
    cout << "Elementos de arreglo 1\t\ty\t Elementos del arreglo 2  \n";
    imprimir(arreglo, n);
    return 0;
}
void ingresar(double a[], double n)
{
    int i;
    bool YT;
    int s = 1;
    for (i = 0; i < n; i++)
    {
        do {

            cout << "Ingrese el elemento " << "[" << s << "]" << endl;
            cin >> a[i];
            if (a[i] > 50 & a[i] < 100) {
                YT = true;
                s++;
            }
            else {
                cout << "valores incorrecto deben estar en un rago de 50 - 100\n";
                YT = false;
            }
        } while (YT == false);
    }
}

void imprimir(double a[], double n)
{
    int i;
    for (i = 0; i < n; i++)
    {
    }
    for (i = 0; i < n; i++)
    {
        double x = 0.5;
        double NUM = a[i] * x;
        cout << a[i] << "\t\t\t\t\t" << NUM << endl;
    }
}
