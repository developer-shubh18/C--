#include<iostream>
#include<vector>

using namespace std;
int main(){
    // VECTORS ARE SIMILAR TO ARRAYS!!!
    vector <int> vec;
    vec.push_back(18);
    vec.push_back(45);
    vec.push_back(93);
    vec.push_back(1);
    cout<<"size="<<vec.size()<<endl;
    cout<<"capacity="<<vec.capacity()<<endl;
    cout<<endl;
    vec.push_back(33);
    vec.insert(vec.begin()+2,3);
    cout<<"size="<<vec.size()<<endl;
    cout<<"after push back="<<vec.size()<<endl;
    cout<<"capacity="<<vec.capacity()<<endl;
    for(int i :vec){
        cout<<i<<endl;
    }
    cout<<endl;

    vec.pop_back();
    cout<<"after pop back="<<vec.size()<<endl;

    for(int i :vec){
        cout<<i<<endl;
    }
    cout<<endl;
    cout<<vec.front()<<endl;
    cout<<vec.at(2)<<endl;

    

    return 0;
}