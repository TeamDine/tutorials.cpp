#include "tutorials.h"
///Constructor Base
Tutorials::Tutorials()
{
    hours = 0;
}

///Constructor Copia
Tutorials::Tutorials(const Tutorials& e) : name(e.name), hours(e.hours){ }

///Constructor Parametrizado
Tutorials::Tutorials(const Name& n, Date& i, Date& f, int& h) : name(n), initialDate(i), finishDate(f), hours(h) { }

Name Tutorials::getName()
{
    return name;
}

Date Tutorials::getInitialDate()
{
    return initialDate;
}

Date Tutorials::getFinishDate()
{
    return finishDate;
}

int Tutorials::getHours()
{
    return hours;
}

void Tutorials::setName(const Name& n)
{
    name = n;
}

void Tutorials::setInitialDate(const Date& i)
{
    initialDate = i;
}

void Tutorials::setFinishDate(const Date& f)
{
    finishDate = f;
}

void Tutorials::setHours(const int& h)
{
    hours = h;
}

std::string Tutorials::toString()
{
    std::string result;

    result = "Nombre: ";
    result += name.toString();
    result += "Fecha de Inicio: ";
    result += initialDate.toString();
    result += "Fecha de Termino: ";
    result += finishDate.toString();
    result += "Cantidad de Horas Semanales: ";
    result += hours;

    return result;
}

