#include <iostream>
using namespace std;
int grade;
int main(){
    // input
cout <<"Hello, Enter Your Grade! ";
cin >>grade;
    // process and output
    if(grade >= 90 && grade <= 100){
        cout<<"\nCongratulation Your Grade is A *_^";
    }
    else if(grade >= 80 && grade <90){
        cout<<"\nCongratulation Your Grade is B ^_^";
    }
        else if(grade >= 70 && grade <80){
        cout<<"\nYour Grade is C -_-";
    }
        else if(grade >= 60 && grade <70){
        cout<<"\nYour Grade is B !_!";
    }
    else{
        cout<<"\nYour Grade is F !_! and go study";
    }
return 0;
}