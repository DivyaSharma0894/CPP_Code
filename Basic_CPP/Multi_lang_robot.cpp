#include<iostream>
using namespace std;
int main(){
    char button;
    cout<<"enter a for english, b for hindi, c for chinese, d for japanese"<<endl;
    cin>>button;
    switch(button){
        case 'a':
        cout<<"hello"<<endl;
        break;
        case 'b':
        cout<<"namaste"<<endl;
        break;
        case 'c':
        cout<<"salut"<<endl;
        break;
        case 'd':
        cout<<"Hola"<<endl;
        break;
        default: 
        cout<<"i am still learning"<<endl;
        break;
    }
    return 0;
}