// ЛР 6.3 іт

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void Print(int* a, const int size);
void Sort(int* a, const int size);

template <typename T>
void Print(T* a, const int size);
template <typename T>
void Sort(T* a, const int size);

int main()
{
    const int n = 10;

    int a[n] = { 5, -2, 9, 0, 7, 3, -8, 3, 6, 1 };
    cout << "Sort(a, n):" << endl;
    Print(a, n);
    Sort(a, n);
    Print(a, n);

    int a2[n] = { 5, -2, 9, 0, 7, 3, -8, 3, 6, 1 };
    cout << "Sort<int>(a, n):" << endl;
    Print<int>(a2, n);
    Sort<int>(a2, n);
    Print<int>(a2, n);

    double b[n] = { 4.4, 1.5, 9.9, 0.0, 7.1, 3.3, 8.2, 3.3, 6.6, 1.1 };
    cout << "Sort<double>(b, n):" << endl;
    Print<double>(b, n);
    Sort<double>(b, n);
    Print<double>(b, n);

    string c[n] = { "red", "green", "blue", "white", "black", "yellow", "orange", "pink", "brown", "gray" };
    cout << "Sort<string>(c, n):" << endl;
    Print<string>(c, n);
    Sort<string>(c, n);
    Print<string>(c, n);

    return 0;
}

void Print(int* a, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(8) << a[i];
    cout << endl;
}

void Sort(int* a, const int size)
{
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - 1 - i; j++)
            if (a[j] > a[j + 1])
            {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
}

template <typename T>
void Print(T* a, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(8) << a[i];
    cout << endl;
}

template <typename T>
void Sort(T* a, const int size)
{
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - 1 - i; j++)
            if (a[j] > a[j + 1])
            {
                T t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
}