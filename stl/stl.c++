#include <bits/stdc++.h>
using namespace std;

void explainInPair(){
    pair<int, int> p = {1, 3};
    cout<<p.first<<" "<<p.second;
    pair<<int, pair<int, int>>p = {1,{3,4}};
    cout<<p.first <<" "<<p.second.second<<" "<<p.second.first;
    pair<int, int>arr[] = {{1, 2},{2,5},{5,1}};
    cout<<arr[1].second;
}

void explainVector(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>>vec;
    v.push_back({1,2});
    v.emplace_back(1,2);
    vector<int> v(5,100);
    vector<int> v(5);
    vector<int> v1(5,20);
    vector<int> v2(v1);

    vector<int>::iterator it = v.begin();
    it++;
    cout<< *(it) << " ";
    it = it + 2;
    cout<<*(it)<< " ";
    vector<int>::iterator it = v.end();
    vector<int>::iterator it = v.rend();
    cout<<v[0]<<" "<<v.at(0);
    cout<<v.back()<<" ";
    for(vector<int>::iterator it = v.begin(); it!=v.end(); it++){
        cout<<*(it)<<" ";
    }
    for(auto it = v.begin(); it!=v.end(); it++){
        cout<<*(it)<<" ";
    }
    for(auto it:v){
        cout<<it<<" ";
    }
    v.erase(v.begin() + 1);
    v.erase(v.begin(), v.begin() + 4);
    vector<int>v(2, 100);
    v.insert(v.begin(), 300);
    v.insert(v.begin() + 1, 3, 20);
    vector<int> copy(2,50);
    v.insert(v.begin(), copy.begin(), copy.end());
    cout<<v.size();
    v.pop_back();
    v1.swap(v2);
    v.clear();
    cout<<v.empty();
}
void explainList(){
    list<int>ls;
    ls.push_back(2);
    ls.emplace_back(4);
    ls.push_front(5);
    ls.emplace_front();
}

void explainStack(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(5);
    st.emplace_back(5);
    cout<<st.top();
    st.pop();
    cout<<st.top();
    cout<<st.size();
    cout<<st.empty();
    stack<int>st1, st2'
    st1.swap(st1,st2);
}



