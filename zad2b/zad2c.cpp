#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

#define STUDENTS_COUNT 10

class Student {
	public:
		string studentNo;
		string studentName;
		string studentSName;
		string studentOn;
			
		void setStudentNo(string studentNo) {
			this->studentNo = studentNo;
		}
		
		string getStudentNo() {
			return this->studentNo;
		}
		
		void setStudentName(string studentName)
		{
			this->studentName = studentName;		
		}
		
		void setStudentSName(string studentSName)
		{
		this->studentSName = studentSName;	
		}
		
		string getStudentName()
		{
		return this->studentName;
		}
		
		string getStudentSName()
		{
			return this->studentSName;
		}
		
		void setStudentOn(string studentOn)
		{
		this->studentOn = studentOn;	
		}
		
		string getStudentOn()
		{ 
			return this->studentOn;
		}
		
		
};

string getRandomStudentNumber() {
	ostringstream ss;
	int randomNumber = rand() % 2000 + 37000;
	
	ss << randomNumber;
	
	return ss.str();
}

string getRandomStudentName() {
	int randomNumber = rand() % 3;
	string names[5] = {"Jan", "Piotr", "Daniel", "Adam", "Kamil"};

	return names[randomNumber];
}

string getRandomStudentSName() {
	int randomNumber = rand() % 3;
	string names[3] = {"Kowalski", "Nowak", "Pawlak"};

	return names[randomNumber];	
}

string getRandomStudentOn() {
	int randomNumber = rand() % 3;
	string names[3] = {"Aktywny", "Nie Aktywny", "Aktywny"};

	return names[randomNumber];	
}



int main() {
	vector<Student> students;
	
	for(int i = 0; i < STUDENTS_COUNT; i++) {
		Student student;
		
		student.setStudentNo(getRandomStudentNumber());
		
		student.setStudentName(getRandomStudentName());
			
		student.setStudentSName(getRandomStudentSName());
			
		student.setStudentOn(getRandomStudentOn());
		
		students.push_back(student);
	}
	
	cout  << "Students group have been filled." << endl << endl;
	
	for(int i = 0; i < students.size(); i++) {
		Student student = students.at(i);
		
		cout << student.getStudentNo() << endl;
		cout << student.getStudentName() << " ";
		cout << student.getStudentSName() << endl;
		cout << student.getStudentOn() << endl;
	}
	
	return 0;
}
