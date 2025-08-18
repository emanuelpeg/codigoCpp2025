#include <iostream>
#include <map>
#include <numeric>

using namespace std;

double getTotal(double a, pair<string, double> elemento) {
    return a + elemento.second;
}

int main()
{
    map<string, double> bienes;
    bienes.insert(make_pair("ERT", 2.52));
    bienes.insert(make_pair("ART", 1.90));
    bienes.insert(make_pair("JRT", 6.55));
    bienes.insert(make_pair("RRT", 8.45));

    string key = "ART";
    if (bienes.count(key) > 0) {
        cout << bienes[key] << endl;
    } else {
        cout << "no existe " << key << endl;
    }

    auto total = accumulate(bienes.begin(),
                            bienes.end(),
                            0.0,
     getTotal);
    cout << total << endl;
    return 0;
}
