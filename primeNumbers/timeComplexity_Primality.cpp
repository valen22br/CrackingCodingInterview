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

bool isPrime(int n, int d)
{
    if(n<2)
        return 0;
    if(d == 1)
        return true;
    else 
    {
        if(n % d == 0) 
            return false;
        else
            return isPrime(n, d - 1);
    }
}

int main(){
    int p;
    cin >> p;
    for(int a0 = 0; a0 < p; a0++){
        int n;
        cin >> n;
        if(isPrime(n,n-1))
            cout<<"Prime" << endl;
        else
            cout << "Not Prime" << endl;
        
    }
    return 0;
}
