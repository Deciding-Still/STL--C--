//skeleton of c++
#include<bits/stdc++.h>
using namespace std;

int main(){


    return 0;
}




//Functions
#include<bits/stdc++.h>
using namespace std;

void print(int s){
    cout<<s;
}

int sum(int a,int b){
    return a+b;
}

int main(){
    int s=sum(4,5);
    print(s);

    return 0;
}











//STL 4 parts
//Algorithms ->sort
//containers-> pairs,vector, list, deque, queue, stack....
//Functions -> X
//Iterators  ->learning with containers



//STL pairs

void explainpairs(){
    pair<int, int>p={1,3};
    cout<<p.first<<" "<<p.second;
    
    pair<int,<pair<int, int>p= {1, {3,4}};          //Nested property of pair
    cout<<p.first<<" "<<p.second.second<<" "<<p.second.first;

    pair<int ,int>arr[] = {{1,2},{2,3},{3,4}};      //declaration of pair array
    cout<<arr[1].second;

    for(int i=0;i<n;i++){
        cin<<arr[i].first<<" "<<arr[i].second;
    }

}








//vectors

vector<int>v;
//string or int or double....

v.push_back(1);
    //or
v.emplace_back(2);

vector<pair<int,int>> vec;

v.push_back({1,2});
    //or
v.emplace_back(2,3);         //no need for { } in implace


vector<int>(5,100);          //{100,100,100,100,100}

vector<int>v(5);

vector<int v(s,20);
vector<int>v1(v);            //to make copy of v in v1;

//we can excess vectors same as arrays or using iterators 
vector<int>::iterator it = v.begin();           //v.begin points to memory where value is not to the element

it++;
cout<<*(it)<<" ";           //to access anything in memory we write *

it=it+2;
cout<<*(it)<<" ";

vector<int>::iterator it = v.end();
vector<int>::iterator it = v.rbegin();  //rarely used
vector<int>::iterator it = v.end();     //"


cout<<v[0]<<" "<<v.at(0);
cout<<v.back<<" ";              //gives last element 


for(vector<int>::iterator it=v.begin(); it !=v.end(); it++){            //stl means simple so no need to write this line
    cout<<*(it)<<" ";
}

            //or

for(auto it = v.begin(); it != v.end(); it++){
    cout<<*(it)<<" ";
}
        //or

for(auto it: v){
    cout<<it<<" ";
}

//{10,20,12,23)
v.erase(v.begin()+1);           //deletion in vector

//{10,20,12,23,35}
v.erase(v.begin()+2, v.begin()+4);      //{10,20,35} (start, end)       erase mutiple element


//insert function

vector<int>v(2,100);        //{100,100}         vector of size2 containing 100
v.insert(v.begin(),300);    //{300,100,100}
v.insert(v.begin()+1,2,10);         //{300,10,10,100,100}   (at begin+1 insert 2times 10)

//copy
vector<int>copy(2,50);
v.insert(v.begin(),copy.begin(),copy.end());        //{50,50,300,10,10,100,100}

//size
//{10,20}
v.size();   //2       

//delete
//{10,20}
v.pop_back();   //10

//swap
//v1={10,20};
//v2={30,40};
v1.swap(v2);        //v1->{30,40} , v2->{10,20}

v.clear();      //erases the entire vector

cout<<v.empty();        //returns v is empty or not (true or false)








//list          list gives front opetation also     in list internal operation is doubly linked-list and singly in vector
void explainlist(){
    list<int>ls;

    ls.push_back(2);        //{2}           //insert in vector is costiler takes lots of time
    ls.emplace_back(4);     //{2,4}         //in terms of time compx push_back is very very cheap compare to vector

    ls.push_front(5);       //{5,2,4}

    ls.emplace_front(3);     //{3,5,2,4}

    //rest functions are same as vector
    //begin, end, rbegin, rend, clear, insert, size, swap 
}










void explainDeque(){
    deque<int>dq;
    dq.push_back(1);        //{1}
    dq.emplace_back(2);     //{1,2}
    dq.push_front(4);       //{4,1,2}
    dq.emplace_front(3);    //{3,4,1,2}

    dq.pop_back();          //{3,4,1}
    dq.pop_front();         //{4,1}

    dq.back();

    dq.front();

    //rest function same as vector
    //begin, end, rbegin, rend, clear, insert, size, swap
}










//stack  lifo  main functions in stack(push pop top)
void explainstack(){
    stack<int>st;
    st.push(1);     //{1}
    st.push(2);     //{2,1}
    st.push(3);     //{3,2,1}
    st.emplace(4);  //{4,3,2,1}

    cout<<st.top();     //prints 4  "in stack indexing acess is not allowed (st[2] is invalid)"

    st.pop();           //{3,2,1}

    cout<<st.top();     //3

    cout<<st.size();    //3

    cout<<st.empty();    //true or false

    stack<int>st1,st2;
    st1.swap(st2);
    //All the operation in stack is O(1)
}







