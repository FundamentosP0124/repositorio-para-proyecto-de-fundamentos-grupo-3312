#include <iostream>
#include <ctime>
using namespace std;
// declaracion funcion
string dificultad2();
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
                    dificultad2();
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

// Funcion dificultad para 3 y 4 personas
string dificultad2()
{
    // declaracion variables
    string Facil[15] = {"plumas", "jirafa", "mueble", "estufa", "libros", "hormiga", "caminar", "manzana", "parpado", "fuegos", "reglas", "botella", "cuadro", "pintura", "ardilla"};
    string Intermedio[15] = {"mariposas", "pantuflas", "esmeralda", "fantasma", "florero", "cocodrilo", "alimentos", "galletas", "panaderos", "salvavidas", "espejismo", "trompeta", "aventuras", "buzonero", "caminante"};
    string Dificil[15] = {"helicoptero", "maravilloso", "astronauta", "computadora", "arquitecto", "maratonista", "deslizador", "libelula", "panoramico", "carismatico", "tradicional", "estanteria", "dinosaurio", "ferrocarril", "agradecido"};
    string palabra;
    int opc;
    char difelection;

    system("cls");
    // while en caso de ingresar opcion no valida
    while (difelection != '1' && difelection != '2' && difelection != '3')
    {
        // menu de dificultad
        cout << "\tMODOS DE DIFICULTAD: " << "\n";
        cout << "1) Facil." << "\n";
        cout << "2) Intermedio." << "\n";
        cout << "3) Dificil." << "\n";
        cout << "Porfavor,ingrese su eleccion: " << "\n";
        cin >> difelection;

        // switch para eleccion dificultad
        switch (difelection)
        {
        case '1':
            srand(time(0));
            opc = rand() % 15;
            palabra = Facil[opc];
            break;
        case '2':
            srand(time(0));
            opc = rand() % 15;
            palabra = Intermedio[opc];
            break;
        case '3':
            srand(time(0));
            opc = rand() % 15;
            palabra = Dificil[opc];
            break;

        default:
            system("cls");
            cout << "Error. opcion ingresada no valida." << "\n";
            cout << "Porfavor, ingrese una de las opciones del menu." << "\n";
            cout << "\n";
        }
    }
    return palabra;
}
