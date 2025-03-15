#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    int a, b, c, maiorAB, maiorABC;
    
    cin >> a >> b >> c;
    
    maiorAB = (a + b + abs(a - b)) / 2.0;
    maiorABC = (maiorAB + c + abs(c - maiorAB)) / 2.0;
    
    cout << maiorABC << " eh o maior" << endl;
    
    return 0;
}