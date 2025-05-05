#include "Integer.h"


Integer::Integer(int number) {
	this->number = number;
}

Integer::Integer(const Integer& num) {
	this->number = num.number;
}

void Integer::set(int number) {
	this->number = number;
}

int Integer::get() {
	return number;
}


void Integer::add(Integer object2) {
	number = number + object2.get();
}

void Integer::subtract(Integer object2) {
	number = number - object2.get();

}

void Integer::multiply(Integer object2) {
	number = number * object2.get() ;
}

void Integer::divide(Integer object2) {
	Integer result;
	if (object2.get() != 0) {
		number = number / object2.get();
	}
}

string Integer::toString() {
	return to_string(number);
}
