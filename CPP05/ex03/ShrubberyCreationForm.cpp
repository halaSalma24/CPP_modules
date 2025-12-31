/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slakhrou <slakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 18:33:02 by slakhrou          #+#    #+#             */
/*   Updated: 2025/12/31 15:18:56 by slakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
	target = "sdefault";
	std::cout<<"[ShrubberyCreationForm] default constructor is called"<<std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : AForm("ShrubberyCreationForm", 145, 137)
{
	std::cout<<"[ShrubberyCreationForm] parameter constructor is called"<<std::endl;
	this->target = target;
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& fom) : AForm(fom)
{
	std::cout<<"[ShrubberyCreationForm] copy constructor is called"<<std::endl;
	this->target = fom.target;
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& tree)
{
	std::cout<<"[ShrubberyCreationForm] assignement operator is called"<<std::endl;
	if (this != &tree)
	{
		AForm::operator=(tree);
		this->target = tree.target;
	}
	return (*this);
}


void	ShrubberyCreationForm::call_execute() const
{
	std::string	name = this->target + "_shrubbery";

		std::ofstream	file(name.c_str());
		if(!file)
		{
			std::cout<<"file error"<<std::endl;
			return ;
		}
		file<< "                               \n";
		file << "        @ @ @  @ @ @\n";
		file << "        @  @\\/@@ @ /__@\n";
		file << "        @@@ @\\ / @/  @ @\n";
		file << "       @\\  \\/@| @ | @\n";
		file << "      @__\\@ \\ |/ \\| / @\n";
		file << "         __\\|@|  ||/__/@\n";
		file << "        /  \\ \\\\  / /__\n";
		file << "       @    \\  \\/ /   @\n";
		file << "             |\" '| \n";
		file << "             |\"  | \n";
		file << "             |\"  | \n";
		file << "            ~|\"  |~\n";
		file << "      ~~~~~~~~~~~~~~~~~~~~~\n";
		file.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout<<"[ShrubberyCreationForm] destructor is called"<<std::endl;
}
