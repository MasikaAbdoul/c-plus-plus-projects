#include <iostream>
using namespace std;

int main()
{
    cout << "How many terms? ";
    int numberTerms;
    cin >> numberTerms;

    int total = 0;
    int count = 0;

    for (int i = 1; i <= numberTerms; i++)
    {
        cout << "Enter grades for term " << i << ": ";
        int gradeStudents;
        cin >> gradeStudents;
        total += gradeStudents;
        count++;
        cout << "Term " << i << " grade: " << gradeStudents << endl;
    }

    double average = (double)total / count;
    cout << "Average grade: " << average<< "%" << endl;

    return 0;
}
