#include <iostream>

using namespace std;

int main(){
    string user;
    string estado;
    
    cout<<"Ingrese su nombre "<<endl;

    cin>>user;
    cout<<"BIENVENIDO " << user<<endl;
    if (user != "" || user != " "){
        cout<<"Hola "<<user<<endl;
        cout<<"¿Cómo estás?"<<endl;
        cin>>estado;
    }else{
        cout <<"HOLA MUNDO"<<endl;
    }

}
