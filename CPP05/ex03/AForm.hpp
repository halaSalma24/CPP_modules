/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slakhrou <slakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 18:43:03 by slakhrou          #+#    #+#             */
/*   Updated: 2025/12/27 12:28:56 by slakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include<iostream>
#include<string>
#include<exception>
#include<fstream>

class Bureaucrat;

class AForm
{
	private:
		const std::string	name;
		bool				is_signed;
		const int			grade_sign;
		const int			grade_execute;

	public:
		AForm();
		AForm(std::string	name, const int gra_sign, const int grade_exc);
		AForm(const AForm&	form);
		AForm&	operator=(const AForm& form);
		const std::string&	getName() const;
		bool		getSigned() const;
		int			getGradeSign() const;
		int			getGradeExecute() const;
		void		beSigned(const Bureaucrat&	bur);
		void		execute(Bureaucrat const & executor) const;
		virtual	void	call_execute() const = 0;
		virtual	~ AForm();

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

		class FormNotSignedException : public std::exception
		{
			const char* what() const throw();
		};


	};
std::ostream&	operator<<(std::ostream&	output, const AForm& form);

#endif
