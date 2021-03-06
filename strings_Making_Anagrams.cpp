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

int number_needed(string a, string b) {
    int count = 0;
    vector<int> charCount(26,0);
    for(int i = 0; i < a.length(); i++)
    {
        //cout << a[i] << "=> " << 'a' << " teste"<< endl;
        ++charCount[a[i] - 'a'];
    }
    for(int i = 0; i < b.length(); i++)
    {
        --charCount[b[i] - 'a'];
    }
    for(int i = 0; i < charCount.size(); i++)
        count+= abs(charCount[i]);
    return count;
}

int main(){
    string a;
    cin >> a;
    //getline(cin, a);
    string b;
    cin >> b;
    //getline(cin, b);
    cout << number_needed(a, b) << endl;
    return 0;
}
