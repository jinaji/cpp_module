#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
private:
	const	std::string name;
	bool	sign;
	const int	gradeForSign;
	const int	gradeForExecute;
	
public:
	Form();
	Form(const Form& obj);
	Form(std::string name, int gradeForSign, int gradeForExecute);
	Form& operator=(const Form& obj);
	~Form();

public:
	const std::string getName() const;
	bool	getSign() const;
	int getGradeForSign() const;
	int getGradeForExecute() const;

	void beSigned(Bureaucrat& obj);

public:
	class GradeTooHighException : public std::exception
	{
		public:
		const char* what() const throw()
		{
			return ("Grade too high");
		}
	};
	class GradeTooLowException : public std::exception
	{
		public:
		const char* what() const throw()
		{
			return ("Grade too low");
		}
	};
};

std::ostream& operator<<(std::ostream& os, const Form& obj);

#endif