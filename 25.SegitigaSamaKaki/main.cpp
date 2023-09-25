#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Masukan Panjang Pola: ";
    cin >> n;

    cout << "Pola 1\n\n";
    for (int i = 1; i <= n; i++)
    {
        for (int x = n; x > i; x--)
        {
            cout << " ";
        }
        for (int y = 1; y <= (2 * i - 1); y++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Pola 2\n\n";
    for (int i = 1; i <= n; i++)
    {
        for (int x = 1; x < i; x++)
        {
            cout << " ";
        }
        for (int y = n; y >= (2 * i - n); y--)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Pola 3\n\n";
    for (int i = 1; i <= n; i++)
    {
        for (int x = n; x > i; x--)
        {
            cout << " ";
        }
        for (int y = 1; y <= (2 * i - 1); y++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 2; i <= n; i++)
    {
        for (int x = 1; x < i; x++)
        {
            cout << " ";
        }
        for (int y = n; y >= (2 * i - n); y--)
        {
            cout << "*";
        }
        cout << endl;
    }
}