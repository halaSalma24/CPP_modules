/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slakhrou <slakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 11:03:01 by slakhrou          #+#    #+#             */
/*   Updated: 2025/12/29 12:00:43 by slakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include<iostream>
#include<string>
#include <cstdlib>

class	Bureaucrat;

class RobotomyRequestForm : public AForm
{
	private:
		std::string		target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string& name);
		RobotomyRequestForm(const RobotomyRequestForm& form);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& form);
		void	call_execute() const;
		~RobotomyRequestForm();
	};


#endif
