//How much Scholarship
/*
Problem
The ZCO Scholarship Contest has just finished, and you finish with a rank of RR.
You know that Rank 11 to Rank 5050 will get 100 \%100% scholarship on the ZCO
exam fee and Rank 5151 to Rank 100100 will get 50 \%50% percentage scholarship on
the ZCO exam fee. The rest do not get any scholarship.
What percentage of scholarship will you get ?
Input
Input consist of single line of input containing one integer RR.
Output
Output a single line containing one integer — the percentage of scholarship you will get.
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array
long int n,a,b,c,k,t,temp,count=0;



int main(){

    cin>>n;
    if(n>=1 && n<=50){
        cout<<"100"<<endl;
    }else if(n>50 && n<=100){
        cout<<"50"<<endl;
    }else{
        cout<<'0';
    }

   	return 0;
}