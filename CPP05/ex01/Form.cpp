/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slakhrou <slakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 18:43:58 by slakhrou          #+#    #+#             */
/*   Updated: 2025/12/29 11:19:07 by slakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name("dform"), is_signed(false), grade_sign(150), grade_execute(150)
{
	std::cout<<"[Form] default constructor is called"<<std::endl;
}

Form::Form(const std::string&	name, const int gra_sign, const int grade_exc) : name(name), is_signed(false), grade_sign(gra_sign),grade_execute(grade_exc)
{
	if (gra_sign < 1 || grade_exc < 1)
		throw GradeTooHighException();
	if (gra_sign > 150 || grade_exc > 150)
		throw GradeTooLowException();
}

Form::Form(const Form&	form) : name(form.name), grade_sign(form.grade_sign), grade_execute(form.grade_execute)
{
	std::cout<<"[Form] copy constructor is called"<<std::endl;
	this->is_signed = form.is_signed;
}
Form&	Form::operator=(const Form& form)
{
	std::cout<<"[Form] assignement operator is called"<<std::endl;
	if (this != &form)
	{
		this->is_signed = form.is_signed;
	}
	return (*this);
}

const std::string&	Form::getName() const
{
	return (this->name);
}

bool		Form::getSigned() const
{
	return (this->is_signed);
}

int Form::getGradeSign() const
{
	return (this->grade_sign);
}

int Form::getGradeExecute() const
{
	return (this->grade_execute);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too height !");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low !");
}

void	Form::beSigned(Bureaucrat&	bur)
{
	if (bur.getGrade() > this->grade_sign)
		throw GradeTooLowException();
	this->is_signed = true;
}


Form::~Form()
{
	std::cout<<"[Form] destructor is called"<<this->name<<std::endl;
}


std::ostream&	operator<<(std::ostream&	output, const Form& form)
{
	output<<std::endl<<"*********************    Form    ******************************************"<<std::endl;
	output<<"Form name is: "<<form.getName()<<std::endl;
	output<<"Form is signed:  "<<form.getSigned()<<std::endl;
	output<<"Form grade to be signed is: "<<form.getGradeSign()<<std::endl;
	output<<"Form grade to be executed is: "<<form.getGradeExecute()<<std::endl;
	output<<"***************************************************************************"<<std::endl<<std::endl;
	return (output);
}
