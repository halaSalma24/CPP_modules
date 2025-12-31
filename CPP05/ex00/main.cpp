/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slakhrou <slakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 18:39:24 by slakhrou          #+#    #+#             */
/*   Updated: 2025/12/31 15:20:16 by slakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


int main()
{
	std::cout<<std::endl<<"--------------test 1: ------------------------------"<<std::endl;
	try
	{
		Bureaucrat s;
		std::cout<<s;
	}
	catch(const std::exception& e)
	{
		std::cout<< e.what()<<std::endl;
	}
	std::cout<<std::endl<<"----------------test 2:----------------------------------"<<std::endl;
	try
	{
		Bureaucrat d1("ALice", 180);
	}
	catch(const std::exception& e)
	{
		std::cout<< e.what()<<std::endl;
	}
	std::cout<<std::endl<<"-----------------test 3:---------------------------------"<<std::endl;

	try
	{
		Bureaucrat d2("Ali", 0);
	}
	catch(const std::exception& e)
	{
		std::cout<< e.what()<<std::endl;
	}
		std::cout<<std::endl<<"----------------test 4:---------------------------------"<<std::endl;

	try
	{
		Bureaucrat d3("Alan", -19);
	}
	catch(const std::exception& e)
	{
		std::cout<< e.what()<<std::endl;
	}
		std::cout<<std::endl<<"-------------test 5:-----------------------------------------"<<std::endl;

	try
	{
		Bureaucrat m("Nami", 150);
		std::cout<<m;
		m.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what()<<std::endl;
	}
		std::cout<<std::endl<<"---------------test 6:-----------------------------"<<std::endl;

	try
	{
		Bureaucrat mo("Gon", 1);
		std::cout<<mo;
		mo.decrementGrade();
		std::cout<<mo;
		mo.incrementGrade();
		std::cout<<mo;
		mo.incrementGrade();
		std::cout<<mo;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what()<<std::endl;
	}
	std::cout<<std::endl<<"------------------test 7:--------------------------------"<<std::endl;

	try
	{
		Bureaucrat mi("Killwa", 100);
		std::cout<<mi;
		mi.decrementGrade();
		std::cout<<mi;
		mi.incrementGrade();
		std::cout<<mi;
		mi.incrementGrade();
		std::cout<<mi;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what()<<std::endl;
	}
	return 0;
}
