#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;


int main(){
	
	float nun1,nun2,resultado,base,expoente;
	int op;
	cout<<"calculadora";
	
	while (op!=0)
	{
		cout<<"Escolha a opera��o que deseja: "<<endl;
		
		cout<<"\n(1) para Soma";
		cout<<"\n(2) para Subtra��o";
		cout<<"\n(3) para Multiplica��o";
		cout<<"\n(4) para divis�o";
		cout<<"\n(5) para Potencia��o";
		cout<<"\n(6) para Exponencial";
		
		cin>>op;
		
		if(op<1||op>6)
		{
			system("cls");
			cout<<"Numero Invalido!"<<endl;
			cout<<"Escolha a opera��o valida: "<<endl;
		
			cout<<"\n(1) para Soma";
			cout<<"\n(2) para Subtra��o";
			cout<<"\n(3) para Multiplica��o";
			cout<<"\n(4) para divis�o";
			cout<<"\n(5) para Potencia��o";
			cout<<"\n(6) para Exponencial";
			cin>>op;
			
		}
		
		switch(op)
		{
			case 1:
				cout<<"Digite o primeiro numero: ";
				cin >> nun1;
				cout<<"Digite o segundo numero: ";
				cin>> nun2;
				cout<<"O resultado �: "<< nun1+nun2;
				break;
				
				case 2:
				cout<<"Digite o primeiro numero: ";
				cin >> nun1;
				cout<<"Digite o segundo numero: ";
				cin>> nun2;
				cout<<"O resultado �: "<<nun1-nun2;
				break;
				
				case 3:
				cout<<"Digite o primeiro numero: ";
				cin >> nun1;
				cout<<"Digite o segundo numero: ";
				cin>> nun2;
				cout<<"O resultado �: "<<nun1,nun2;
				break;
				
				case 4:
				cout<<"Digite o primeiro numero: ";
				cin >> nun1;
				cout<<"Digite o segundo numero: ";
				cin>> nun2;
				cout<<"O resultado �: "<<nun1/nun2;
				break;
				
				case 5:
				cout<<"Digite a base: ";
				cin >> nun1;
				cout<<"Elevado a: ";
				cin>> nun2;
				cout<<"O resultado �: "<<pow(nun1,nun2);
				break;
				
				/*case 6:
				cout<<"Digite o primeiro numero: ";
				cin >> nun1;
				cout<<"Digite o segundo numero: ";
				cin>> nun2;
				cout<<"O resultado �: " <<exponenciacao(nun1,nun2);
				break;*/
				
				default:
				cout<< "Numero Invalido"	
		}
	}
system ("pause");
	return 0;	
}

