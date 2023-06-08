#include "Bureaucrat.hpp"
#include <exception>

Bureaucrat::Bureaucrat()
{
    this->name = "default";
    this->grade = 150;
}

Bureaucrat::~Bureaucrat()
{
    return;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
    this->name = name;
    this->grade = grade;
    if (this->grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (this->grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &Bureaucrat)
{
    *this = Bureaucrat;
}

Bureaucrat& Bureaucrat::operator = (Bureaucrat const &Bureaucrat)
{
    if(this != &Bureaucrat)
    {
        this->name = Bureaucrat.name;
        this->grade = Bureaucrat.grade;
    }
    return *this;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high!";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low!";
}

int Bureaucrat::getGrade() const
{
    return this->grade;
}

std::string Bureaucrat::getName() const
{
    return this->name;
}

void Bureaucrat::incrementGrade()
{
    this->grade--;
    if (this->grade < 1)
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
    this->grade++;
    if (this->grade > 150)
        throw Bureaucrat::GradeTooLowException();
}



std::ostream& operator << (std::ostream &out, Bureaucrat const &Bureaucrat)
{
    out << Bureaucrat.getName() << ", bureaucrat grade " << Bureaucrat.getGrade();
    return out;
}

