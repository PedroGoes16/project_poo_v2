#ifndef USUARIO_H
#define USUARIO_H

using namespace std;

class Usuario {
  private:
  int id;
  int senha;

  public:
  Usuario();
  Usuario(int, int);
};

#endif