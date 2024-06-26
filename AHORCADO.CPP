#include <iostream>
#include <ctime>
using namespace std;
// declaracion de funciones.
string Dificultad();
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
                    Dificultad();
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
//Funcion dificultad para 1 y 2 personas.
string Dificultad()
{
    //Declaracion de variables.
    string ModoFacil[15] = {"libro", "amigo", "silla", "bosque", "carro", "zurdo", "ajeno", "fruta", "verde", "viento", "litro", "verbo", "grifo", "blusa", "cauce"};
    string ModoIntermedio[15] = {"abismo", "carcel", "lampara", "musculo", "polvora", "simbolo", "dictado", "purpura", "trebol", "picada", "tiempo", "trabajo", "batalla", "persona", "celeste"};
    string ModoDificil[15] = {"xilofono", "quimica", "kilometro", "girasoles", "cangrejos", "panteras", "cosechas", "tornados", "borrasca", "triángulo", "subtitulos", "alfareros", "carretera", "remolinos", "gravedad"};
    string palabra;
    int opc;
    char DifElection;

    system("cls");
    //while para repetir el menu si el usuario ingresa una opcion invalida.
    while (DifElection!='1'&& DifElection!='2' && DifElection!='3')
    {
        //Mostrar menu de dificultad.
        cout << "\tMODOS DE DIFICULTAD: " << "\n";
        cout << "1) Facil." << "\n";
        cout << "2) Intermedio." << "\n";
        cout << "3) Dificil." << "\n";
        cout << "Porfavor, ingrese su eleccion: " << "\n";
        cin >> DifElection;
        //Switch para opciones del menu de dificultad / Casos con semilla para determinar palabra a utilizar en el juego.
        switch (DifElection)
        {
        case '1':
            srand(time(0));
            opc = rand() % 15;
            palabra = ModoFacil[opc];
            break;

        case '2':
            srand(time(0));
            opc = rand() % 15;
            palabra = ModoIntermedio[opc];
            break;
        case '3':
            srand(time(0));
            opc = rand() % 15;
            palabra = ModoDificil[opc];
            break;

        default:
            system("cls");
            cout << "Error. Opcion ingresada no valida." << "\n";
            cout << "Porfavor, ingrese una de las opciones del menu." << "\n";
            cout << "\n";
        }
    }
    return palabra;
}
