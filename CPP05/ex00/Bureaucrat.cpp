/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slakhrou <slakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 15:58:27 by slakhrou          #+#    #+#             */
/*   Updated: 2025/12/29 14:15:13 by slakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("default"), grade(150)
{
	std::cout<<"[Bureaucrat] default constructor is called"<<std::endl;
}

Bureaucrat::Bureaucrat(const std::string&	name, int grade) : name(name)
{
	std::cout<<"[Bureaucrat] parameter constructor is called"<<std::endl;

	if (grade < 1)
		throw	GradeTooHighException();
	if (grade > 150)
		throw	GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& bur) : name(bur.name)
{
	std::cout<<"[Bureaucrat] copy constructor is called"<<std::endl;
	this->grade = bur.grade;
}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& bur)
{
	std::cout<<"[Bureaucrat] assignement operator is called"<<std::endl;
	if (this != &bur)
	{
		this->grade = bur.grade;
	}
	return (*this);
}

const std::string	Bureaucrat::getName() const
{
	return (this->name);
}

int	Bureaucrat::getGrade() const
{
	return (this->grade);
}

void Bureaucrat::incrementGrade()
{
	if (this->grade - 1 < 1)
		throw GradeTooHighException();
	this->grade -= 1;
}
void Bureaucrat::decrementGrade()
{
	if (this->grade + 1 > 150)
		throw GradeTooLowException();
	this->grade += 1;
}

Bureaucrat::~Bureaucrat()
{
	std::cout<<"[Bureaucrat] destructor is called for "<<this->name<<std::endl;
}


const char*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrate Your Grade is too low!");
}
const char*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrate Your Grade is too height!");
}
std::ostream& operator<<( std::ostream& output, const Bureaucrat& bur)
{
	output<<bur.getName()<<" , bureaucrat grade "<<bur.getGrade()<<"."<<std::endl;
	return (output);
}