//queue     fifo
void explainqueue(){
    queue<int>q;
    q.push(1);      //{1}
    q.push(2);      //{1,2}
    q.emplace(3);   //(1,2,3)

    q.back()+=5;       //adds 5 to last element in queue 3+5 ->  {1,2,8}

    cout<<q.back();    //prints 8
    cout<<q.front();    //print 1

    q.pop();            //{2,8}
    cout<<q.front();    //prints 2

    //size, swap, empty, same as stack
}








//priority queue    max element stays at the top
//max heap
void explainPQ(){
    priority_queue<int>pq;

    pq.push(5);     //{5}
    pq.push(2);     //{5,2}
    pq.push(8);     //{8,5,2}
    pq.emplace(10); //{10,8,5,2}

    cout<<pq.top();     //10

    pq.pop();           //pops 10

    cout<<pq.top();     //8

    //size, swap, empty functions same as stack

    //Minimum heap (minimum element at the top)

    priority_queue<int,vector<int>, greater<int>pq;
    pq.push(5);     //{5}
    Pq.push(2);     //{2,5}
    pq.emplace(8);  //{2,5,8}

    cout<<pq.top(); //2

    //push-> O(logn), top -> O(1), pop ->O(logn)
}







//set          (it stores everying in sorted order and unique element)
void explainSet(){
    set<int>st;
    st.insert(1);   //{1}
    st.insert(2);   //{1,2}     again 2 won't be stored
    st.insert(2);   //{1,2}
    st.emplace(4);  //(1,2,4)
    st.insert(3);   //(1,2,3,4)     stores 3 in sorted order

    //begin(),end(),rbegin(),rend(),size(),empty() and swap() are same as above

    //{1,2,3,4,,5}
    auto it=st.find(3);     //returns iterator which point to the 3
    auto it=st.find(6);     //returns st.end bcz 6 is not found

    //{1,4,5}
    st.erase(5);        //erase 5 // takes logarithmic time
        //or
    auto it= st.find(3);
    st.erase(it);       //takes constant time

    int cnt = st.count(1);      //return only 1 or 0 bcz of unque 

    //{1,2,3,4,5}
    auto it1=st.find(2);
    auto it2=st.find(4);
    st.erase(it1,it2);    //erase everything between t1 to t2  (not t2) (1,4,5)

    //every thing takes O(logn)
}










//Multiset      it obeys only sorted but not unique
void explainMultiset(){
    multiset<int>ms;
    ms.insert(1);      //{1}
    ms.insert(1);       //{1,1}
    ms.insert(1);       //{1,1,1}

    ms.erase(1);        //all 1's are erased

    int cnt=ms.count(1);    //returns no of 1

    ms.erase(ms.find(1));      //erase a single 1

    ms.erase(ms.find(1),ms.find(1)+2);  //find one and go till two

    //rest all functions are same
}






//unordered set     //stores unique but not in sorted order
void explainUset(){
    unordered_set<int>st;


    //other all the operation are same as set except lower and upper bound (insert, erase....)
    //most of the case time compx is O(1) very very rarely O(n)
}




//maps              //map stores unique key in sorted order
void explainmap(){
    map<int,int>mpp;       // <key,value>   where keys are unique but not value

    map<int,<pair<int,int>>mpp;     //<key,<key,value>>
        //or
    map<pair<int,int>,int>mpp;      //<<key,value>,value>

    map[1]=2;                   //on key 1 store 2
        //or
    mpp.emplace({3,1});         //on key3 storer 1
        //or
    mpp.insert({2,4});          //on key 2 store 4

    mpp({2,3})=10;              //key is 2,4 and value is 10;
    /*{
        {1,2}
        {2,4}
        {3,1}
    }*/

    for(auto it : map){
        cout<<it.first<<" "<<it.second<<endl;
    }
    //{1,2} {2,4} {3,1}
    cout<<mpp[1];       //2 at 1 we r storing 2
    cout<<mpp[5];       //return null or 0

    auto it = map.find(3);
    cout<<*(it).second;

    auto it= mpp.find(5);       //5 doesn't exist so it points to after the map (end)

    //begin(),end(),size(),empty() and swap() are same as above
}








//multimap
void multiMap(){
    //similar to map only the difference is that u can store duplicate keys
}



//Unordered Map
void UnorderedMap(){
    //same as set and unordered_set difference (unique keys but not sorted)
    //it works almost in O(1), very very rare O(n);
}





//algorithms
void extra(){
    sort(a,a+4);
        
    sort(a.begin,a.end);    //for vector

    sort(a+2,a+4);
    
    sort(a,a+n,greater<int>);       //sorting in descending order

    int maxi=   *max_element(a,a+n);
}

//...............................Thankyou...................................













