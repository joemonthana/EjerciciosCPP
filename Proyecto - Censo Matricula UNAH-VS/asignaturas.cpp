#include <iostream>
#include <cstdlib>

using namespace std;

extern void agregarAsignatura(string asignatura, int cantidad, int uv);
extern void departamento();
extern void promedio();

void asignaturas(int option)

{
    system("cls");
    int opcionAsignatura = 0;
    switch (option)
    {
    case 1:
        cout << "\t\tINFORMATICA ADMINISTRATIVA" << endl;
        cout << endl;
        cout << "\t\tClases Disponibles" << endl;
        cout << endl;
        cout << "\t\t1 - IA054 Taller de Hardware II - 4UV" << endl;
        cout << "\t\t2 - IA065 Lenguaje de Programacion II - 4 UV" << endl;
        cout << "\t\t3 - IA-075 Sistemas Operativos I - 4 UV" << endl;
        cout << "\t\t4 - IA-106 Base de Datos I - 4 UV" << endl;
        cout << "\t\t5 - IA-096 Sistemas Operativos II - 4 UV" << endl;
        cout << "\t\t6 - IA-127 Teoria De Sistemas - 4 UV" << endl;
        cout << "\t\t7- Regresar" << endl;
        cout << endl;
        cout << "\t\tElija una opcion: ";
        cin >> opcionAsignatura;

        switch (opcionAsignatura)
        {
        case 1:
            agregarAsignatura("\t\tIA054 - Taller de Hardware II - 4 UV", 1, 4);
            break;

        case 2:
            agregarAsignatura("\t\tIA065 Lenguaje de Programacion II - 4 UV", 1, 4);
            break;
        case 3:
            agregarAsignatura("\t\tIA-075 Sistemas Operativos I - 4 UV", 1, 4);
            break;
        case 4:
            agregarAsignatura("\t\tIA-106 Base de Datos I - 4 UV", 1, 4);
            break;
        case 5:
            agregarAsignatura("\t\tDET-395 Analisis Numerico En La Informatica - 5 UV", 1, 5);
            break;
        case 6:
            agregarAsignatura("\t\tIA-127 Teoria De Sistemas - 4 UV", 1, 4);
            break;
        case 7:
            departamento();
        
        default:
        {
            cout << "\t\tOpcion no valida";
            return;
            break;
        }
        
        }
        system("cls");
        cout << endl;
        cout << "\t\tClase Agregada" << endl << endl;
        cout << endl;
        system("pause");

        break;

    case 2: 
        cout << "\t\tLENGUAS EXTRANGERAS" << endl;
        cout << endl;
        cout << "\t\tClases Disponibles" << endl;
        cout << endl;
        cout << "\t\t1 - LB-100 Lengua Basica Inglesa - 4 UV" << endl;
        cout << "\t\t2 - TLB-100 Taller De Lengua Inglesa I - 4 UV" << endl;
        cout << "\t\t3 - IG-102 Ingles II -  4 UV" << endl;
        cout << "\t\t4 - LB-200 Lengua Basica Francesa - 4 UV" << endl;
        cout << "\t\t5 - FN-201 Frances I - 4 UV" << endl;
        cout << "\t\t6 - IG-101 Ingles I - 4 UV" << endl;
        cout << "\t\t7- Regresar" << endl;
        cout << endl;
        cout << "\t\tElija una opcion: ";
        cin >> opcionAsignatura;
        system("cls");

        switch (opcionAsignatura)
        {
        case 1:
            agregarAsignatura("\t\tLB-100 Lengua Basica Inglesa - 4 UV", 1, 4);
            break;

        case 2:
            agregarAsignatura("\t\tTLB-100 Taller De Lengua Inglesa I - 4 UV", 1, 4);
            break;
        case 3:
            agregarAsignatura("\t\tIG-102 Ingles II -  4 UV", 1, 4);
            break;
        case 4:
            agregarAsignatura("\t\tLB-200 Lengua Basica Francesa - 4 UV", 1, 4);
            break;
        case 5:
            agregarAsignatura("\t\tFN-201 Frances I - 4 UV", 1, 4);
            break;
        case 6:
            agregarAsignatura("\t\tIG-101 Ingles I - 4 UV", 1, 4);
            break;
        case 7:
            departamento();
        
        default:
        {
            cout << "\t\tOpcion no valida";
            return;
            break;
        }
        
        }
        system("cls");
        cout << endl;
        cout << "\t\tClase Agregada" << endl << endl;
        cout << endl;
        system("pause");

        break;

        case 3:
        cout << "\t\tMETODOS CUANTITATIVOS" << endl;
        cout << endl;
        cout << "\t\tClases Disponibles" << endl;
        cout << endl;
        cout << "\t\t1 - DET-175 Metodos Cuantitativos I - 5 UV" << endl;
        cout << "\t\t2 - DET-280 Metodos Cuantitativos II- 5 UV" << endl;
        cout << "\t\t3 - DET-395 Analisis Numerico -  5 UV" << endl;
        cout << "\t\t4 - CF-030 Metodos Cuantitativos En Finanzas - 4 UV" << endl;
        cout << "\t\t5 - DAE-610 Analisis Cuantitativo I - 4 UV" << endl;
        cout << "\t\t6- Regresar" << endl;
        cout << endl;
        cout << "\t\tElija una opcion: ";
        cin >> opcionAsignatura;
        system("cls");

        switch (opcionAsignatura)
        {
        case 1:
            agregarAsignatura("\t\tDET-175 Metodos Cuantitativos I - 5 UV", 1, 5);
            break;

        case 2:
            agregarAsignatura("\t\tDET-280 Metodos Cuantitativos II- 5 UV", 1, 5);
            break;
        case 3:
            agregarAsignatura("\t\tDET-395 Analisis Numerico -  5 UV", 1, 5);
            break;
        case 4:
            agregarAsignatura("\t\tCF-030 Metodos Cuantitativos En Finanzas - 4 UV", 1, 4);
            break;
        case 5:
            agregarAsignatura("\t\tDAE-610 Analisis Cuantitativo I - 4 UV", 1, 4);
            break;
        case 6:
            departamento();
        
        default:
        {
            cout << "\t\tOpcion no valida";
            return;
            break;
        }
        
        }
        system("cls");
        cout << endl;
        cout << "\t\tClase Agregada" << endl << endl;
        cout << endl;
        system("pause");

        break;


    default:
        break;
    }
}