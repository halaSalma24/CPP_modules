/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slakhrou <slakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 15:50:36 by slakhrou          #+#    #+#             */
/*   Updated: 2025/12/28 15:28:00 by slakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include<iostream>
#include<string>
#include "AForm.hpp"
#include<exception>

class Intern
{
	private :
			AForm*	create_sherry_form(const std::string&	target);
			AForm*	create_prisidential_form(const std::string&	target);
			AForm*	create_robot_form(const std::string&	target);
	public:
		Intern();
		Intern(const Intern& it);
		Intern& operator=(const Intern& it);
		AForm*	 makeForm(const std::string&	name, const std::string&	target);
		~Intern();

		class FormNotFoundException : public std::exception
		{
			public :
			const char* what() const throw();

		};
};



#endif
