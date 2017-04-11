/* File Turma.cpp
  Pedro Fornari e Lucas Pereira Luiz
  Março de 2017
*/
#include <string>
#include "Aluno.h"
#include "Gerente.h"
using namespace std;

  Gerente(void){}
  ~Gerente(void){}

  void Gerente::cadastra()
  {
    int i = 0;
    int matricula = 0;
    char ok = 0;
    while (!ok){
      cin>>matricula;
      for(i = 0; i<20; i++)
      {
        if (matricula == turma(i).get.matricula())
        {
          cout<<"matricula já existente, por favor digite outro numero";
          cin>>matricula;
          i = -1;
        }
      }
      i = 0;
      while((turma(i).get_matricula() != 0)&&(i<20)
      {
        i++
      }
      if (i>=20)
      {
        cout<<"turma lotada, volte outro dia";
      }
      else
      {
        turma(i) = new Aluno(matricula);
      }
      return;
  }

  void Gerente::deleta(unsigned int matricula)
  {
    int i = 0;
    while()(matricula != turma(i).get_matricula())&&(i<=20))
    {
      i++;
    }

    if (i>=20)
    {
      cout<<"Matricula nao existente";
    }
    else
    {
      delete turma(i);
    }
  }

  void Gerente::consulta_um(unsigned int matricula);
  void Gerente::consulta_todos(void);
  void Gerente::altera_aluno(void);
};
