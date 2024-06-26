#include <iostream>
using namespace std;
// codigo principal
int main()
{
    // declaracion de variables
    int PrincipalElection, ModoElection;
    // while para repetir el menu hasta que el usuario decida salir
    while (true)
    {
        // Mostrar menu del juego
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
        case 1:
            system("cls");
            while (true)
            {
                cout << "\tMODOS DE JUEGO: " << "\n";
                cout << "1) 1 persona." << "\n";
                cout << "2) 2 personas." << "\n";
                cout << "3) 3 personas." << "\n";
                cout << "4) 4 personas." << "\n";
                cout << "Porfavor, ingrese su eleccion: " << "\n";
                cin >> ModoElection;

                switch (ModoElection)
                {
                case 1:
                    return 0;
                    break;
                case 2:
                    return 0;
                    break;
                case 3:
                    return 0;
                    break;
                case 4:
                    return 0;
                    break;

                default:
                    system("cls");
                    cout << "Error opcion ingresada no valida." << "\n";
                    cout << "Porfavor, ingrese una de las opciones del menu." << "\n";
                    cout << "\n";
                }
            }
        case 2:
            system("cls");
            cout << "Preguntas frecuentes:" << endl;
            break;
        case 3:
            system("cls");
            cout << "\tEquipo de trabajo: " << "\n";
            cout << "walter Samuel Guillen Gonzalez / No de Carnet: 00097524." << "\n";
            cout << "Stephanie Alessandra Vasquez Maravilla / No de Carnet: 00056024." << "\n";
            break;
        case 4:
            system("cls");
            cout << "\n";
            cout << "Usted ha salido exitosamente del programa." << "\n";
            cout << "Gracias por jugar :)" << "\n";
            return 0;
            break;
        default:
            system("cls");
            cout << "Error opcion ingresada no valida." << "\n";
            cout << "Porfavor, ingrese una de las opciones del menu." << "\n";
            cout << "\n";
        }
    }
}
