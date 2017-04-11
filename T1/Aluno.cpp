/* File Aluno.cpp
  Pedro Fornari e Lucas Pereira Luiz
  Março de 2017
*/

#include "Aluno.h"
using namespace std;

Aluno(unsigned int matr)
{
  matricula = matr;
  n1 = 0;
  n2 = 0;
  nf = 0;
}

~Aluno(void)
{
  n1 = 0;
  n2 = 0;
  nf = 0;
  matricula = 0;
}

void Aluno::set_n1(void)
{
  cout << "digite a nota\n";
  cin >> n1;
  while(n1>10)
  {
    cout<<"notas sao de 0 a 10, repita o valor\n"
    cin>>n1
  }
}

void Aluno::set_n2()
{
  cout << "digite a nota\n";
  cin >> n2;
  while(n1>10)
  {
    cout<<"notas sao de 0 a 10, repita o valor\n"
    cin>>n2
  }
}

unsigned float Aluno::get_n1(void)
{
  return n1;
}

unsigned float Aluno::get_n2(void)
{
  return n2;
}

unsigned int Aluno::get_matricula(void)
{
  return matricula;
}

unsigned float Aluno::calcula_nf(void)
{
  nf = (n1+n2)/2;
  return nf;
}
