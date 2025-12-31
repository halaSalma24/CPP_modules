/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slakhrou <slakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 18:39:24 by slakhrou          #+#    #+#             */
/*   Updated: 2025/12/31 15:21:48 by slakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"


int main()
{
	std::srand(time(NULL));
	try
	{
		Intern k;
		AForm *f = k.makeForm("presidential pardon", "hall");
		Bureaucrat b("Salma", 1);
		b.signForm(*f);
		b.executeForm(*f);
		delete f;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what()<<std::endl;
	}

	std::cout<<"------------------test 2--------------------------------"<<std::endl;

	try{
		Intern	someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		Bureaucrat c("Ali", 80);
		c.signForm(*rrf);
		c.executeForm(*rrf);
		delete rrf;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what()<<std::endl;
	}
	std::cout<<"------------------test 3---------------------------------"<<std::endl;
	try{
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		Bureaucrat c("Alex", 18);
		c.signForm(*rrf);
		c.executeForm(*rrf);
		delete rrf;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what()<<std::endl;
	}
	std::cout<<"---------------test 4-----------------------------------"<<std::endl;
	try
	{
		Intern k;
		AForm *f = k.makeForm("shrubbery creation", "theatre");
		Bureaucrat b("Salim", 111);
		b.signForm(*f);
		b.executeForm(*f);
		delete f;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what()<<std::endl;
	}
	std::cout<<"---------------test 5-----------------------------------"<<std::endl;
	try
	{
		Intern k;
		AForm *f = k.makeForm("shrubbery creation", "movies");
		Bureaucrat b("Omar", 80);
		b.executeForm(*f);
		delete f;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what()<<std::endl;
	}
	std::cout<<"---------------test 6-----------------------------------"<<std::endl;
	try
	{
		Intern k;
		AForm *f = k.makeForm("club creation", "movies");
		Bureaucrat b("Hany", 50);
		b.executeForm(*f);
		delete f;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what()<<std::endl;
	}
		return 0;
}
