#include  <iostream>;

using namespace std;
int main (){
    cout << "w我测" << endl;//endl意思是去到下一行
    //cout就类似java中的print
    bool a =true;//cpp中用bool
    int age=10;
    string abs="+8";
    int ageplus=100;
    if(a){
        cout <<"you are "<< age+ageplus << abs <<" years old"<<endl;
    }//变量用<<引用
    int record;
    cin >>record;//意思是输入,他只能先输入先定义好的变量，例如cin>>int ag就不可以
    cout <<record<< endl;
    return 0;
    
}
