#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat{
private:
    std::string name;
    int grade;
public:
    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat(Bureaucrat const &Bureaucrat);
    Bureaucrat& operator = (Bureaucrat const &Bureaucrat);
    ~Bureaucrat();

    int getGrade() const;
    std::string getName() const;
    void incrementGrade();
    void decrementGrade();

    class GradeTooHighException : public std::exception {
    public:
        const char *what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        const char *what() const throw();
    };
};

std::ostream& operator << (std::ostream &out, Bureaucrat const &Bureaucrat);

#endif