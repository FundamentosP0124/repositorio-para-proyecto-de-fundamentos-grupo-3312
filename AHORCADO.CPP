#include <iostream>
using namespace std;
// declaracion de variables
int PrincipalElection;
// codigo principal
int main()
{
    //while para repetir el menu hasta que el usuario decida salir
    while (true)
    {
        //Mostrar menu del juego
        cout << "\t<<<<MENU DE JUEGO>>>>" << "\n";
        cout << "1) Jugar." << "\n";
        cout << "2) Ayuda." << "\n";
        cout << "3) Equipo de desarrollo." << "\n";
        cout << "4) Salir." << "\n";
        cout << "Porfavor, ingrese su eleccion: " << "\n";
        cin >> PrincipalElection;
        // Switch para opciones del menu principal.
        switch (PrincipalElection)
        {
        case 4:
            cout << "\n";
            cout << "Usted ha salido exitosamente del programa." << "\n";
            cout << "Gracias por jugar :)" << "\n";
            return 0;
            break;
        default:
            system ("cls");
            cout << "Error opcion ingresada no valida." << "\n";
            cout << "Porfavor, ingrese una de las opciones del menu." << "\n";
            cout << "\n";
        }
    }
}
