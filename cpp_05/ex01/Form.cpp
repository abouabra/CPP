#include "Form.hpp"

Form::Form()
{
    this->name = "default";
    this->grade_to_sign = 150;
    this->grade_to_execute = 150;
}

Form::Form(std::string name, int grade_to_sign, int grade_to_execute)
{
    this->name = name;
    this->grade_to_sign = grade_to_sign;
    this->grade_to_execute = grade_to_execute;
    if (this->grade_to_sign < 1 || this->grade_to_execute < 1)
        throw Form::GradeTooHighException();
    if (this->grade_to_sign > 150 || this->grade_to_execute > 150)
        throw Form::GradeTooLowException();
}

Form::Form(Form const &Form)
{
    *this = Form;
}

Form& Form::operator = (Form const &Form)
{
    if(this != &Form)
    {
        this->name = Form.name;
        this->grade_to_sign = Form.grade_to_sign;
        this->grade_to_execute = Form.grade_to_execute;
    }
    return *this;
}

Form::~Form()
{
    return;
}

int Form::getGradeToSign() const
{
    return this->grade_to_sign;
}

int Form::getGradeToExecute() const
{
    return this->grade_to_execute;
}

std::string Form::getName() const
{
    return this->name;
}

bool Form::getIsSigned() const
{
    return this->is_signed;
}

void Form::beSigned(Bureaucrat &Bureaucrat)
{
    if (Bureaucrat.getGrade() > this->grade_to_sign)
    {
        this->is_signed = false;
        throw Form::GradeTooLowException();
    }
    this->is_signed = true;
}

void Form::signForm(Bureaucrat &Bureaucrat)
{
    try
    {
        if(Bureaucrat.getGrade() > this->grade_to_execute)
            throw Form::GradeTooLowException();
        this->beSigned(Bureaucrat);
        std::cout << Bureaucrat.getName() << " signs " << this->getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << Bureaucrat.getName() << " cannot sign " << this->getName() << " because " << e.what() << std::endl;
    }
}

std::ostream& operator << (std::ostream &out, Form const &Form)
{
    out << Form.getName() << ", Form grade to sign " 
        << Form.getGradeToSign() << ", Form grade to execute "
        << Form.getGradeToExecute() << ", Form is signed "
        << Form.getIsSigned() << std::endl;
    return out;
}

