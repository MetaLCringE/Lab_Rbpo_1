#include <iostream>
#include <string>

using namespace std;

unsigned short Height;

unsigned short ReadPersonAge() {
	std::cout << "Age - ";
	unsigned short Age;
	std::cin >> Age;
	return Age;
}

std::string ReadPersonName() {
	std::cout << "Name - ";
	std::string Name = "";
	std::cin >> Name;
	return Name;
}

void ReadPersonHeigth() {
	std::cout << "Height - ";
	std::cin >> Height;
}

void ReadPersonWeigth(unsigned short& Weight) {

	std::cout << "Weight - ";
	std::cin >> Weight;
}

void ReadPersonSalary(double* Salary) {
	std::cout << "Salary - ";
	std::cin >> *Salary;
}

void ReadPersonData(std::string& Name, unsigned short& Age, double& Salary) {
	std::cout << "Enter your information: \n";
	Name = ReadPersonName();
	Age = ReadPersonAge();
	ReadPersonSalary(&Salary);

}

void ReadPersonData(std::string& Name, unsigned short& Age, unsigned short& Height, unsigned short& Weight) {
	std::cout << "Enter your information: \n";
	Name = ReadPersonName();
	Age = ReadPersonAge();
	ReadPersonHeigth();
	Height = ::Height;
	ReadPersonWeigth(Weight);

}

void WritePersonData(unsigned short Age, const std::string& Name, const std::string& Height = "", const std::string& Weight = "", const std::string& Salary = "") {
	std::cout << "Age - " << Age << "\n";
	std::cout << "Name - " << Name << "\n";
	std::cout << "Heignt - " << Height << "\n";
	std::cout << "Weight - " << Weight << "\n";
	std::cout << "Salary - " << Salary << "\n\n";
}

int main() {
	std::string Name;
	unsigned short Weight;
	unsigned short Age;
	double Salary;
	string h;
	ReadPersonData(Name, Age, Salary);
	WritePersonData(Age, Name, "", "", std::to_string(Salary));


	ReadPersonData(Name, Age, Height, Weight);
	WritePersonData(Age, Name, std::to_string(Height), std::to_string(Weight), "");
	return 0;
}