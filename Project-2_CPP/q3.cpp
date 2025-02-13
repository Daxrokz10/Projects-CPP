//Q3 Sum of first and last digit

#include<iostream>
using namespace std;

int sumlf(int num){
    int lasDigit = num % 10;
    int firstDigit = 0;

    while(num >= 10){
        num /= 10;
    }
    firstDigit = num;
    cout<<"Sum is: "<<firstDigit+lasDigit;
    return num;
}
int main(){
    int num;

    cout<<"Enter your number: ";
    cin>>num;

    sumlf(num);
}