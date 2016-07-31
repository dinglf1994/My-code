#include<iostream>

using namespace std;

int main(){
    char ch[20];
    cout<<"enter a sentence:" <<endl;
    cin >> ch;
    cout << "The string read is: " <<ch <<endl;
    cin.getline(ch,20,'/');
    cout << "The second read is: " <<ch <<endl;
    cin.getline(ch,20);
    cout << "The third read is: " <<ch <<endl;
}
