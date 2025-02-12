#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int start[] = {1,3,0,5,8,5};
  int finish[] = {2,4,6,7,9,9};
  int n = sizeof(start)/sizeof(start[0]);
  int count = 0;
  int curr_time =0;
  int i  = 0;
  while(i<n){
    if(start[i]>curr_time){
      count++;
      curr_time = finish[i];
    }
    i++;
  }
  cout<<count;
}