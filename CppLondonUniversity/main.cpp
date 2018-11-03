#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include <algorithm>

struct student 
{
	// MEMBER VARIABLES;
	std::string m_first_name{};
	std::string m_surname{};
	int m_id = ++next_id;
	static int next_id;

	// CONSTRUCTOR
	//student() { m_id = ++next_id; }
	//student(const std::string& s_first_name, const std::string& s_surname) : m_first_name(s_first_name), m_surname(s_surname), m_id(++next_id) {}

	// MEMBER FUNCTIONS
	void print()
{
		std::cout << m_first_name << " " << m_surname << " " << m_id;
	}
};
struct module_record
{
	// MEMBER VARIABLES
	student m_student;
	float m_grade;
	bool operator<(const module_record& record_b) const
	{
		return m_grade < record_b.m_grade;
	}
};

struct module
{
	// MEMBER VARIABLES
	std::string m_module_name;
	std::vector<module_record> m_module_records;

	// MEMBER FUNCTIONS
	void add_record(student s_student, float s_grade)
	{
		m_module_records.push_back({ s_student, s_grade });
	}
	void sort_records()
	{
		std::sort(m_module_records.begin(), m_module_records.end(), 
			[] (const module_record& module_record_A, const module_record& module_record_B)
			{
				return module_record_B < module_record_A;
			}
		);
	}
	void print_records()
	{
		if (m_module_records.size() == 0)
		{
			return;
		}
		else
		{
			sort_records();
			for (auto & record : m_module_records)
			{
				record.m_student.print();
				std::cout << "Grade: " << record.m_grade << '\n';
			}
		}
	}

};

int student::next_id = 0;

int main()
{
	std::vector<module_record> records{
		{{ "Alvin", "Morrison" }, 3.5f},
		{{ "John", "Wick" }, 8.9f},
		{{ "Malcom", "Harrison" }, 4.0f},
		{{ "Alice", "Piper" }, 8.7f},
		{{ "Allan", "Green" }, 4.0f},
		{{ "Sarah", "Smith" }, 1.2f},
		{{ "Arnold", "Swazerniger" }, 3.3f},
		{{ "Mila", "Kooniss" }, 5.6f}
	};
	module student_records;
	for (auto & record : records)
	{
		student_records.add_record(record.m_student, record.m_grade);
	}
	student_records.print_records();
	student s3;
}