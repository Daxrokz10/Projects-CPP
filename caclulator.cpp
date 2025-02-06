#include <iostream>
#include <string>

using namespace std;

struct Student {
    float sub1, sub2, sub3, sub4, avg;
    string grade;
};

string calculateGrade(float avg) {
    return (avg >= 90) ? "A" :
           (avg >= 80) ? "A-" :
           (avg >= 70) ? "B" :
           (avg >= 60) ? "B-" :
           (avg >= 50) ? "C" :
           (avg >= 40) ? "D" : "F";
}

int main() {
    Student student;

    cout << "Subject 1: ";
    cin >> student.sub1;
    cout << "Subject 2: ";
    cin >> student.sub2;
    cout << "Subject 3: ";
    cin >> student.sub3;
    cout << "Subject 4: ";
    cin >> student.sub4;

    student.avg = (student.sub1 + student.sub2 + student.sub3 + student.sub4) / 4;
    student.grade = calculateGrade(student.avg);

    int comment = 0;
    if(student.grade == "A" || student.grade == "A-"){
        comment = 1;
    }else if(student.grade == "B" || student.grade == "B-"){
        comment = 2;
    }else if(student.grade == "C"){
        comment = 3;
    }else if(student.grade == "D"){
        comment = 4;
    }else if(student.grade == "F"){
        comment = 5;
    }

    cout << "Your Average is: " << student.avg << "\n";
    cout << "Your Grade is: " << student.grade;
    
    switch(comment){
        case 1:
            cout << " Excellent Work!";
            break;
        case 2:
            cout << " Well Done.";
            break;
        case 3:
            cout << " Good Job.";
            break;
        case 4:
            cout << " You passed but you could do better.";
            break;
        case 5:
            cout << " Please Try Again Next Time.";
            break;
        default:
            break;
    }

    
    if (comment >= 1 && comment <= 4) {
        cout << " You are eligible for the next level";
    } else if (comment == 5) {
        cout << " You are not eligible for the next level";
    }
    return 0;
}