#include<iostream>
using namespace std;

main(){
int total=0,*p_notas;
p_notas= new int[total];
char res;

do{
    cout<<"Ingrese nota "<<total<<":";
    cin>>p_notas[total];
    total++;
	cout<<"desea ingresar otro valor(s/n):";
	cin>>res;
}while (res=='s'||res=='S');

cout<<"........mostrar notas......"<<endl;
for (int i=0;i<total;i++){
	cout<<"nota("<<i<<"):"<<*p_notas<<endl;
	p_notas++;
}
delete[] p_notas;


	
	
	
	
}
