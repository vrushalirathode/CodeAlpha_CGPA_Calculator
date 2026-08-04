#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "========== CGPA CALCULATOR ==========\n";
    cout << "Enter number of courses: ";
    cin >> n;

    vector<string> grade(n);
    vector<int> credit(n);
    vector<double> gradePoint(n);

    double totalCredits = 0, totalGradePoints = 0;

    cout << "\nGrade Point Reference:\n";
    cout << "O = 10\nA+ = 9\nA = 8\nB+ = 7\nB = 6\nC = 5\nF = 0\n\n";

    for(int i = 0; i < n; i++) {
        cout << "Course " << i + 1 << endl;
        cout << "Enter Grade: ";
        cin >> grade[i];
        cout << "Enter Credit Hours: ";
        cin >> credit[i];

        if(grade[i] == "O") gradePoint[i] = 10;
        else if(grade[i] == "A+") gradePoint[i] = 9;
        else if(grade[i] == "A") gradePoint[i] = 8;
        else if(grade[i] == "B+") gradePoint[i] = 7;
        else if(grade[i] == "B") gradePoint[i] = 6;
        else if(grade[i] == "C") gradePoint[i] = 5;
        else gradePoint[i] = 0;

        totalCredits += credit[i];
        totalGradePoints += gradePoint[i] * credit[i];
        cout << endl;
    }

    double cgpa = totalGradePoints / totalCredits;

    cout << "\n========== RESULT ==========\n";
    cout << left << setw(10) << "Grade"
         << setw(15) << "Credits"
         << "Grade Points\n";

    for(int i = 0; i < n; i++) {
        cout << setw(10) << grade[i]
             << setw(15) << credit[i]
             << gradePoint[i] << endl;
    }

    cout << "\nTotal Credits : " << totalCredits;
    cout << "\nCGPA          : " << fixed << setprecision(2) << cgpa << endl;

    return 0;
}
