#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int a1, a2, a3;
    int d1, d2, d3;
    cin >> a1 >> d1;
    cin >> a2 >> d2;
    cin >> a3 >> d3;
    int plata = 0;
    for (int i = 1; i <= 100; i++) {
        int camioane = 0;

        if (a1 <= i && i < d1) {
            camioane++;
        }
        if (a2 <= i && i < d2) {
            camioane++;
        }
        if (a3 <= i && i < d3) {
            camioane++;
        }

        if (camioane == 1) {
            plata += a;
        }
        if (camioane == 2) {
            plata += 2*b;
        }
        if (camioane == 3) {
            plata+= 3*c;
        }
    }

    cout <<plata << endl;
    return 0;
}
