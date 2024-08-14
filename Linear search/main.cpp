#include <iostream>
#include <vector>

using namespace std;

int buscarMayor(const vector<int>& lista, int valorReferencia){
    for (int numero : lista)
    {
        if(numero > valorReferencia)
        {
            return numero;
        }
    }

    return -1;
}

int main()
{
    vector<int> lista = {5,2,9,7,4,6};
    int valorReferencia = 5;

    int resultado = buscarMayor(lista, valorReferencia);

    if(resultado != -1)
    {
        cout<<"El primer numero mayor es: "<<resultado<<endl;
    }else
    {
        cout<<"No se econtro ningun numero mayor que "<<valorReferencia<<endl;
    }


    return 0;
}
