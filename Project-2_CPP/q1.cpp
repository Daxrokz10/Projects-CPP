//Q1 alphabet skipper 
#include <iostream>
using namespace std;

char skipper(){
    char alph = 'a';
    do{
        cout<<alph<<" ";
        alph += 4; 
    }while(alph <= 'z');
    return 0;
}
int main(){
    skipper();
}