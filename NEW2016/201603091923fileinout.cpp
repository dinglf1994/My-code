#include<iostream>
#include<fstream>
using namespace std;
#include<stdlib.h>

int main(){
    //int i = 100;
    ofstream testfile("test1.txt");
    if(testfile.is_open()){
        testfile << "1 2 3 4 \n";
        testfile << "5 6 7 8 \n";
        testfile.put('B');
    }
    if(!testfile.is_open())
        cout << "error"<<endl;
        testfile.close();
    char buffer[256];
    ifstream examplefile("test1.txt");
    if(!examplefile.is_open()){
        cout <<"error";
    }
    if(!examplefile.eof()){
        examplefile.read(buffer,100);
        cout << buffer <<endl;
    }
    examplefile.close();
    return 0;
}
