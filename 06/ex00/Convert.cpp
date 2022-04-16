#include "Convert.hpp"

Convert::Convert() {

	resetValues();
}

Convert::Convert(char *str) {

	resetValues();
	convertStr(str);
}

Convert::Convert(const Convert &other) {

	this->Value = other.Value;
}

Convert::~Convert() {}

Convert &Convert::operator = (const Convert &other) {

	this->Value = other.Value;
	return *this;
}

void Convert::resetValues() {
	
	currentType = _noType;
	Value = 0.0;
}

bool Convert::ft_isdigit(int c) const {

	if (c >= '0' && c <= '9')
		return true;
	return false;
}

Convert::_valueType Convert::parseStr(char *str) {

	if (!str || !*str)
		throw EmptyInput();

	if (!str[1] && !ft_isdigit(str[0]))
		return _char;

	int i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;

	_valueType tmp = isInfOrNan(str, i);
	if (tmp != _noType)
		return tmp;

	if (!ft_isdigit(str[i]))
		throw NotNumeric();

	int dotCount = 0;
	int fCount = 0;
	for (; str[i]; i++) {

		if (str[i] == '.')
			dotCount++;
		if (str[i] == 'f')
			fCount++;
		if (dotCount > 1 || fCount > 1 || (!ft_isdigit(str[i]) && str[i] != 'f' && str[i] != '.'))
			throw NotNumeric();
	}
	if (!dotCount && !fCount)
		return _int;
	if (!fCount)
		return _double;
	return _float;
}

Convert::_valueType Convert::isInfOrNan(char *str, int i) {

	char inf[5] = "inff";
	int j = 0;
	for (; str[i + j] && str[i + j] == inf[j]; j++);
	if (j == 3)
		return _double;
	if (j == 4)
		return _float;

	char nan[5] = "nanf";
	int k = 0;
	for (; str[i + k] && str[i + k] == nan[k]; k++);
	if (k == 3)
		return _double;
	if (k == 4)
		return _float;
	return _noType;
}

bool Convert::convertStr(char *str) {

	resetValues();
	currentType = parseStr(str);
	if (currentType == _char) {
		Value = static_cast<int>(*str);
		return true;
	}
	Value = atof(str);
	return (true);
}

void Convert::printValue(){

	std::cout << "Current type is: ";
	switch (currentType)
	{
	case _char:
		std::cout << "char" << std::endl;
		break;

	case _int:
		std::cout << "int" << std::endl;
		break;

	case _float:
		std::cout << "float" << std::endl;
		break;

	case _double:
		std::cout << "double" << std::endl;
		break;

	default:
		std::cout << ":<" << std::endl;
		break;
	}
	printChar();
	printInt();
	printFloat();
	printDouble();
}

void Convert::printChar() {

	std::cout << "char: ";

	if (Value < 0 || Value > 127 || std::isnan(Value))
		std::cout << "impossible";
	else if (Value < 32 || Value > 126)
		std::cout << "not printable";
	else
		std::cout << "\'" << static_cast<char>(Value) << "\'";
	
	std::cout << std::endl;
}

void Convert::printInt() {

	std::cout << "integer: ";
	if (Value > std::numeric_limits<int>::max()
		|| Value < std::numeric_limits<int>::min()
		|| std::isnan(Value))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(Value) << std::endl;
}

void Convert::printFloat() {

	std::cout << "float: ";
	std::cout << static_cast<float>(Value);
	if (Value - static_cast<int>(Value) == 0)
		std::cout << ".0";
	std::cout << "f" << std::endl;
}

void Convert::printDouble() {

	std::cout << "double: ";
	std::cout << Value;
	if (Value - static_cast<int>(Value) == 0)
		std::cout << ".0";
	std::cout << std::endl;
}
