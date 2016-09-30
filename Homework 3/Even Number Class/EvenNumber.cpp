#include "EvenNumber.h"

EvenNumber::EvenNumber()
{
	value = 0;
}

EvenNumber::EvenNumber(int numberValue)
{
	if (numberValue % 2 != 0) value = 0;
	else value = numberValue;
}

int EvenNumber::getValue()
{
	return value;
}

int EvenNumber::getNext()
{
	return (value+2);
}

int EvenNumber::getPrevious()
{
	return (value-2);
}
