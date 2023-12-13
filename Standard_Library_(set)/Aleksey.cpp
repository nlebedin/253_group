#include <iostream>
#include <sstream>
#include <set>
using namespace std;

int main()
{
set<int> s;

string st = "2 8 1 56 8 2 1 77";
stringstream str;
 
str << st;

int x;
while (str>>x)
   s.insert(x);
 
for (auto y: s) 
cout << y <<" ";

cout << endl;

}

template <class T>
std::set<T> inter(std::set<T> a, std::set<T> b)
{
    std::set<T> c;
    typename std::set<T>::iterator i;
    for (i = a.begin(); i != a.end(); ++i)
    {
        if (b.count(*i)) c.insert(*i);
    }
    return c;
}

int main()
{
    int n;
    std::set <int> a;
    
    while(std::cin >> n)
    {
        a.insert(n);
    }
    
    std::set <int> b;
    while(std::cin >> n)
    {
        b.insert(n);
    }
    
    std::set<int> c;
    c = inter(a, b);
    
    std::set <int>::iterator i;
    for(i = c.begin(); i != c.end(); ++i)
        {
           std::cout << *i << " ";
        }
return EXIT_SUCCESS;    
}

int main()
{
set<int> s;
set<int> q;
set<int> l;

int x;

while (std::cin)
    {
        std::cin >> x;
        if (s.count(x) && !q.count(x))  q.insert(x);
        s.insert(x);
    }
    
    std::set <int>::iterator i;
        for(i = q.begin(); i != q.end(); ++i)
            {
               std::cout << *i << " ";
            }
        
    std::cout << std::endl;

}