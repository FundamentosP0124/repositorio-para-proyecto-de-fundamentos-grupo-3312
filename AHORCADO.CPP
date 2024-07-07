#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

// Declaracion de funciones
string dificultad2(int &opc);
string Dificultad(int &opc);
void Jugar(string palabra);
void Cuerpo();
void jugadores();

// Variables globales
int vida, opc;
string PalabraEscondida, Errores, nombres[3];
char LetraSeleccionada, volverjugar, correcto, volver;
bool LetraCorrecta, PalabraCompleta;

// codigo principal
int main()
{
    // declaracion de variables
    char PrincipalElection, ModoElection;
    string palabra;

    // while para repetir el menu hasta que el usuario decida salir
    while (true)
    {
        // Mostrar menu del juego
        cout << "\n"
             << "\tBIENVENIDO A" << "\n";
        cout << "<<<<<<<<AHORCADO GAME>>>>>>>>" << "\n";
        cout << "\t<<MENU DE JUEGO>>" << "\n";
        cout << "1) Jugar." << "\n";
        cout << "2) Ayuda." << "\n";
        cout << "3) Equipo de desarrollo." << "\n";
        cout << "4) Salir." << "\n";
        cout << "Porfavor, ingrese su eleccion: " << "\n";
        cin >> PrincipalElection;
        // Switch para opciones del menu principal.
        switch (PrincipalElection)
        {
        case '1':
            system("cls");
            while (true)
            {
                cout << "\tMODOS DE JUEGO: " << "\n";
                cout << "1) Un solo jugador." << "\n";
                cout << "2) Dos jugadores." << "\n";
                cout << "Porfavor, ingrese su eleccion: " << "\n";
                cin >> ModoElection;

                switch (ModoElection)
                {
                case '1':
                    palabra = Dificultad(opc);
                    Jugar(palabra);
                    break;
                case '2':
                    jugadores();
                    palabra = dificultad2(opc);
                    break;
                default:
                    system("cls");
                    cout << "Error opcion ingresada no valida." << "\n";
                    cout << "Porfavor, ingrese una de las opciones del menu." << "\n";
                    cout << "\n";
                }
            }
        case '2':
            system("cls");
            cout << "Preguntas frecuentes:" << "\n";
            cout << "\n";
            cout << "Ingrese cualquier caracter para regresar al menu principal: " << "\n";
            cin >> volver;
            switch (volver)
            {
            case '0':
                break;
            default:
                break;
            }
            system("cls");
            break;
        case '3':
            system("cls");
            cout << "\tEquipo de trabajo: " << "\n";
            cout << "walter Samuel Guillen Gonzalez / No de Carnet: 00097524." << "\n";
            cout << "Stephanie Alessandra Vasquez Maravilla / No de Carnet: 00056024." << "\n";
            cout << "\n";
            cout << "Ingrese cualquier caracter para regresar al menu principal: " << "\n";
            cin >> volver;
            switch (volver)
            {
            case '0':
                break;
            default:
                break;
            }
            system("cls");
            break;
        case '4':
            system("cls");
            cout << "\n";
            cout << "Usted ha salido exitosamente del programa." << "\n";
            cout << "Gracias por jugar :)" << "\n";
            exit(0);
            break;
        default:
            system("cls");
            cout << "Error opcion ingresada no valida." << "\n";
            cout << "Porfavor, ingrese una de las opciones del menu." << "\n";
            cout << "\n";
        }
    }
}

