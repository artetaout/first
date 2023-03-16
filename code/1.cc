#include<bits/stdc++.h>

using namespace std;

int main() {

    cout << "hello" << endl;
    stack<int> st;

    st.push(1);
    st.push(2);

    cout << st.top() << endl;

    vector<int> list;
    list.push_back(0);
    list.push_back(1);
    for (int i = 0; i < list.size(); i++) {
        cout << list[i] << endl;
    }
    return 0;
}