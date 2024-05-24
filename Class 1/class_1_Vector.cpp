                           // Vector //
                           
                           
/* 
*Arry & Vector are also data structure.
*Array==Vector. 
*vector is slow & its dynamic But array is static.
*Array need size but vector doesnt 
*Array works with index [0-n] But Vector work with [end pointer].
*Vector stores Element by Push Back of end pointer.(push back element & end pointer ++)
 ex v=2, v[0]=2 v=3 v[1]=3 & end ponter.


c++ has Global header file : #include<bits/stdc++.h>
                             using namesapace std;
Policy based data structure has difftrent header file.
*/

#include<bits/stdc++.h>
using namespace std;
int main(){

    ///int a[4];
    vector<int>v;

    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(6);

    cout<< "The 3rd index's value=";
    cout<< v[3]<< endl;

 //Accessing index in vector
     v[2]=10;
     cout<<"Update value of index 2="<< v[2]<< endl;

// Vector size:
     cout<<"The vectors size="<< v.size()<< endl;

     for(int i=0;i<v.size();i++){
        cout <<v[i]<<" "<<endl;

     }
//lecture 1:33 mnt done
}