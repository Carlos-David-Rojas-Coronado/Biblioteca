#ifndef PERSONA_H
#define PERSONA_H


class Persona
{
    public:
        persona(int, int, int, string,int);
        void    Consultar_Edad;
        void    Cambiar;
        void    Ingresar;
        void    Vaciar;
        void    Verificar;
    private:
        string Nombre;
        int E-mail;
        int ID;
        int Edad;
        int Telefono;

};

#endif // PERSONA_H
