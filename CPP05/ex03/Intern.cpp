/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slakhrou <slakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 15:51:36 by slakhrou          #+#    #+#             */
/*   Updated: 2025/12/29 11:56:10 by slakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include"ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern()
{
	std::cout<<"[Intern] default constructor is called"<<std::endl;
}

Intern::Intern(const Intern& it)
{
	(void) it;
	std::cout<<"[Intern] copy constructor is called"<<std::endl;
}

Intern& Intern::operator=(const Intern& it)
{
	(void) it;
	std::cout<<"[Intern] assignement operator is called"<<std::endl;
	return (*this);
}

AForm*	Intern::create_sherry_form(const std::string&	target)
{
	return (new ShrubberyCreationForm(target));
}

AForm*	Intern::create_prisidential_form(const std::string&	target)
{
	return (new PresidentialPardonForm(target));
}

AForm*	Intern::create_robot_form(const std::string&	target)
{
	return (new RobotomyRequestForm(target));
}

AForm*	Intern::makeForm(const std::string&	name, const std::string&	target)
{
	std::string	forms[3] = {"shrubbery creation","robotomy request","presidential pardon"};

	AForm* (Intern::*form_p[3]) (const std::string&);
	form_p[0] = &Intern::create_sherry_form;
	form_p[1] = &Intern::create_robot_form;
	form_p[2] = &Intern::create_prisidential_form;

	for(int i = 0; i < 3;i++)
	{
		if (forms[i] == name)
		{
			std::cout<<"Intern creates "<<name<<std::endl;
			return ((this->*(form_p[i]))(target));
		}
	}
	throw FormNotFoundException();
}


Intern::~Intern()
{
	std::cout<<"[Intern] destructor is called"<<std::endl;
}

const char* Intern::FormNotFoundException::what() const throw()
{
	return ("Error Form type does not exist !!");
}
