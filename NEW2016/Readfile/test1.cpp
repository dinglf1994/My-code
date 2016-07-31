#include<iostream>
#include<fstream>
#include<string>
#include<stdlib.h>

using namespace std;

int main(){
    ifstream in;
    char filename[40];
    //getline(cin,filename,'\n');
    cin >> filename;
    in.open(filename);
    if(!in){
        cout << "error to open file " <<endl;
        return 1;
    }
    char ch;
    while(!in.eof()){
        in.read(&ch,1);
        cout << ch;
    }
    /*
    char buff[256];
    while(!in.eof()){
        in.getline(buff,100);
        cout << buff <<endl;
        //getchar();
    }
    */
    in.close();
}
