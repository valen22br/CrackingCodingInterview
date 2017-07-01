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

stack<int> balanced;


bool is_balanced(string expression) {
   int values[126];
    for (int i = 0; i < 126; i++)
    {
        values[i] = 0;
    }
    
    
    for(int i = 0; i < expression.length(); i++)
    {
        balanced.push(expression[i]);
        
    }
    
    //cout << balanced.size() << endl;
    bool isValid = 0;
    int topResult1, topResult2 = 0;
    int stackMiddleSize = balanced.size() / 2;
    cout << "stack: " << endl;
   while(balanced.size() != 0)
   {
       
       topResult1 = balanced.top();
       balanced.pop();
       topResult2 = balanced.top();
       balanced.pop();
      
       
       cout << topResult1 << " => "<< topResult1 / topResult2 <<   endl;
       cout << topResult2 << endl;
       
       /*
       
       if(topResult1 <= topResult2 && stackMiddleSize >=0)
           cout << topResult1 << " <= " << topResult2 << " topResult1 <= topResult2 " << endl;
           //return 0;
       
       if(topResult1 > topResult2 && stackMiddleSize <0)
           cout << "topResult1 > topResult2 " << endl;
           //return 0;

       stackMiddleSize--;       
       
       //balanced.pop();
       
       */
   }
    
    if(balanced.size() %2 == 0)
        return 0;
    

    

    

    
    
    return 0;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string expression;
        cin >> expression;
        bool answer = is_balanced(expression);
        if(answer)
            cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
