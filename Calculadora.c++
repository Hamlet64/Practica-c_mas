
#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    int op, suma=0, resta=0,multiplicacion=0,division=0;

    cout<<".:Menu.:";
    cout<<"1.Suma";
    cout<<"2.Resta";
    cout<<"3.Multiplicacion";
    cout<<"4.Division";

    cout<<"Ingrese una opcion:";
    cin>>op;


    if(op==1)
    {
        cout<<"Ingrese el valor de a:";
        cin>>a;
        cout<<"Ingrese el valor de b:";
        cin>>b;
        cout<<"Ingrese el valor de c:";
        cin>>c;

        suma=a+b+c;

        printf("El reslatdo es:",suma);
    }
     if(op==2)
    {
        cout<<"Ingrese el valor de a:";
        cin>>a;
        cout<<"Ingrese el valor de b:";
        cin>>b;
        cout<<"Ingrese el valor de c:";
        cin>>c;

        resta=a-b-c;

        printf("El reslatdo es:",resta);
    }
     if(op==3)
    {
        cout<<"Ingrese el valor de a:";
        cin>>a;
        cout<<"Ingrese el valor de b:";
        cin>>b;
        cout<<"Ingrese el valor de c:";
        cin>>c;

        multiplicacion=a+b+c;

        printf("El reslatdo es:",multiplicacion);
    }
     if(op==4)
    {
        cout<<"Ingrese el valor de a:";
        cin>>a;
        cout<<"Ingrese el valor de b:";
        cin>>b;
        cout<<"Ingrese el valor de c:";
        cin>>c;

        division=(a/b)/c;

        printf("El reslatdo es:",division);
    }
    
    return 0;


}