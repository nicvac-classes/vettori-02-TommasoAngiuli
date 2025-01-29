#include <iostream>
using namespace std;
int main() 
{
    int n, i;
    string nome;

    cout << "inserisci il numero di alunni" << endl;
    cin >> n;
    string nomi[n];
    double voti[n];
    int assenze[n];
    for (i = 0; i <= n - 1; i++) {
        cout << "inserisci il " << i + 1 << "° nome" << endl;
        cin >> nomi[i];
        cout << "inserisci il voto" << endl;
        cin >> voti[i];
        cout << "inserisci le assenze" << endl;
        cin >> assenze[i];
    }
    for (i = 0; i <= n - 1; i++) {
        cout << "lo studente " << nomi[i] << " ha voto " << voti[i] << " e " << assenze[i] << " assenze " << endl;
    }
    cout << "inserisci il numero di uno studente" << endl;
    cin >> i;
    cout << "lo studente " << nomi[i] << " ha voto " << voti[i] << " e " << assenze[i] << " assenze " << endl;
    cout << "inserisci il nome di uno studente" << endl;
    cin >> nome;
    i = 0;
    while (nomi[i] != nome) {
        i = i + 1;
    }
    cout << "lo studente " << nomi[i] << " ha voto " << voti[i] << " e " << assenze[i] << " assenze " << endl;
}