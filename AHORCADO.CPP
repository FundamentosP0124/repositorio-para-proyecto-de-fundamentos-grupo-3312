#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
using namespace std;

// Declaracion de funciones
string dificultad2(int &opc);
string Dificultad(int &opc);
void Jugar(string palabra);
void JugarDos(string palabra);
void Cuerpo();
void jugadores();
void Ayuda();
void mostrarPuntuaciones();

// Variables globales
int vida, opc, x, aciertos[3], errores[3], puntuaciones[3];
string PalabraEscondida, Errores, nombres[3];
char LetraSeleccionada, volverjugar, correcto, volver, puntuacion;
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
                //Mostrar menu de modos de juego
                cout << "\tMODOS DE JUEGO: " << "\n";
                cout << "1) Un solo jugador." << "\n";
                cout << "2) Dos jugadores." << "\n";
                cout << "Porfavor, ingrese su eleccion: " << "\n";
                cin >> ModoElection;
                //Switch para opciones del menu de modos de juego
                switch (ModoElection)
                {
                case '1':
                    palabra = Dificultad(opc);
                    Jugar(palabra);
                    break;
                case '2':
                    jugadores();
                    palabra = dificultad2(opc);
                    JugarDos(palabra);
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
            Ayuda();
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
            cout << "Walter Samuel Guillen Gonzalez / No de Carnet: 00097524." << "\n";
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

// Funcion dificultad para 2 jugadores
string dificultad2(int &opc)
{
    // Declaracion variables
    string Facil[15] = {"plumas", "jirafa", "mueble", "estufa", "libros", "hormiga", "caminar", "manzana", "parpado", "fuegos", "reglas", "botella", "cuadro", "pintura", "ardilla"};
    string Intermedio[15] = {"mariposas", "pantuflas", "esmeralda", "fantasma", "florero", "cocodrilo", "alimentos", "galletas", "panaderos", "salvavidas", "espejismo", "trompeta", "aventuras", "buzonero", "caminante"};
    string Dificil[15] = {"helicoptero", "maravilloso", "astronauta", "computadora", "arquitecto", "maratonista", "deslizador", "libelula", "panoramico", "carismatico", "tradicional", "estanteria", "dinosaurio", "ferrocarril", "agradecido"};
    string palabra;
    char difelection;

    system("cls");
    // While en caso de ingresar opcion no valida
    while (difelection != '1' && difelection != '2' && difelection != '3')
    {
        //Menu de dificultad
        cout << "\tMODOS DE DIFICULTAD: " << "\n";
        cout << "1) Facil." << "\n";
        cout << "2) Intermedio." << "\n";
        cout << "3) Dificil." << "\n";
        cout << "Porfavor,ingrese su eleccion: " << "\n";
        cin >> difelection;

        //Switch para eleccion dificultad / Casos con semilla para determinar palabra a utilizar en el juego.
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

// Funcion jugar partida para un jugador
void Jugar(string palabra)
{
    system("cls");
    // Variables que se deben reiniciar en cada partida
    PalabraEscondida = "";
    Errores = "";
    vida = 6;
    // For para esconder la palabra al jugador
    for (int i = 0; i < (int)palabra.size(); i++)
    {
        PalabraEscondida += "-";
    }
    //Desarrollo del juego para un jugador
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
            cout << "\tFelicidades, has adivinado la palabra!" << "\n";
            cout << "\t\t\tGANASTE" << "\n";
            cout << "\n";
            cout << "Ingrese 1 para volver a jugar, o ingrese cualquier caracter para volver al menu principal:" << "\n";
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
        cout << "Ingrese 1 para volver a jugar, o ingrese cualquier caracter para volver al menu principal:" << "\n";
        cin >> volverjugar;
    }
    // Switch para determinar si vuelve a jugar o no.
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

// Funcion jugar partida para dos jugadores
void JugarDos(string palabra)
{
    system("cls");
    // Variables que se deben reiniciar en cada partida
    x=1;
    PalabraEscondida = "";
    Errores = "";
    vida = 6;
    //For para reinciar arreglos
    for (int i = 1; i < 3; i++)
    {
        aciertos[i] = 0;
        errores[i] = 0;
    }
    //For para esconder la palabra al jugador
    for (int i = 0; i < (int)palabra.size(); i++)
    {
        PalabraEscondida += "-";
    }
    //Desarrollo del juego para dos jugadores
    while (vida > 0)
    {
        cout << "\t<<<<<<<<AHORCADO GAME>>>>>>>>" << "\n";
        Cuerpo();
        cout << "\n";
        cout<<"Turno de -----> "<< nombres[x]<<"\n";
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
                aciertos[x]++; 
            }
        }
        if (LetraCorrecta == false)
        {
            vida--;
            Errores += LetraSeleccionada;
            errores[x]++;
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
            cout << "\tFelicidades, han adivinado la palabra!" << "\n";
            cout << "\t\t\tGANARON" << "\n";
            cout << "\n";
            cout << "Ingrese cualquier caracter para obtener las puntuaciones: " << "\n";
            cin >> puntuacion;
            switch (puntuacion)
            {
            case '0':
            default:
            {
                mostrarPuntuaciones();
                break;
            }
            }
            cout << "Ingrese 1 para volver a jugar, o ingrese cualquier caracter para volver al menu principal:" << "\n";
            cin >> volverjugar;
            break;
        }

        if (x < 2)
        {
            x++;
        }
        else if (x == 2)
        {
            x = x / 2;
        }
    }
    if (PalabraCompleta == false)
    {
        cout << "\t<<<<<<<<AHORCADO GAME>>>>>>>>" << "\n";
        Cuerpo();
        cout << "Fallos cometidos: " << Errores << "\n";
        cout << "La palabra a adivinar era: " << palabra << "\n";
        cout << "\tLo sentimos, no han adivinado la palabra :(" << "\n";
        cout << "\t\t\tPERDIERON" << "\n";
        cout << "\n";
        cout << "Ingrese cualquier caracter para obtener las puntuaciones: " << "\n";
        cin >> puntuacion;
        //Switch para mostrar puntuaciones de partida y determinar ganador
        switch (puntuacion)
        {
        case '0':
        default:
        {
            mostrarPuntuaciones();
            break;
        }
        }
        cout << "Ingrese 1 para volver a jugar, o ingrese cualquier caracter para volver al menu principal:" << "\n";
        cin >> volverjugar;
    }

    // Switch para determinar si vuelve a jugar o no
    switch (volverjugar)
    {
    case '1':
    {
        palabra = dificultad2(opc);
        JugarDos(palabra);
    }
    default:
    {
        system("cls");
        main();
    }
    }
}
//Funcion para determinar ganador de juego para dos personas
void mostrarPuntuaciones()
{
    system("cls");
    cout << "\tPUNTUACIONES:"<< "\n";
    //For para determinar puntuacion de cada jugador
    for (int i = 1; i < 3; i++)
    {
        cout << "Jugador: " << nombres[i] << "\n";
        cout << "Cantidad de aciertos: " << aciertos[i] << "\n";
        cout << "Cantidad de errores: " << errores[i] << "\n";
        puntuaciones[i] = aciertos[i] - errores[i];
        cout << "Puntuacion: " << puntuaciones[i] << "\n";
        cout << "\n";
    }
    //If para determinar ganador
    if (puntuaciones[1] > puntuaciones[2])
    {
        cout << "EL GANADOR ES: " << nombres[1] << "\n";
    }
    else if (puntuaciones[2] > puntuaciones[1])
    {
        cout << "\tEL GANADOR ES: " << nombres[2] << "\n";
    }
    else
    {
        cout << "ES UN EMPATE" << "\n";
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
//Funcion para que los jugadores ingresen sus nombres y confirmar que estan correctos
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
//Funcion para mostrar archivo de ayuda
void Ayuda()
{

    ifstream archivo("PREGUNTASFRECUENTES.txt");
    if (archivo.is_open())
    {
        string ayuda;
        while (getline(archivo, ayuda))
        {
            cout << ayuda << endl;
        }
        archivo.close();
    }
    else
    {
        cout << "No se pudo abrir el archivo de ayuda." << endl;
    }
}
