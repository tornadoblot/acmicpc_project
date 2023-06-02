#include <iostream>
#include <algorithm>
using namespace std;

double GetGrade(string grade)
{
    if (grade == "A+") return 4.5;
    if (grade == "A0") return 4.0;
    if (grade == "B+") return 3.5;
    if (grade == "B0") return 3.0;
    if (grade == "C+") return 2.5;
    if (grade == "C0") return 2.0;
    if (grade == "D+") return 1.5;
    if (grade == "D0") return 1.0;
    return 0.0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    double res = 0, cSum = 0;
    string grade;
    double credit;

    for (int i = 0; i < 20; i++)
    {
        cin >> grade >> credit;
        cin >> grade;

        if (grade == "P")
            continue;

        cSum += credit;
        res += credit * GetGrade(grade);
    }

    cout << (double)res / cSum;

    return 0;
}