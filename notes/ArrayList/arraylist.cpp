#include "arraylist.h"
using namespace std;

ArrayList::ArrayList() {
    myElements=new int[10];
    mySize=0;
    myCapacity=10;
}
ArrayList::~ArrayList(){//当创建对象的生命周期结束时，自动释放他所占据的内存
    //when a arraylist is destroyed
    delete[] myElements;
}
void ArrayList::add(int value){
    checkResize();
    myElements[mySize]=value;
    mySize++;
}
int  ArrayList::get(int index)const{
    return myElements[index];
}
void ArrayList::insert(int index,int value){
    checkResize();
    for(int i=mySize;i>index;i--){
        myElements[i]=myElements[i-1];
    }
    myElements[index]=value;
    mySize++;
}
int ArrayList::size()const{
    return mySize;
}
void ArrayList::set(int index,int value){
    myElements[index]=value;
}
bool ArrayList::isEmpty()const{
    return mySize==0;
}
void ArrayList::remove(int index){
    for(int i=index;i<mySize;i++){
        myElements[i]=myElements[i+1];
    }
    myElements[mySize-1]=0;
    mySize--;

}
ostream& operator <<(ostream& out,ArrayList& list){//相当于重写tostring方法
    out<<"{";
    for(int i=0;i<list.size();i++){
        out<<list.get(i)<<",";
    }
    out<<"}";
    return out;
}

void ArrayList::checkResize(){
    if(mySize==myCapacity){
        int* bigger=new int[2*myCapacity];
        for(int i=0;i<mySize;i++){
            bigger[i]=myElements[i];
        }
        delete[] myElements;//删除以前不要的myElements
        myElements=bigger;
    }
}





