/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 18:52:56 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/08 18:52:56 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: Form("ShrubberyCreationForm", 145, 137)
{
	this->target = target;
}	

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy)
{
	*this = copy;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& op)
{
	if (this != &op)
	{
		Form::operator=(op);
	}
	return (*this);
}

void ShrubberyCreationForm::action() const
{
	std::ofstream file;

	file.open(std::string(this->target + "_shrubbery").c_str(),
		std::ios::out | std::ios::app);
	if(file.is_open())
	{
		file << "			.        +          .      .          .		" << std::endl;
		file << "	 .            _        .                    .		" << std::endl;
		file << "  ,              /;-._,-.____        ,-----.__			" << std::endl;
		file << " ((        .    (_:#::_.:::. `-._   /:, /-._, `._,		" << std::endl;
		file << "  `                 \\   _|`'=:_::.`.);  \\ __/ /		" << std::endl;
		file << "				  ,    `./  \\:. `.   )==-'  .			" << std::endl;
		file << "	.      ., ,-=-.  ,\\, +#./`   \\:.  / /.			" << std::endl;
		file << ".           \\/:/`-' , ,\\ '` ` `   ): , /_  -o		" << std::endl;
		file << "	   .    /:+- - + +- : :- + + -:'  /(o-) \\)     .	" << std::endl;
		file << "  .      ,=':  \\    ` `/` ' , , ,:' `'--'.--'---._/`7	" << std::endl;
		file << "   `.   (    \\: \\,-._` ` + '\\, ,'   _,--._,---':.__/" << std::endl;
		file << "			  \\:  `  X` _| _,\\/'   .-'				" << std::endl;
		file << ".               ':._:`\\____  /:'  /      .          	" << std::endl; 
		file << "					\\::.  :\\/:'  /              		" << std::endl;
		file << "   .                 `.:.  /:'  }      .				" << std::endl;
		file << "		   .           ):_(:;   \\           .			" << std::endl;
		file << "					  /:. _/ ,  |						" << std::endl;
		file << "				   . (|::.     ,`             			" << std::endl;
		file << "	 .                |::.    {\\						" << std::endl;
		file << "					  |::.\\  \\ `.						" << std::endl;
		file << "					  |:::(\\    |						" << std::endl;
		file << "			  O       |:::/{ }  |             (o		" << std::endl;
		file << "			   )  ___/#\\::`/ (O ==._____   O, (O  /`	" << std::endl;
		file << "		  ~~~w/w~'~~,\\` `:/,-(~`'~~~~~~~~'~o~\\~/~w|/~	" << std::endl;
		file << "dew   ~~~~~~~~~~~~~~~~~~~~~~~\\W~~~~~~~~~~~~\\|/~~		" << std::endl;
		file.close();
	}
}

std::string ShrubberyCreationForm::getTarget()
{
	return(this->target);
}