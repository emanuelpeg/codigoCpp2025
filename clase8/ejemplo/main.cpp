#include <iostream>
#include <vector>

using namespace std;

template<class T>
T mayor(T a, T b) {
   return (a > b) ? a : b;
}

void fx() {
    throw string("error");
}

template<class T>
T mayor(vector<T> vec) {
   if (vec.empty()) {
       throw string("error el vector vacio");
   } else {
       T max = vec.front();
       for(auto i = 0; i < vec.size(); i++){
           if (max < vec[i])
               max = vec[i];
       }
       return max;
   }
}

int main()
{
    vector<int> vec;
    vec.push_back(2);
    vec.push_back(5);
    vec.push_back(4);

cout << mayor(vec) << endl;

    return 0;
}
