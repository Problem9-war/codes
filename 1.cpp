// Given a positive integer n, count the number of digits in n that divide n evenly (i.e., without leaving a remainder). Return the total number of such digits.



#include<iostream>
#include<vector>
using namespace std;
class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        int or_no = n;
        vector <int> ele;
        int count =0;
        while (n>0)
        {
            int last_digit = n%10;
            ele.push_back(last_digit);
            n = n/10 ;
            
        }
        for (auto i=ele.begin();i!=ele.end();i++)
        {
            int option = *(i);
            if (option!=0)
            {if (or_no%option==0)
            {
                count++;
            }
            }
            
        }
        return count;
    }
};