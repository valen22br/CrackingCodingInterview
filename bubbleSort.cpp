#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

void swap(vector<int> &b, int i, int j)
{
    int temp = b[i];
    b[i] = b[j];
    b[j] = temp;
}

void bubbleSort(vector<int>b){
    int count = 0;
    while(!is_sorted(b.begin(), b.end()))
    {
        for(int i = 0; i < b.size()-1; i++)
        {
            if(b[i] > b[i+1])
            {
                swap(b,i,i+1);
                count++;
            }
        }
     }
    cout << "Array is sorted in "<< count << " swaps."<<  endl;
    cout << "First Element: "<< b[0] << endl;
    cout << "Last Element: "<< b[b.size()-1] << endl;
}



int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    bubbleSort(a);
    return 0;
}
