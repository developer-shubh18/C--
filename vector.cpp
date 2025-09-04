#include<iostream>
#include<vector>

using namespace std;
int main(){
    // VECTORS ARE SIMILAR TO ARRAYS!!!
    vector <int> vec={18,45,07};
    cout<<"size="<<vec.size()<<endl;
    cout<<endl;
    vec.push_back(33);
    vec.insert(vec.begin(),3);
    cout<<"after push back="<<vec.size()<<endl;
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