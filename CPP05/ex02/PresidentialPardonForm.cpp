/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slakhrou <slakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 11:32:02 by slakhrou          #+#    #+#             */
/*   Updated: 2025/12/29 11:02:58 by slakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
	std::cout<<"[PresidentialPardonForm] default constructor is called"<<std::endl;
	target = "pdefault";
}

PresidentialPardonForm::PresidentialPardonForm(const std::string	name) : AForm("PresidentialPardonForm", 25, 5)
{
	std::cout<<"[PresidentialPardonForm] parameter constructor is called"<<std::endl;
	target = name;

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& form) : AForm(form)
{
	std::cout<<"[PresidentialPardonForm] copy constructor is called"<<std::endl;
	target = form.target;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& form)
{
	std::cout<<"[PresidentialPardonForm] assignement operator is called"<<std::endl;
	if (this != &form)
	{
		AForm::operator=(form);
		target = form.target;
	}
	return (*this);
}

		void	PresidentialPardonForm::call_execute() const
		{
			std::cout<<std::endl<<"                                  ######   ######"<<std::endl;
			std::cout<<std::endl<<"#####################################################"<<std::endl;
			std::cout<<std::endl<<target<<" has been pardoned by Zaphod Beeblebrox.    ####"<<std::endl;
			std::cout<<std::endl<<"#####################################################"<<std::endl<<std::endl;
		}


PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout<<"[PresidentialPardonForm] destructor is called"<<std::endl;
}
