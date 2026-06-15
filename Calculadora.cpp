#include <iostream>
#include <cmath>
using namespace std;

//funciones

void menu(){
    cout << "\n===============================================\n";
    cout << "              CALCULADORA\n";
    cout << "===============================================\n";
    cout << "1. SUMA\n";
    cout << "2. RESTA\n";
    cout << "3. MULTIPLICACION\n";
    cout << "4. DIVISION\n";
    cout << "5. POTENCIA\n";
    cout << "6. RAIZ\n";
    cout << "0. CERRAR\n";
    cout << "===============================================\n";
}

double suma(double A, double B){
    return A + B;
}

double resta(double A, double B){
    return A - B;
}

double multiplicacion(double A, double B){
    return A * B;
}

double division(double A, double B){
    return A / B;
}

double potencia(double A, double B){
    return pow(A, B);
}

double raizN(double numero, double indice){
    if(numero < 0 && (int)indice % 2 != 0){
        return -pow(-numero, 1.0/indice);
    }

    return pow(numero, 1.0/indice);
}

int main() {

    int n;
    double A,B,result;



//menu de operaciones
while(true){
system("cls");
menu();
cout<<"ingrese una opcion: "<<endl;
cin>>n;

switch(n){

case 1:
    cout<<"================================="<<endl;
    cout<<"\tSUMA"<<endl;
    cout<<"================================="<<endl;
    cout<<"ingrese el primer numero (A)"<<endl;
    cin>>A;
    cout<<"ingrese el segundo numero (B)"<<endl;
    cin>>B;
    result=suma(A,B);
    cout<<"el resultado de la suma es de: "<<result<<endl;
     system("pause");
     break;


case 2:

    cout<<"================================="<<endl;
    cout<<"\tRESTA"<<endl;
    cout<<"================================="<<endl;
    cout<<"ingrese el primer numero (A)"<<endl;
    cin>>A;
    cout<<"ingrese el segundo numero (B)"<<endl;
    cin>>B;
    result=resta(A,B);
    cout<<"el resultado de la resta es de: "<<result<<endl;
     system("pause");
     break;

case 3:

    cout<<"================================="<<endl;
    cout<<"\tMULTIPLICACION"<<endl;
    cout<<"================================="<<endl;
    cout<<"ingrese el primer numero (A)"<<endl;
    cin>>A;
    cout<<"ingrese el segundo numero (B)"<<endl;
    cin>>B;
    result=multiplicacion(A,B);
    cout<<"el resultado de la multiplicacion es de: "<<result<<endl;
     system("pause");
     break;

case 4:
    cout<<"================================="<<endl;
    cout<<"\tDIVISION"<<endl;
    cout<<"================================="<<endl;
    cout<<"ingrese el primer numero (A)"<<endl;
    cin>>A;
    cout<<"ingrese el segundo numero (B)"<<endl;
    cin>>B;
    if (B==0){
        cout<<"ERROR: no se puede dividir por 0"<<endl;


    }else{
         result=division(A,B);
    cout<<"el resultado de la division es de: "<<result<<endl;

    }
     system("pause");
     break;

case 5:
    cout<<"================================="<<endl;
    cout<<"\tPOTENCIA"<<endl;
    cout<<"================================="<<endl;
    cout<<"ingrese el primer numero (A)"<<endl;
    cin>>A;
    cout<<"ingrese el segundo numero (B)"<<endl;
    cin>>B;
    result=potencia(A,B);
    cout<<"el resultado de la potencia es de: "<<result<<endl;
     system("pause");
     break;

case 6:
    cout<<"================================="<<endl;
    cout<<"\tRAIZ"<<endl;
    cout<<"================================="<<endl;
    cout<<"ingrese el numero (A)"<<endl;
    cin>>A;
    cout<<"ingrese el indice de la raiz (B)"<<endl;
    cin>>B;
    if(B == 0){
    cout << "ERROR: el indice de la raiz no puede ser 0" << endl;
}
else if(A < 0 && (int)B % 2 == 0){
    cout << "ERROR: no existe la raiz par de un numero negativo." << endl;
}
else{
    result = raizN(A,B);

    if(isnan(result)){
        cout << "ERROR: no se pudo calcular la raiz." << endl;
    }
    else{
        cout << "El resultado de la raiz es de: " << result << endl;
    }
}
    system("pause");
    break;

case 0:
    cout<<"GRACIAS POR USAR LA CALCULADORA"<<endl;
    return 0;
    break;

default:
    cout<<"opcion invalida."<<endl;
    system("pause");
    break;




}


}
return 0;
}
