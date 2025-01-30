#include<iostream>
#include<vector>


using namespace  std;

int uniqueElementSortedArray(vector<int>& vec){

      int s=0;
      int e=vec.size()-1;
      

      while(s<=e){

           if(e==s){
 
               return vec[s];

           }

           int mid=s+(e-s)/2;

           if(vec[mid] != vec[mid-1] && vec[mid]!=vec[mid+1]){
              return vec[mid];
           }
           if((vec[mid]==vec[mid-1] && mid%2!=0)){
               s=mid+1;
           }
           else if(vec[mid]==vec[mid+1] && mid%2==0){
                 s=mid-1;
           }
           else{
                if(vec[mid]==vec[mid-1] && mid%2==0){
                    e=mid-2;
                }
                else{
                    e=mid-1;
                }
           }

      
           
      }

      return -1;

}

int main (){

    vector<int> vec={1,1,2,2,3,3,4,4,5};
     vector<int> vec2={1,1,2,3,3,4,4,5};



   cout<<"Unique is : "<<uniqueElementSortedArray(vec)<<endl;
   cout<<"Unique is : "<<uniqueElementSortedArray(vec2)<<endl;




    return 0;
}