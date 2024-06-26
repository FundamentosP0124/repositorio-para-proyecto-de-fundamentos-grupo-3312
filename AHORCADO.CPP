#include <iostream>
using namespace std;
// declaracion de variables
int PrincipalElection;
// codigo principal
int main()
{
    cout << "\t<<<<MENU DE JUEGO>>>>" << "\n";
    cout << "1) Jugar." << "\n";
    cout << "2) Ayuda." << "\n";
    cout << "3) Equipo de desarrollo." << "\n";
    cout << "4) Salir." << "\n";
    cout << "Porfavor, ingrese su eleccion: " << "\n";
    cin >> PrincipalElection;
    //Switch para opciones del menu principal.
    switch (PrincipalElection)
    {
    default:
        cout << "\n";
        cout << "Error opcion ingresada no valida." << "\n";
        cout << "Porfavor, ingrese una de las opciones del menu." << "\n";
        cout << "\n";
    }
    return 0;
}
