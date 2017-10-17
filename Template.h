/*
A template for making a C++ header file
File: Template.h
Author: Micah A Church
Created on October 17 2017, 11:17am

Starting if for the class if not defined define it
	#ifndef CLASS_NAME
The definition of the class
	#define CLASS_NAME
Any includes
	#include <iostream>
Actual class
	class CLASS_NAME {
Public portion of the things(things anyone can use)
	public:
    	Any functions or public variables(normally just functions)
Private portion of the class objects(things that only this class and its decendants can use)
	private:
    	Usually the actual data members

};End the definition of the class with a semicolon
Close the if
#endif