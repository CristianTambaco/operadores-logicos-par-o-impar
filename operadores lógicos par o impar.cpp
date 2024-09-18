#include <iostream>
using namespace std;
main(){
	//usando desigualdad, verificar si el numero es par o impar
	int num=0;
	
	cout<<"** Verificar si el numero es par o impar **"<<endl;
	cout<<" Ingrese numero "<<endl;
	cin>>num;
    cout << "El numero es: " <<((num%2!=0) ? "impar" : "par")<<endl;
    
  return 0;

}
