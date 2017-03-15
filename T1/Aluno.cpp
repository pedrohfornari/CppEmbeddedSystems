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
{}

void set_n1(unsigned float nota)
{
  n1 = nota;
}

void set_n2(unsigned float nota)
{
  n2 = nota;
}

unsigned float get_n1(void)
{
  return n1;
}

unsigned float get_n2(void)
{
  return n2;
}

unsigned int get_matricula(void)
{
  return matricula;
}

unsigned float calcula_nf(void)
{
  nf = (n1+n2)/2;
  return nf;
}
