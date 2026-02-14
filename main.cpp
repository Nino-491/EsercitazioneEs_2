#include <iostream>
using namespace std;

void scambia (int &n1, int &n2) {
    int passaggio;
    passaggio = n1;
    n1 = n2 ;
    n2 = passaggio;
}

int main() {
    int a, b;
    cout << "Inserisci il primo numero.";
    cin >> a;
    cout << "Inserisci il secondo numero.";
    cin >> b;

    scambia(a, b);

        cout << "Il primo numero e' ora: " << a << endl;
        cout << "Il secondo numero e' ora: " << b << endl;

    return 0;
}