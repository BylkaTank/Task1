#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n , x , val;
    cout << "Input vector size:";
    cin >> n;
    vector <int> vec(n);
    cout << "Input numbers:";
    for(int i = 0; i < vec.size(); i++){
        cin >> vec[i];
    }
    cout << "Input number to delete:";
    cin >> x;
    for(int i = 0; i < vec.size(); i++){
        if (vec[i] == x){
            for (int j = i; j < vec.size() - 1; j++) {
                swap(vec[j], vec[j + 1]);
            }
            vec.pop_back();
            i--;
        }
    }

    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i];
    }
}

