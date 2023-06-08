#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form: public Bureaucrat{
private:
    std::string name;
    bool is_signed;
    int grade_to_sign;
    int grade_to_execute;
public:
    Form();
    Form(std::string name, int grade_to_sign, int grade_to_execute);
    Form(Form const &Form);
    Form& operator = (Form const &Form);
    ~Form();

    int getGradeToSign() const;
    int getGradeToExecute() const;
    std::string getName() const;
    bool getIsSigned() const;

    void beSigned(Bureaucrat &Bureaucrat);
    void signForm(Bureaucrat &Bureaucrat);
};

std::ostream& operator << (std::ostream &out, Form const &Form);

#endif