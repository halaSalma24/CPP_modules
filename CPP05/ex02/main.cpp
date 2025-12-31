/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slakhrou <slakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 18:39:24 by slakhrou          #+#    #+#             */
/*   Updated: 2025/12/29 11:22:01 by slakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>


int main()
{
	srand(time(NULL));
	std::cout<<std::endl<<"----------test 1---------------------------------"<<std::endl;
	try{
		ShrubberyCreationForm f("house");
		Bureaucrat b("Ali", 100);
		b.signForm(f);
		b.executeForm(f);
	}
	catch(const std::exception& e)
	{
		std::cout<<"Error coudn't execute because :"<<e.what()<<std::endl;
	}
	std::cout<<std::endl<<"----------test 2-----------------------------------"<<std::endl;

	try{
		ShrubberyCreationForm f("hotel");
		Bureaucrat b("Salma", 100);
		b.executeForm(f);
	}
	catch(const std::exception& e)
	{
		std::cout<<"Error coudn't execute because :"<<e.what()<<std::endl;
	}
	std::cout<<std::endl<<"----------test 3----------------------------------"<<std::endl;
	try{
		ShrubberyCreationForm f("parking");
		Bureaucrat b("Ibrahim", 140);
		b.signForm(f);
		b.executeForm(f);
	}
	catch(const std::exception& e)
	{
		std::cout<<"Error coudn't execute because :"<<e.what()<<std::endl;
	}
	std::cout<<std::endl<<"----------test 4----------------------------------"<<std::endl;
	try{
		RobotomyRequestForm f("office");
		Bureaucrat b("Hana", 30);
		b.signForm(f);
		b.executeForm(f);
	}
	catch(const std::exception& e)
	{
		std::cout<<"Error coudn't execute because :"<<e.what()<<std::endl;
	}
	std::cout<<std::endl<<"----------test 5----------------------------------"<<std::endl;
	try{
		RobotomyRequestForm f("trip");
		Bureaucrat b("Halima", 80);
		b.signForm(f);
		b.executeForm(f);
	}
	catch(const std::exception& e)
	{
		std::cout<<"Error coudn't execute because :"<<e.what()<<std::endl;
	}
	std::cout<<std::endl<<"----------test 6----------------------------------"<<std::endl;
	try{
		PresidentialPardonForm f("playgroud");
		Bureaucrat b("Iyad", 14);
		b.signForm(f);
		b.executeForm(f);
	}
	catch(const std::exception& e)
	{
		std::cout<<"Error coudn't execute because :"<<e.what()<<std::endl;
	}
	std::cout<<std::endl<<"----------test 7----------------------------------"<<std::endl;
	try{
		PresidentialPardonForm f("house");
		Bureaucrat b("Anass", 4);
		b.signForm(f);
		b.executeForm(f);
	}
	catch(const std::exception& e)
	{
		std::cout<<"Error coudn't execute because :"<<e.what()<<std::endl;
	}
	return 0;
}
