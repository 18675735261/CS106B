#include <iostream>
#include <string>//也要include 
using namespace std;
void test();
int main(){
    test();
    string s1="marry";
    s1+="me";
    cout <<s1<<endl;
    string s2="shiny";
    if(s2>s1 && s1=="marryme"){ //与java不同的是cpp可以直接用==，！=，<,>来比较string
        cout<<1<<endl;
    }else cout <<0<<endl;
    s2.append(",love u");//在string后面添加
    cout <<s2<<endl;
    s1.erase(3,2);//就是删除第三个字母开始的后两个字母
    s1[0];//s1的第一个字符
    int n =std::stoi("123");//将string转化为int
    string s4="hi";
    s4+='?';
    s4+=41;//加哈希表41号元素
    cout<<s4<<endl;
    return 0;
}
void test(){
    string name;
    cout <<"print your name"<<endl;
    getline(cin,name);//这就将一行输入的结果传到name里 
    cout<<"your name is "<<name<<endl;
}