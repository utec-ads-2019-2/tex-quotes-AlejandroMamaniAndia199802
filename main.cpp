#include <iostream>
#include <string.h>
#include <cstring>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int numeromujeres;
string country;
string nombre;
string appellido;

map<string, int> list_of_conquests;

void contarpaises(int numeromujeres){
    for (int i = 0; i < numeromujeres; i++) {
        cin>>country>>nombre>>appellido;
        list_of_conquests[country] += 1;
    }
}
void imprimir(pair<string, int>  const& a)
{

    cout << a.first << "   " << a.second << endl;
}

int main()
{
    cin>>numeromujeres;
    contarpaises(numeromujeres);
    for_each (
            list_of_conquests.begin(),
            list_of_conquests.end(),
            imprimir
    );
}