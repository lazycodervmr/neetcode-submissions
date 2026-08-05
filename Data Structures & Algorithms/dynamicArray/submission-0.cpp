class DynamicArray {
private: 
            int* arr;
            int cap;
            int size;
public:
    DynamicArray(int capacity) {
       this->cap = capacity;
       this->size = 0; 
       this->arr = new int[capacity];
    }

    int get(int i) {
        if(i>=0 && i<size){
            return arr[i];
        }
        throw out_of_range("Out of bound");
    }

    void set(int i, int n) {
        if(i<size){
            arr[i] = n;
        }
    }

    void pushback(int n) {
        if(size == cap){
            resize();
        }
            arr[size] = n;
            size++;
    }

    int popback() {
        if(size > 0){
        size--;
        return arr[size];
        }
        throw out_of_range("Size is zero");

    }

    void resize() {
        int new_size = (cap == 0)? 1 : cap*2;
        int* newarr = new int[new_size];
        for(int i = 0 ;  i < size; i++){
            newarr[i] = arr[i];
        }
        delete[] arr;
        arr = newarr;
        cap *= 2;

    }

    int getSize() {
        return size;

    }

    int getCapacity() {
        return cap;
    }
};
