/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slakhrou <slakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 11:02:58 by slakhrou          #+#    #+#             */
/*   Updated: 2025/12/29 12:01:06 by slakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72,45)
{
	std::cout<<"[RobotomyRequestForm] default constructor is called"<<std::endl;
	target = "rdefault";
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& name) : AForm("RobotomyRequestForm", 72, 45)
{
	std::cout<<"[RobotomyRequestForm] parameter constructor is called"<<std::endl;
	target = name;
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& form) : AForm(form)
{
	std::cout<<"[RobotomyRequestForm] copy constructor is called"<<std::endl;
	target = form.target;
}


RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& form)
{
	std::cout<<"[RobotomyRequestForm] assignement operator is called"<<std::endl;
	if (this != &form)
	{
		AForm::operator=(form);
		this->target = form.target;
	}
	return (*this);
}

void	RobotomyRequestForm::call_execute() const
{
	int	possibility;

	possibility = (std::rand() % 2);

	std::cout<<"🤖🤖Bzzzzzz... drrrrrr... 🤖🤖"<<std::endl;
	if (possibility == 0)
	{
		std::cout<<this->target<<" has been robotomized."<<std::endl;
	}
	else
		std::cout<<" Opps robotomy failed !!"<<std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout<<"[RobotomyRequestForm] destructor is called"<<std::endl;
}

