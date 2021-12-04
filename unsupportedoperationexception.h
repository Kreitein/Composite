#ifndef UNSUPPORTEDOPERATIONEXCEPTION_H
#define UNSUPPORTEDOPERATIONEXCEPTION_H
#include <iostream>
#include <stdexcept>

class UnsupportedOpetionException : public std::exception {
public: 
	UnsupportedOpetionException();
	virtual const char* what();
};

#endif
