// Dustin Henderson
// Exam 2 - Students

#include <iostream>
#include "Student.h"
#include <conio.h>
#include <string>
#include "Main.h"


int main()
{
    char createStudent;
    do 
    {
        Student student;
        std::string studentName;
        float studentGPA = 0;

        std::cout << "Enter the name of the student: ";
        std::cin >> studentName;
        student.SetName(studentName);

        std::cout << "Enter " << student.GetName() << "'s GPA: ";
        std::cin >> studentGPA;
        student.SetGPA(studentGPA);


        student.Display();

        std::cout << "\n";
        std::cout << "Do you want to create another student (Y/N)? ";
        std::cin >> createStudent;

        
    } while ((createStudent == 'Y') || (createStudent == 'y'));

    (void)_getch();
    return 0;
}