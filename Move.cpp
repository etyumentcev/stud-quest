#include "Move.h"
#include "Field.h"

Move::Move(int pageNumberr, Field *fieldd):pageNumber(pageNumberr), field(field)
{

}



void Move::operator()()
{
	field->Current(pageNumber);
}