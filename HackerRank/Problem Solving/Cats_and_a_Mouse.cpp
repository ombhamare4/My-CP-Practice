#include <bits/stdc++.h>

using namespace std;


// Complete the catAndMouse function below.
string catAndMouse(int x, int y, int z) {
    int diff1 = abs(x-z);
    int diff2 = abs(y-z);

    if(diff1>diff2){
        return "Cat B";
    }else if(diff2>diff1){
        return "Cat A";
    }else{
        return "Mouse C";
    }
}


int main()
{


    int q;
    cin >> q;

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string xyz_temp;
        int x, y,z;
        cin>>x>>y>>z;

        string result = catAndMouse(x, y, z);

       cout << result << "\n";
    }


    return 0;
}

