#include <cmath> // for pow

#include "../headers/integer.h"
#include "../headers/dividebyzeroerror.h"

namespace ExactArithmetic
{

	Integer::Integer()
	{
		digits.push_front(0);
	}

	Integer::Integer(unsigned long long int value)
	{
		std::string str = std::to_string(value);
		for (char d : str)
		{
			digits.push_front(d - '0');
		}
	}

	Integer::Integer(const std::string & str)
	{
		if (str.at(0) == '+' || str.at(0) == '-')
		{
			str.substr(1);
		}
		int value = std::stoi(str);
		for (char d : str)
		{
			digits.push_front(d - '0');
		}
	}

	Integer Integer::operator+(const Integer & r) const
	{
		return Integer(getValue(digits) + getValue(r.digits));
	}

	Integer Integer::operator-(const Integer & r) const
	{
		return Integer(getValue(digits) - getValue(r.digits));
	}

	Integer Integer::operator*(const Integer & r) const
	{
		return Integer(getValue(digits) * getValue(r.digits));
	}

	Integer Integer::operator/(const Integer & r) const
	{
		if(getValue(r.digits) == 0)
		{
			throw(DivideByZeroError());
		}
		return Integer(getValue(digits) / getValue(r.digits));
	}

	Integer Integer::operator%(const Integer & r) const
	{
		if (getValue(r.digits) == 0)
		{
			throw(DivideByZeroError());
		}
		return Integer(getValue(digits) % getValue(r.digits));
	}

	bool Integer::operator<(const Integer & r) const
	{
		return getValue(digits) < getValue(r.digits);
	}

	bool Integer::operator>(const Integer & r) const
	{
		return getValue(digits) > getValue(r.digits);
	}

	bool Integer::operator<=(const Integer & r) const
	{
		return getValue(digits) <= getValue(r.digits);
	}

	bool Integer::operator>=(const Integer & r) const
	{
		return getValue(digits) >= getValue(r.digits);
	}

	bool Integer::operator==(const Integer & r) const
	{
		return getValue(digits) == getValue(r.digits);
	}

	bool Integer::operator!=(const Integer & r) const
	{
		return getValue(digits) != getValue(r.digits);
	}

	Integer & Integer::operator+=(const Integer & r)
	{
		int value = getValue(digits);
		value += getValue(r.digits);
		digits = Integer(value).digits;
		return *this;
	}

	Integer & Integer::operator-=(const Integer & r)
	{
		int value = getValue(digits);
		value -= getValue(r.digits);
		digits = Integer(value).digits;
		return *this;
	}

	Integer & Integer::operator*=(const Integer & r)
	{
		int value = getValue(digits);
		value *= getValue(r.digits);
		digits = Integer(value).digits;
		return *this;
	}

	Integer & Integer::operator/=(const Integer & r)
	{
		if (getValue(r.digits) == 0)
		{
			throw(DivideByZeroError());
		}
		int value = getValue(digits);
		value /= getValue(r.digits);
		digits = Integer(value).digits;
		return *this;
	}

	Integer & Integer::operator%=(const Integer & r)
	{
		if (getValue(r.digits) == 0)
		{
			throw(DivideByZeroError());
		}
		int value = getValue(digits);
		value %= getValue(r.digits);
		digits = Integer(value).digits;
		return *this;
	}

	Integer & Integer::operator++()
	{
		int value = getValue(digits);
		++value;
		digits = Integer(value).digits;
		return *this;
	}

	Integer Integer::operator++(int)
	{
		int value = getValue(digits);
		value++;
		return Integer(value);
	}

	Integer & Integer::operator--()
	{
		int value = getValue(digits);
		--value;
		digits = Integer(value).digits;
		return *this;
	}

	Integer Integer::operator--(int)
	{
		int value = getValue(digits);
		value--;
		return Integer(value);
	}

	std::string Integer::toString() const
	{
		return std::to_string(getValue(digits));
	}

	int Integer::getValue(std::list<Digit> digits) const
	{
		int place = 0;
		int value = 0;
		for (Digit digit : digits) {
			value += digit * pow(10, place);
			place++;
		}
		return value;
	}

	std::ostream & ExactArithmetic::operator<<(std::ostream & output, const Integer & r)
	{
		int place = 0;
		int value = 0;
		for (auto digit : r.digits)
		{
			value += digit * pow(10, place);
			place++;
		}
		output << value;
		return output;
	}

	std::istream & ExactArithmetic::operator>>(std::istream & input, Integer & r)
	{
		int value;
		if (input.peek() == '+' || input.peek() == '-')
		{
			input.ignore(1);
		}
		input >> value;
		std::string str = std::to_string(value);
		for (char d : str)
		{
			r.digits.push_front(d - '0');
		}
		return input;
	}

} // End of namespace ExactArithmetic