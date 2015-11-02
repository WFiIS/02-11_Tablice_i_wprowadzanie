#include <iostream>

using namespace std;

int main()
{
    char proces;

    do {
        string wyraz;
        bool wynik;

        cout << "Podaj wyraz: ";
        cin >> wyraz;

        char tab[wyraz.length()];
        for (int i = 0; i < wyraz.length(); i++) {
            tab[i] = wyraz.at(i);
        }

        for (int i = 0; i < wyraz.length(); i++) {
            int j = wyraz.length() - i - 1;
            if (i <= j) {
                if (tab[i] == tab[j]) {
                    wynik = true;
                } else {
                    wynik = false;
                    break;
                }
            } else {
                break;
            }
        }

        if (wynik) {
            cout << "Wyraz jest palindromem." << endl;
        } else {
            cout << "Wyraz nie jest palindromem." << endl;
        }

        cout << "Czy Czy chcesz podac nastepny? (T/t) " << endl;
        cin >> proces;
    } while (proces == 't' || proces == 'T');
    return 0;
}
