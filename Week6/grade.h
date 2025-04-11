#pragma once
#ifndef GUARD_grade_h
#define GUARD_grade_h

// grade.h
#include <vector>
#include "Student_info.h"

//오버로딩 함수
double grade(double, double, double);
double grade(double, double, const std::vector<double>&);
double grade(const Student_info&);

bool fgrade(const Student_info&);
bool pgrade(const Student_info&); // 

#endif // !GUARD_grade_h


