#pragma once

#include <iostream>

class Student
{

private:

    std::string m_name;
    float m_gpa = 0.0;

public:

    // constructors
    Student() { m_name = "unknown"; m_gpa = 0; }

    // mutator methods (setters)
    void SetName(const std::string name) { m_name = name; }
    void SetGPA(const float gpa) { if (gpa >= 0) m_gpa = gpa; }

    // accessor methods (getters)
    std::string GetName() const { return m_name; }
    float GetGPA() const { return m_gpa; }

    void Display() const
    {
        std::cout << GetName() << " has a GPA of " << GetGPA() << "\n";
    }

};