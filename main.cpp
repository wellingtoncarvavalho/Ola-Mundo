
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>

using namespace std;
int
main ()
{

  float n1, n2, resultado;
  char operacao;


  cout << "Digite o Primeiro NC:mero: " << endl;
  cin >> n1;

  cout >> "Digite a operacao desejada [+, -, *, /,^, E]";
  cin >> "operacao";

  cout << "Digite o Segundo NC:mero: " << endl;
  cin >> n2;

  switch (operacao)
    {

    case 1:
      cout << "+";
      resultado = n1 + n2;
      break;
    case 2:
      cout << "-";
      resultado = n1 - n2;
      break;
    case 3:
      cout << "*";
      resultado = n1 * n2;
      break;
    case 4:
      cout << "/";
      resultado = n1 / n2;
      break;
    case 5:
      cout << "^";
      resultado = n1 << " elevado a " << n2 << " igual a " << n2 (n1, n2);
      break;
    case 6:
      cout << "Exponencial";
      resultado = n1 + n2;
      break;
    default:
    "Numero Invalido"}



  system ("pause");

  return 0;
}
