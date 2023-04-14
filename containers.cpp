#include<bits/stdc++.h>
using namespace std;
int main(){
    
    
    //1.pairs


    // pair<int,int> p={1,23};
    // cout<<p.first<<" "<<p.second<<" ";

    // pair<pair<int,char>,int> p={{1,'a'},34};
    // cout<<p.first.second<<" "<<p.second<<endl;

    //array of pair

    // pair<int,int>arr[]={{12,34},{45,89},{45,3232}};
    // cout<<arr[1].second<<" ";
    // cout<<endl;
    // cout<<arr[2].first<<" ";
    // cout<<endl;
    // cout<<arr[0].second<<" ";
    // cout<<endl;


    //2.Vector
    // vector<int> v;
    //push_back will add element at the back
    // v.push_back(12);
    //this is another texhnique of adding element faster than push back
    // v.emplace_back(45);
    
    //we have pop it will pop the element or we can say delete the element

    //in iterator we have begin end 
    //begin will point to the first element's memory location
    //end will point to the last elements next memory
    //in this we have also rbegin and rend 

    // vector<int> v2;
    // int a;
    // for(int i=0;i<10;i++){
    //     cin>>a;
    //     v.push_back(a);
    // }

    // vector<int>::iterator ts=v.begin();
    // for(auto ts:v2){
    //     cout<<ts<<" ";
    //     cout<<endl;
    // }
    // vector<int>::iterator it=v.begin();
    //this is for printing the vector 
    // for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        
    //     cout<<*(it)<<" ";
    // } 
    //there is another method of printing the vector instead of writing whole iterator

    // for(auto it=v.rbegin();it!=v.rend();it++){
       
    //     cout<<*(it)<<" ";
    // }

    //simplest way to print is using for each loop
    // for(auto it:v){
        
    //     cout<<it<<" ";
    // }

    //copy one vector into another
    // vector<int> v1=v;
    // cout<<"creating a copy of vector by creating another vector"<<endl;
    // for(auto it:v1){
    //     cout<<it<<" ";
    // }
    // int n;
    // cout<<"Enter the size of vector"<<endl;
    // cin>>n;
    // int a;
    // for(int i=0;i<n;i++){
    //     cout<<"Enter the number:"<<endl;
    //     cin>>a;
    //     v.emplace_back(a);
    // }

    //printing 
    // vector<int>::iterator it=v.begin();
    // for(auto it:v){
    //     cout<<it<<" ";
    // }cout<<endl;


    //deleting an element from vector

    // v.erase(v.begin());
    // for(auto it:v){
    //     cout<<it<<" ";
    // }cout<<endl;

    //if we want to delete more than one element like

    // v.erase(v.begin(),v.begin()+3);
    // for(auto it:v){
    //     cout<<it<<" ";
    // }cout<<endl;
    

    //insert

    // v.insert(v.begin()+1,34);
    // v.insert(v.begin()+2,3,45);

    // for(auto it:v){
    //     cout<<it<<" ";
    // }cout<<endl;
    



    //3. list

    // list<int> ls;
    // list is similar to vector but the only difference in list that makes it different from vector is that it allows 
    // us to push front as well as back same for pop rest all operations are same
    // ls.emplace_back(12);
    // ls.emplace_front(10);
    // list<int>::iterator it=ls.begin();
    // for(auto it=ls.begin();it!=ls.end();it++){
    //     cout<<*(it)<<" ";
    // }cout<<endl;

    // ls.pop_front();
    // for(auto it:ls){
    //     cout<<it<<" ";
    // }cout<<endl;



    //4.deque
    // deque<int> d;
    // d.push_back(1);
    //same as list and vector 

    //5.stack 
    // stack<int> st;
    // st.push(12);
    // in stack we have push pop top size empty _full
    // cout<<st.top();




    //6.queue

    // queue<int> q;
    // q.push(12);
    // q.push(34);
    // cout<<q.back();
    // cout<<q.front();


    //7. priority_queue
    // it lists the element according to the largest number
    // priority_queue<int> pq;
    // pq.push(12);
    // pq.push(45);
    // pq.push(34);
    // cout<<pq.top();


    //min heap

    // priority_queue<int,vector<int>,greater<int>>pq;
    // pq.push(12);
    // pq.push(45);
    // pq.push(576);
    // cout<<pq.top();



    //8. set 
    //set arranges the elements in the sorted order as well as only have unique keys
    //no duplicate keys are allowed 
    // int set we have insert function
    // set<int> s1;
    // s1.insert(12);
    // s1.insert(45);
    // s1.insert(71);
    // s1.insert(89);
    // s1.insert(78);
    // auto it=s1.find(78); //it will return iterator 
    // if an element is not there it will return the end iterator

    // in set we have lower bound and upper bound 
    // lower bound means if a given element is present in a set then it will give us the iterator of that element 
    // else if not it will give us the next iterator 
    // whereas in case of upper bound if an element is present or even if not present it will still give us next iterator
    
    // set<int> st;
    // st.insert(45);
    // st.insert(80);
    // st.insert(79);
    // st.insert(687);
    // st.insert(12);
    // st.emplace(90);
    // st.emplace(90);

    // set<int>::iterator it=st.begin();
    // for(auto it:st){
    //     cout<<it<<" ";
    // }

    // //erase
    // cout<<endl;
    // st.erase(687);
    // for(auto it:st){
    //     cout<<it<<" ";
    // }




    //multiset

    // in case of multiset we can insert duplicate elements as well

    // multiset<int> m;
    // m.insert(34);
    // m.insert(56);
    // m.insert(78);
    // m.insert(36);
    // m.insert(78);

    // multiset<int>::iterator it=m.begin();
    // for(auto it:m){
    //     cout<<it<<" ";
    // }


    //but in case of erase it will erase all dupliacte elements 

    // cout<<endl;

    // m.erase(78);

    // for(auto it:m){
    //     cout<<it<<" ";
    // }


    //unordered set also stores unique element but not in sorted order but in randomized order
    // no lower bound and upper bound 

    //map

    // stores the key value pairs based on sorted order of keys
    // map<int,int> mp;
    // mp.insert({143,2});
    // mp.insert({12,45});
    // mp.insert({67,89});

    //find 
    
    //printing the map

    // for(auto it:mp){
    //     cout<<it.first<<" "<<it.second<<endl;
    // }


    //multiset will have duplicate keys

    //unordered will not store in sorted order but dont store duplicate keys


    //------------------------------------------------------------------------------------------------------------
    //--------------------------------ALOGO's imp----------------------------------------------------------------

    // 1.sort

    // eg.

    // vector<int> v;
    // int a;
    // for(int i=0;i<5;i++){
        
    //     cin>>a;
    //     v.push_back(a);
    // }

    // vector<int>::iterator it=v.begin();
    // //sort(start iterator,end iterator)
    // sort(v.begin(),v.end());

    // cout<<"Sorted vector is:"<<endl;
    // for(auto it:v){
    //     cout<<it<<" ";
    // }cout<<endl;


    //if we want to store it in descending order

    // vector<int> v;
    // int a ;
    // int n;
    // cout<<"Enter the number of elements you wish to enter "<<endl;
    // cin>>n;

    // for(int i=0;i<n;i++){
    //     cin>>a;
    //     v.push_back(a);
    // }

    // vector<int>::iterator it=v.begin();
    // sort(v.begin(),v.end(),greater<int>());
    // cout<<"Arranging elements in descending order"<<endl;
    // for(auto it=v.begin();it!=v.end();it++){
    //     cout<<*(it)<<" ";
    // }



    //__builtinpopcount will give us the praticular number's number of set bit 
    // eg.
    // int num=7;  
    // int cnt=__builtin_popcount(num);
    //builtin_popcountll is for long long 
    // cout<<cnt<<endl;


    //next is permutation

    // // it will give me all permutations 
    // but one thing is that we should start from the sorted number
    // string s="123";
    // do{
    //     cout<<s<<" ";
    //     cout<<endl;
    // }while(next_permutation(s.begin(),s.end()));


    //next is max element if we want to find the maximum element in an array or vector then we simply do    

     vector<int> v;
    int a ;
    int n;
    cout<<"Enter the number of elements you wish to enter "<<endl;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    vector<int>::iterator it =v.begin();
    int maxi=*max_element(v.begin(),v.end());
    cout<<"Maximum element is"<<endl;   
    cout<<maxi<<" ";
    cout<<endl;



    return 0;
}
