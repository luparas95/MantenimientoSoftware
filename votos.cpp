#include <iostream>
using namespace std;
int main()
{
    char respuesta;
    int cont_A=0, cont_B=0, cont_C=0;
    cout<<"PARTIDOS CANDIDATOS\n"
        <<"   A. Partido A.\n"
        <<"   B. Partido B.\n"
        <<"   C. Partido C.\n"
        <<"Voto (fin -> F): ";
    cin>>respuesta;
    cout<<endl;
    while(respuesta!='F' && respuesta!='f')
    {
        switch(respuesta)
        {
            case 'a': case 'A': cont_A++;break;
            case 'b': case 'B': cont_B++;break;
            case 'c': case 'C': cont_C++;break;
            default:cout<<"Voto nulo.\n"<<endl;
        }
        cout<<"PARTIDOS CANDIDATOS\n"
        <<"   A. Partido A.\n"
        <<"   B. Partido B.\n"
        <<"   C. Partido C.\n"
        <<"Voto (fin -> F): ";
        cin>>respuesta;
        cout<<endl;
    }
    cout<<"Votos para el partido A: "<<cont_A<<endl;
    cout<<"Votos para el partido B: "<<cont_B<<endl;
    cout<<"Votos para el partido C: "<<cont_C<<endl;

}
