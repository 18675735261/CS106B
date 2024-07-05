#include <iostream>
#include <fstream>
using namespace std;
void addnumber();
int main(){
    ifstream input;
    input.open("poem.txt");
    string line;
    while (getline(input,line)){
        cout <<line<<endl;
    }
    input.close();
    addnumber();
    return 0;
} 
void addnumber(){
    ifstream number;
    number.open("number.txt");
    string line;
    int sum=0;
    while (getline(number,line)){
        sum+=std::stoi(line);
    }
    cout<<"the sum is "<<sum<<endl;
    number.close();
}