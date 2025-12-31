/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slakhrou <slakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 18:43:58 by slakhrou          #+#    #+#             */
/*   Updated: 2025/12/29 11:19:21 by slakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : name("daform"), is_signed(false), grade_sign(150), grade_execute(150)
{
	std::cout<<"[AForm] default constructor is called"<<std::endl;
}

AForm::AForm(std::string	name, const int gra_sign, const int grade_exc) : name(name), is_signed(false), grade_sign(gra_sign),grade_execute(grade_exc)
{
	std::cout<<"[AForm] parameter constructor is called"<<std::endl;
	if (gra_sign < 1 || grade_exc < 1)
		throw GradeTooHighException();
	if (gra_sign > 150 || grade_exc > 150)
		throw GradeTooLowException();
}

AForm::AForm(const AForm&	AForm) : name(AForm.name), grade_sign(AForm.grade_sign), grade_execute(AForm.grade_execute)
{
	std::cout<<"[AForm] copy constructor is called"<<std::endl;
	this->is_signed = AForm.is_signed;
}
AForm&	AForm::operator=(const AForm& AForm)
{
	std::cout<<"[AForm] assignement operator is called"<<std::endl;
	if (this != &AForm)
	{
		this->is_signed = AForm.is_signed;

	}
	return (*this);
}

const std::string&	AForm::getName() const
{
	return (this->name);
}
bool		AForm::getSigned() const
{
	return (this->is_signed);
}
int AForm::getGradeSign() const
{
	return (this->grade_sign);
}
int AForm::getGradeExecute() const
{
	return (this->grade_execute);
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too height !");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low !");
}

const char* AForm::FormNotSignedException::what() const throw()
{
	return ("Form is not signed!");
}

void	AForm::beSigned(const Bureaucrat&	bur)
{
	if (bur.getGrade() > this->grade_sign)
		throw GradeTooLowException();
	this->is_signed = true;
}


AForm::~AForm()
{
	std::cout<<"[AForm] destructor is called "<<std::endl;
}


std::ostream&	operator<<(std::ostream&	output, const AForm& AForm)
{
	output<<"*********************    AForm    ******************************************"<<std::endl;
	output<<"AForm name is: "<<AForm.getName()<<std::endl;
	output<<"AForm is signed:  "<<AForm.getSigned()<<std::endl;
	output<<"AForm grade to be signed is: "<<AForm.getGradeSign()<<std::endl;
	output<<"AForm grade to be executed is: "<<AForm.getGradeExecute()<<std::endl;
	output<<"***************************************************************************"<<std::endl;
	return (output);
}

void	AForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getGradeExecute())
		throw GradeTooLowException();
	if (this->getSigned() == false)
		throw FormNotSignedException();
	call_execute();
}
