#ifndef ALGS_H
#define ALGS_H

#include <algorithm>
#include <queue>
using std::swap;


 
  
template<typename T>
void heapsort(std::vector<T>& V)
{
    std::priority_queue<int> A;
//    A.push()

   while (A.empty())
   {
       std::cout << A.top() << ' ';
       A.pop();
    }
    std::cout << '\n';


    //return 0;
	

}



bool are_anagrams(std::string a, std::string b)
{
    int c = a.length();
    int d = b.length();

    if(c !=d)
        return false;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for (int i = 0; i <c; ++i)
        if(a[i] != b[i])
            return false;


            return true;







}


#endif
