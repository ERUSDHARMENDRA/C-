#include<iostream>
#include<conio.h>

using namespace std;

//inline function saves the execution time of small funcitons
inline int max(int x, int y){
    return ((x>y)? x : y);
}

int main(){
    int a, b;
    cout << "Enter the value of a & b:";
    cin >> a >> b;
    cout << "Greater value is: " << endl;
    max(a, b);

    getch();
    return 0;
}
