#include <iostream>
#include <string>

class HashTable{
public:
    static const int size=11; // initial size of hash table is prime to help with collision resolution
    int slots[size]; // list to hold key items
    std::string data[size]; // list to hold data values

    int hashfunction(int key) { // implements remainder method
        return key%size;
    }

    // Computes original hashvalue, and if slot is
    // not empty iterates until empty slot is found
    int rehash(int oldhash) {
        return (oldhash+1)%size;
    }

    // Function that assumes there will eventually be
    // an empty slot unless the key is alread present in the slot
    void put(int key, std::string val){
        int hashvalue = hashfunction(key);
        int count = 0;

        if (data[hashvalue]=="") {
            slots[hashvalue] = key;
            data[hashvalue] = val;
        } else {
            if (slots[hashvalue] == key) {
                data[hashvalue] = val;
            } else {
                int nextslot = rehash(hashvalue);

                while (data[nextslot]!="" && slots[nextslot] != key) {
                    nextslot = rehash(nextslot);

                    count++;
                    if (count>size) {
                        std::cout<<"TABLE FULL"<<std::endl;
                        return;
                    }
                }
                if (data[nextslot]=="") {
                    slots[nextslot]=key;
                    data[nextslot]=val;
                } else {
                    data[nextslot] = val;
                }
            }
        }
    }

    // computes the initial hash value
    // if value is not in the initial slot, uses
    // rehash to locate the next position
    std::string get(int key) {
        int startslot = hashfunction(key);

        std::string val;
        bool stop=false;
        bool found=false;
        int position = startslot;
        while(data[position]!="" && !found && !stop) {
            if (slots[position]==key) {
                found = true;
                val = data[position];
            } else {
                position=rehash(position);
                if (position==startslot) {
                    stop=true;
                }
            }

        }
        return val;
    }

    friend std::ostream& operator<<(std::ostream& stream, HashTable& hash);
};

std::ostream& operator<<(std::ostream& stream, HashTable& hash) {
    for (int i=0; i<hash.size; i++) {
        stream<<hash.slots[i]<<": "<<hash.data[i]<<std::endl;
    }

    return stream;
}

int main() {

    HashTable h;

    h.put(54, "cat");
    h.put(26, "dog");
    h.put(93, "lion");
    h.put(17, "tiger");
    h.put(77, "bird");
    h.put(31, "cow");
    h.put(44, "goat");
    h.put(55, "pig");
    h.put(20, "chicken");
    std::cout<<h<<std::endl;

    h.put(20,"chicken");
    h.put(17,"tiger");
    h.put(20,"duck");
    std::cout<<h.get(20)<<std::endl;
    std::cout<<h.get(99)<<std::endl;
    std::cout<<h<<std::endl;

    std::cout << "Hello, World!" << std::endl;
    return 0;
}