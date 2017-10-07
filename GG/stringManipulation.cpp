// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include<queue>
#include<iostream>
#include<cstdlib>
#include<string>
#include<cstdio>
string solution(string &S, int K) {
    // write your code in C++14 (g++ 6.2.0)
    string ss = "";
    queue <char> qdash;
    queue <char> qchars;
    
    for(unsigned int i = 0; i < S.length(); i++)
    {
        if(S[i] == '-')
        {
            qdash.push(S[i]);
        }
        else
        {
            qchars.push(S[i]);   
        }
            
        
    }
    
    /*cout << "K Size:  " << K << endl;
    cout << "Dashs:  " <<   qdash.size() << endl;
    cout << "chars:  " <<   qchars.size() << endl;
    */
   if(K == 1)
   {
       while(!qchars.empty())
       {
           ss += static_cast<char>(toupper(qchars.front()));
           qchars.pop();
       }
   }
   
   else if(qchars.size() % K == 0)
   {
     int groups = qchars.size()/K;
     //cout << "zero" << endl;   
     int count = 0;
     while(!qchars.empty())
       {
           count ++;
           ss += static_cast<char>(toupper(qchars.front()));
           qchars.pop();
           if(count == K)
           {
               groups --;
               count = 0;
               if(groups > 0)
               {
                    ss += '-';
               }
           }
       }
     
   }
   else if(qchars.size() % K != 0)
   {
        int firstGroupLeght = qchars.size()%K;
        for (int i = firstGroupLeght; i > 0; i--)
        {
            ss += static_cast<char>(toupper(qchars.front()));
            qchars.pop();
            
        }
        ss += '-';
        
        int groups = qchars.size()/K;
         //cout << "zero" << endl;   
         int count = 0;
         while(!qchars.empty())
           {
               count ++;
               ss += static_cast<char>(toupper(qchars.front()));
               qchars.pop();
               if(count == K)
               {
                   groups --;
                   count = 0;
                   if(groups > 0)
                   {
                        ss += '-';
                   }
               }
           }
   }
    
    return ss;
}
