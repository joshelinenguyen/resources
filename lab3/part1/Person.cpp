#include "Person.h"
#include <iostream>

using namespace std;

Person::Person(std::string name) {
	mName = name;
}

std::string Person::getName() {
	return mName;
}

Professor::Professor(std::string name, std::string department) : Person(name), mDepartment(department){
	mName = name;
}

std::string Professor::getDepartment() {
	return mDepartment;
}

Student::Student(std::string name, std::string major) : Person(name), mMajor(major), mGpa(0.0){
	mName = name;
}

void Student::setGPA(double gpa) {
	mGpa = gpa;
}

std::string Student::getMajor() {
	return mMajor;
}

UscStudent::UscStudent(std::string name, std::string major, double gpa) : Student(name, major){
	mName = name;
	mMajor = major;
	setGPA(gpa);
}

void UscStudent::printTranscript() {
	// TO DO: fill in
	cout << "Name: " << getName() << endl;
	cout << "GPA: " << mGpa << endl;
    cout << "Major: " << getMajor() << endl;
}
