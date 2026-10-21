#include <iostream>


using namespace std;

int areaCuadrado(float ladocuadrado){
    
    float resultado =0;

    resultado = ladocuadrado*ladocuadrado;

    return resultado;
}

int volumenCilindro (float Rcilindro, float Hcilindro ){

    const double pi = 3.141516;
    float resultado = 0;

    resultado = pi * Rcilindro * Rcilindro * Hcilindro;

    return resultado;

}

int volumenEsfera (float rEsfera){

    const double pi = 3.141516;
    float resultado = 0.0;

    resultado = ((4/3)*pi *rEsfera * rEsfera* rEsfera);
    return resultado;
}


int main(){

    int opcion = 0;
    //para el case 1
    float aCuadrado = 0.0;
    float lado = 0.0;

    //para el case 2
    float vCilindro = 0.0;
    float radio = 0.0;
    float altura = 0.0;

    // para case 3      
        float radioEsfera = 0.0;
        float vEsfera =0.0;



    do
    {

    cout<<"Ingrese la opcion que desea realizar"<<endl;
    cout<<"(1) Calcular el area de un cudrado"<<endl;
    cout<<"(2) Calcular el volumen de un cilindro"<<endl;
    cout<<"(3) Calcular el volumen de una esfera"<<endl;
    cout<<"(4) Salir del programa"<<endl;

    cin>>opcion;

    switch (opcion)
    {
    case 1:
    cout<<"Ingrese el lado del cuadrado"<<endl;
    cin>>lado;
    aCuadrado = areaCuadrado(lado);
    cout<<"el area del cuadrado es : "<<aCuadrado<<" cm^2"<<endl;
        
        break;

    case 2:

    cout<<"Ingrese el radio del cilindro: "<<endl;
    cin>>radio;

    cout<<"ingrese la altura del cilindro: "<<endl;
    cin>>altura;

    vCilindro = volumenCilindro(radio,altura);

    cout<<"El volumen del cilindro es de : "<<vCilindro<<endl;
        
        break;

    case 3:

        cout<<"ingrese el radio de la esfera : "<<endl;
        cin>>radioEsfera;

        vEsfera = volumenEsfera(radioEsfera);

        cout<<"El volumen de la esfera es de: "<<vEsfera<<endl;
        
        break;

    case 4:
        cout<<"Saliendo del programa...."<<endl;
        break;
    
    default:
        break;
    }

    } while (opcion != 4);
    
    return 0;
}