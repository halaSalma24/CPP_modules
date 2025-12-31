/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slakhrou <slakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 11:31:51 by slakhrou          #+#    #+#             */
/*   Updated: 2025/12/27 12:29:17 by slakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "AForm.hpp"
#include<iostream>
#include<string>

class Bureaucrat;

class PresidentialPardonForm : public AForm
{
	private:
		std::string	target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string	name);
		PresidentialPardonForm(const PresidentialPardonForm& form);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& form);
		void	call_execute() const;
		~PresidentialPardonForm();
};



#endif
