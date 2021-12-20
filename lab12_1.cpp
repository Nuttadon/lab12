// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include<iostream>
#include<cstdlib>   
#include<ctime>
#include<string>
using namespace std;

int main(){
    string cg;
    int grade;
    srand(time(0));
    grade = rand()%9;
    cout << "Press Enter 3 times to reveal your future.";
    for(int ct=1;ct<=3;ct++) cin.get();
    switch(grade){
        case 0 :  cg = "A";
                    break;
        case 1 :  cg = "B+";
                    break;
        case 2 :  cg = "B";
                    break;
        case 3 :  cg = "C+";
                    break;
        case 4 :  cg = "C";
                    break;
        case 5 :  cg = "D+";
                    break;
        case 6 :  cg = "D";
                    break;
        case 7 :  cg = "F";
                    break;
        case 8 :  cg = "W";
                    break;          
    } 
    cout << "You will get " << cg <<" in this 261102.";

}