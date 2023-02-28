// Pb2 (problema rezolvata folosind specificatorul "friends")
#include <iostream>
#include <cstring>
#include "Student.h"
#include "GlobalF.h"
using namespace std;

int main()
{
	Student A, B;
	char nameA[100] = "Marius", nameB[100] = "Alexandru";

	A.setName(nameA);
	A.initCount();
	A.setGradeMath(9);
	A.setGradeMath(5);
	A.setGradeEnglish(9);
	A.setGradeEnglish(5);
	A.setGradeHistory(9);
	A.setGradeHistory(5);
	A.detAvarageGrade();

	B.setName(nameB);
	B.initCount();
	B.setGradeMath(9);
	B.setGradeMath(10);
	B.setGradeEnglish(9);
	B.setGradeEnglish(10);
	B.setGradeHistory(9);
	B.setGradeHistory(10);
	B.detAvarageGrade();

	int nrA = 0, nrB = 0;
	if (compareNames(A, B))
		if (compareNames(A, B) == 1)
			nrA++;
		else
			nrB++;
	if (compareGradeMath(A, B))
		if (compareGradeMath(A, B) == 1)
			nrA++;
		else
			nrB++;
	if (compareGradeEnglish(A, B))
		if (compareGradeEnglish(A, B) == 1)
			nrA++;
		else
			nrB++;
	if (compareGradeHistory(A, B))
		if (compareGradeHistory(A, B) == 1)
			nrA++;
		else
			nrB++;
	if (compareAvarageGrade(A, B))
		if (compareAvarageGrade(A, B) == 1)
			nrA++;
		else
			nrB++;

	if (nrA > nrB)
		cout << "studentul mai bun este A";
	else
		cout << "studentul mai bun este B";
	return 0;
}