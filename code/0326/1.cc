#include<bits/stdc++.h>
using namespace std;

/*
在list中找e
如果能找到，返回下标
如果找不到，返回-1
*/
int locate(vector<int> list, int e) {
    for (int i = 0; i < list.size(); i++) {
        if (list[i] == e) {
            return i;
        }
    }
    return -1;
}

/**
判断index在不在list范围内， 如果在，插入，如果不在，直接返回
插入：
    先把index之后的元素，都后移一位
    list[index] = e
*/
void insert(vector<int> &list, int index, int e) {
    if (index < 0 || index > list.size())
        return;
    
    // 0 <= index && index < list.size()
    // index == list.size()

    if (index == list.size()) {
        list.push_back(e);
    } else {
        list.push_back(65457);
        for (int i = list.size(); i >= index + 1; i--) {
            list[i] = list[i - 1];
        }
        list[index] = e;
    }
}

// index有效，则删除，无效直接返回
// 有效,左移[index,list.size() - 2]
void erase(vector<int> &list, int index) {
    if (index < 0 || index >= list.size())
        return;
    
    for (int i = index; i <= list.size() - 2; i++) {
        list[i] = list[i + 1];
    }

    list.pop_back();
} 

struct student {
    string name;
    short age;
    student(int age, string name) {
        this->age = age;
        this->name = name;
    }
};

int main() {
    vector<int> list;

    for (int i = 0; i < 10; i++) {
        list.push_back(i);
    }



    printf("%d\n", list[50]);


    for (int i = list.size() - 1; i >= 0; i--) {
        printf("%d ", list[i]);
    }
    printf("\n");

    printf("locate : %d\n", locate(list, 999));
    for (int i = 0; i < list.size(); i++) {
        printf("index = %d, value = %d\n", i, list[i]);
    }
    printf("\n");
    insert(list, 6, 15493156);
    for (int i = 0; i < list.size(); i++) {
        printf("index = %d, value = %d\n", i, list[i]);
    }
    erase(list, 7);
    printf("\n");
    for (int i = 0; i < list.size(); i++) {
        printf("index = %d, value = %d\n", i, list[i]);
    }


    vector<student> studentList;
    for (int i = 0; i < 10; i++) {
        studentList.push_back(student(i, "xjtu"));
    }
    for (int i = 0; i < studentList.size(); i++) {
        printf("%x\n", &studentList[i]);
    }
    
    return 0;
}