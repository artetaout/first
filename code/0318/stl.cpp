#include<bits/stdc++.h>
using namespace std;

int main() {
    int hello = 2;
    char world[] = "asdsads";
    int world2[] = {1, 2, 4, 5};
    vector<int> list;

    for (int i = 0; i < 100; i++) {
        list.push_back(i);
    }

    for (int i = 0; i < list.size(); i++) {
        printf("%d\n", list[i]);
    }

    stack<int> st;
    st.push(0);
    st.push(1);

    printf("st.top() = %d\n", st.top());

    queue<int> q;

    q.push(1);
    q.push(2);

    printf("q.front() = %d, q.back() = %d\n", q.front(), q.back());

    priority_queue<int,vector<int>,less<int>> heap;
    heap.push(1);
    heap.push(3);
    heap.push(-1);

    printf("top = %d\n", heap.top());


    sort(list.begin(), list.end());
    for (int i = 0; i < list.size(); i++) {
        printf("%d ", list[i]);
    }
    printf("\n");
    reverse(list.begin(), list.end());
    for (int i = 0; i < list.size(); i++) {
        printf("%d ", list[i]);
    }

    // map<key,value>
    // map<string,int> m;
    unordered_map<string,int> m;
    m["politics"] = 60;
    m["english"] = 66;
    m["math"] = 120;
    m["data_structure"] = 110;
    
    printf("\n");
    int total = 0;
    for (auto &e : m) {
        string k = e.first;
        int v = m[k];
        printf("k = %s, v = %d\n", k.c_str(), v);
        total += e.second;
    }

    printf("\ntotal = %d\n", total);

    set<int> s;
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);

    return 0;
}