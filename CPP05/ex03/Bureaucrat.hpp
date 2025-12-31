/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slakhrou <slakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 15:57:26 by slakhrou          #+#    #+#             */
/*   Updated: 2025/12/26 15:31:41 by slakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include<iostream>
#include<string>
#include<fstream>
#include<exception>

class AForm;
class Bureaucrat
{
	private:
		const std::string	name;
		int					grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string&	name, int grade);
		Bureaucrat(const Bureaucrat& bur);
		Bureaucrat& operator=(const Bureaucrat& bur);
		const std::string	getName() const;
		int		getGrade() const;
		void	incrementGrade();
		void	decrementGrade();
		void	signForm(AForm& form);
		void executeForm(AForm const & form) const ;
		~Bureaucrat();

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

std::ostream& operator<<(std::ostream& output, const Bureaucrat& bur);
#endif
