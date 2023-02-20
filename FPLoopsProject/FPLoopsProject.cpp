#include <iostream>

using namespace std;

int main()
{
    //int n;
    //cout << "input n: ";
    //cin >> n;
    //int amount{};
    //int i{ 1 };
    //while (i <= n)
    //{
    //    amount += i; //amount = amount + i;
    //    i++;         // i = i + 1;
    //}
    //cout << amount << "\n";

    /*float x;
    int n;
    cout << "input x: ";
    cin >> x;
    cout << "input n: ";
    cin >> n;

    float power{ 1 };
    int i{};
    while (i < n)
    {
        power *= x;
        i++;
    }

    cout << power << "\n";*/

    // бесконечный цикл пример
    /*int i{ 1 };
    while (i > 0)
    {
        cout << i++ << "\n";
    }*/

/*
    int a, b;
    int answer;
    do {
        cout << "input a, b: ";
        cin >> a >> b;

        cout << "1 - Add\n";
        cout << "2 - Sub\n";
        cout << "3 - Mult\n";
        cout << "4 - Div\n";
        cout << "0 - Exit\n";
        cout << "Your choise: ";
        cin >> answer;
        if (!answer)
            break;
        switch (answer)
        {
        case 1: cout << a + b; break;
        case 2: cout << a - b; break;
        case 3: cout << a * b; break;
        case 4: cout << (float)a / b; break;
        default:
            cout << "wrong item of menu\n";
        }
        cout << "\n";
    } while (true);
*/

    /*float x = 1.0;
    while (x >= 0)
    {
        cout << x << "\n";
        x -= 0.1;
    }*/

    int n;
    cout << "input number of Fibonachi digital: ";
    cin >> n;

    int f0{};
    int f1{ 1 };
    int f;
    int i{ 1 };
    while (i < n)
    {
        f = f0 + f1;
        f0 = f1;
        f1 = f;
        i++;
    }
    cout << "F[" << n << "]= " << f1 << "\n";

}
