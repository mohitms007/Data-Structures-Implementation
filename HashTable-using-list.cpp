#include<iostream>
#include<list>
#include<bits/stdc++.h>

using namespace std;

class Hashtable {
private:
    int buckets;
    list<int> *table;
public:
    Hashtable(int b) {
        buckets = b;
        table = new list<int>[buckets];
    }

    void insert(int d, string chabi);

    int hash(string key);

    void print();
};

int Hashtable::hash(string key) {
    int ans = 0;
    for (int i = 0; i < key.length(); i++) {
        ans = (ans + int(key[i]) * i) % buckets;
    }
    return ans;
}

void Hashtable::insert(int d, string key) {
    int bucket = this->hash(key);
    table[bucket].push_back(d);
}

void Hashtable::print() {
    for (int i = 0; i < buckets; i++) {
        cout << "| Bucket " << i << "|";
        for (auto j : table[i]) {
            cout << "-> | " << j << "|";
        }
        cout << endl;
    }
}

int main() {
    Hashtable ht(8);
    srand(2);

    ht.insert(rand() % 100, "he");
    ht.insert(rand() % 100, "hellfdafasdfasdfaso");
    ht.insert(rand() % 100, "helloasdfad");
    ht.insert(rand() % 100, "hellofdaf");
    ht.insert(rand() % 100, "hellos");

    ht.print();
    return 0;
}
