//Q2 digit counter
#include <iostream>
using namespace std;

int counter(int num){
    int count = 0;
    while(num != 0){
        num /= 10;
        count++;
    }
    return count;
}

int main(){
    int num;
    cout << "Enter number: ";
    cin >> num;

    cout << "Number of digits: " << counter(num);

    return 0;
}