// Funcion dificultad para 2 personas
string dificultad2(int &opc)
{
    // declaracion variables
    string Facil[15] = {"plumas", "jirafa", "mueble", "estufa", "libros", "hormiga", "caminar", "manzana", "parpado", "fuegos", "reglas", "botella", "cuadro", "pintura", "ardilla"};
    string Intermedio[15] = {"mariposas", "pantuflas", "esmeralda", "fantasma", "florero", "cocodrilo", "alimentos", "galletas", "panaderos", "salvavidas", "espejismo", "trompeta", "aventuras", "buzonero", "caminante"};
    string Dificil[15] = {"helicoptero", "maravilloso", "astronauta", "computadora", "arquitecto", "maratonista", "deslizador", "libelula", "panoramico", "carismatico", "tradicional", "estanteria", "dinosaurio", "ferrocarril", "agradecido"};
    string palabra;
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
// Funcion dificultad para 1 jugador.
string Dificultad(int &opc)
{
    // Declaracion de variables.
    string ModoFacil[15] = {"libro", "amigo", "silla", "bosque", "carro", "zurdo", "ajeno", "fruta", "verde", "viento", "litro", "verbo", "grifo", "blusa", "cauce"};
    string ModoIntermedio[15] = {"abismo", "carcel", "lampara", "musculo", "polvora", "simbolo", "dictado", "purpura", "trebol", "picada", "tiempo", "trabajo", "batalla", "persona", "celeste"};
    string ModoDificil[15] = {"xilofono", "quimica", "kilometro", "girasoles", "cangrejos", "panteras", "cosechas", "tornados", "borrasca", "triángulo", "subtitulos", "alfareros", "carretera", "remolinos", "gravedad"};
    string palabra;
    char DifElection;

    system("cls");
    // while para repetir el menu si el usuario ingresa una opcion invalida.
    while (DifElection != '1' && DifElection != '2' && DifElection != '3')
    {
        // Mostrar menu de dificultad.
        cout << "\tMODOS DE DIFICULTAD: " << "\n";
        cout << "1) Facil." << "\n";
        cout << "2) Intermedio." << "\n";
        cout << "3) Dificil." << "\n";
        cout << "Porfavor, ingrese su eleccion: " << "\n";
        cin >> DifElection;
        // Switch para opciones del menu de dificultad / Casos con semilla para determinar palabra a utilizar en el juego.
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

// Funcion jugar partida
void Jugar(string palabra)
{
    system("cls");
    // Variables que se deben reiniciar en cada partida
    PalabraEscondida = "";
    Errores = "";
    vida = 6;
    // for para esconder la palabra al jugador
    for (int i = 0; i < (int)palabra.size(); i++)
    {
        PalabraEscondida += "-";
    }

    while (vida > 0)
    {
        cout << "\t<<<<<<<<AHORCADO GAME>>>>>>>>" << "\n";
        Cuerpo();
        cout << "\n";
        cout << "Errores: " << "\t" << Errores << "\n";
        cout << "Palabra a adivinar: " << "\t" << PalabraEscondida << "\n";
        cout << "Ingrese la letra que desea, en minuscula: " << "\n";
        cin >> LetraSeleccionada;

        system("cls");
        LetraCorrecta = false;
        for (int i = 0; i < (int)palabra.size(); i++)
        {
            if (palabra[i] == LetraSeleccionada)
            {
                PalabraEscondida[i] = LetraSeleccionada;
                LetraCorrecta = true;
            }
        }
        if (LetraCorrecta == false)
        {
            vida--;
            Errores += LetraSeleccionada;
        }

        PalabraCompleta = true;
        for (int i = 0; i < (int)palabra.size(); i++)
        {
            if (PalabraEscondida[i] == '-')
            {
                PalabraCompleta = false;
            }
        }
        if (PalabraCompleta)
        {
            cout << "\t<<<<<<<<AHORCADO GAME>>>>>>>>" << "\n";
            Cuerpo();
            cout << "Fallos cometidos: " << Errores << "\n";
            cout << "Palabra: " << palabra << "\n";
            cout << "\tFelicidades has adivinado la palabra!" << "\n";
            cout << "\t\t\tGANASTE" << "\n";
            cout << "\n";
            cout << "Ingrese 0 para volver al menu principal, o ingrese 1 para volver a jugar:" << "\n";
            cin >> volverjugar;
            break;
        }
    }
    if (PalabraCompleta == false)
    {
        cout << "\t<<<<<<<<AHORCADO GAME>>>>>>>>" << "\n";
        Cuerpo();
        cout << "Fallos cometidos: " << Errores << "\n";
        cout << "La palabra a adivinar era: " << palabra << "\n";
        cout << "\tLo sentimos, no has adivinado la palabra :(" << "\n";
        cout << "\t\t\tPERDISTE" << "\n";
        cout << "\n";
        cout << "Ingrese 0 para volver al menu principal, o ingrese 1 para volver a jugar:" << "\n";
        cin >> volverjugar;
    }
    // switch para determinar si vuelve a jugar o no.
    switch (volverjugar)
    {
    case '1':
    {
        palabra = Dificultad(opc);
        Jugar(palabra);
    }
    default:
    {
        system("cls");
        main();
    }
    }
}
// Funcion para el dibujo de ahorcado.
void Cuerpo()
{
    switch (vida)
    {
    case 6:
        cout << " _________" << "\n";
        cout << " |       |" << "\n";
        cout << " | " << "\n";
        cout << " | " << "\n";
        cout << " | " << "\n";
        cout << " | " << "\n";
        cout << " | " << "\n";
        cout << "___" << "\n";
        break;
    case 5:
        cout << " _________" << "\n";
        cout << " |       |" << "\n";
        cout << " |       O" << "\n";
        cout << " | " << "\n";
        cout << " | " << "\n";
        cout << " | " << "\n";
        cout << " | " << "\n";
        cout << "___" << "\n";
        break;
    case 4:
        cout << " _________" << "\n";
        cout << " |       |" << "\n";
        cout << " |       O" << "\n";
        cout << " |       |" << "\n";
        cout << " | " << "\n";
        cout << " | " << "\n";
        cout << " | " << "\n";
        cout << "___" << "\n";
        break;
    case 3:
        cout << " _________" << "\n";
        cout << " |       |" << "\n";
        cout << " |       O" << "\n";
        cout << " |      /|" << "\n";
        cout << " | " << "\n";
        cout << " | " << "\n";
        cout << " | " << "\n";
        cout << "___" << "\n";
        break;
    case 2:
        cout << " _________" << "\n";
        cout << " |       |" << "\n";
        cout << " |       O" << "\n";
        cout << " |      /|\\" << "\n";
        cout << " | " << "\n";
        cout << " | " << "\n";
        cout << " | " << "\n";
        cout << "___" << "\n";
        break;
    case 1:
        cout << " _________" << "\n";
        cout << " |       |" << "\n";
        cout << " |       O" << "\n";
        cout << " |      /|\\" << "\n";
        cout << " |      /" << "\n";
        cout << " | " << "\n";
        cout << " | " << "\n";
        cout << "___" << "\n";
        break;
    case 0:
        cout << " _________" << "\n";
        cout << " |       |" << "\n";
        cout << " |       O" << "\n";
        cout << " |      /|\\" << "\n";
        cout << " |      / \\" << "\n";
        cout << " | " << "\n";
        cout << " | " << "\n";
        cout << "---" << "\n";
        break;
    }
}

void jugadores()
{
    while (correcto != '0')
    {
        correcto = '1';
        system("cls");
        cout << "Porfavor, ingrese el nombre del jugador 1:" << "\n";
        cin >> nombres[1];
        cout << "Porfavor, ingrese el nombre del jugador 2:" << "\n";
        cin >> nombres[2];
        system("cls");
        cout << "Los nombres que ingreso fueron los siguientes: " << "\n";
        cout << "1. " << nombres[1] << "\n";
        cout << "2. " << nombres[2] << "\n";
        cout << "\n";
        cout << "Si estan bien ingrese cero, si desea cambiarlos ingrese cualquier caracter:" << "\n";
        cin >> correcto;
    }
}
