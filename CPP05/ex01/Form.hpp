/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slakhrou <slakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 18:43:03 by slakhrou          #+#    #+#             */
/*   Updated: 2025/12/28 17:29:35 by slakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include<iostream>
#include<string>
#include<exception>
#include<fstream>

class Bureaucrat;

class Form
{
	private:
		const std::string	name;
		bool				is_signed;
		const int			grade_sign;
		const int			grade_execute;

	public:
		Form();
		Form(const std::string&	name, const int gra_sign, const int grade_exc);
		Form(const Form&	form);
		Form&	operator=(const Form& form);
		const std::string&	getName() const;
		bool		getSigned() const;
		int getGradeSign() const;
		int getGradeExecute() const;
		void	beSigned(Bureaucrat&	bur);
		~ Form();

		class GradeTooHighException : public std::exception
		{
			public :
				const char* what() const throw();

		};

		class GradeTooLowException : public std::exception
		{
			public :
				const char* what() const throw();

		};
	};

std::ostream&	operator<<(std::ostream&	output, const Form& form);

#endif
