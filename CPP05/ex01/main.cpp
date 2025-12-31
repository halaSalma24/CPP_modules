/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slakhrou <slakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 18:39:24 by slakhrou          #+#    #+#             */
/*   Updated: 2025/12/29 10:40:37 by slakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"


int main()
{
	try
	{
		Form d("sport", 180,100);
		std::cout<<d;
	}
	catch(const std::exception& e)
	{
		std::cout<<"Error 1: " << e.what() << std::endl;
	}
	try
	{
		Form d("sport", 100,80);
		std::cout<<d;
		Bureaucrat o("Mehdi", 1);
		std::cout<<o;
		o.incrementGrade();
		o.signForm(d);
		std::cout<<d;
	}
	catch(const std::exception& e)
	{
		std::cout<<"Error 2: " << e.what() <<std::endl;
	}

	try
	{
		Form d("volunteering", 10,180);
		std::cout<<d;
		Bureaucrat o("Abdo", 5);
		std::cout<<o;
		o.signForm(d);
		std::cout<<d;
	}
	catch(const std::exception& e)
	{
		std::cout<<"Error 3: " << e.what() <<std::endl;
	}
	try
	{
		Form d("party", 10,1);
		std::cout<<d;
		Bureaucrat o("Alice", 50);
		std::cout<<o;
		o.signForm(d);
		std::cout<<d;
	}
	catch(const std::exception& e)
	{
		std::cout<<"Error 4: " << e.what() <<std::endl;
	}
	try
	{
		Form d("trip", 50,11);
		std::cout<<d;
		Bureaucrat o("Alan", 50);
		std::cout<<o;
		o.signForm(d);
		std::cout<<d;
	}
	catch(const std::exception& e)
	{
		std::cout<<"Error 5: " << e.what() <<std::endl;
	}
	try
	{
		Form d("diving", 45,18);
		std::cout<<d;
		Bureaucrat o("Alan", 30);
		std::cout<<o;
		o.signForm(d);
		std::cout<<d;
	}
	catch(const std::exception& e)
	{
		std::cout<<"Error 5: " << e.what() <<std::endl;
	}


	return 0;
}
