#include <iostream>

using namespace std;

int main() {
    string cadena;

    //cin>> cadena; // Lee hasta espacio o \n
    getline(cin, cadena); // Lee hasta el ○\n
    cout << cadena.size() <<endl;


    return 0;
}