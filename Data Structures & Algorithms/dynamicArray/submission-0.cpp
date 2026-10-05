class DynamicArray {
public:
    std::vector <int> nums;
    int capacity;

    DynamicArray(int capacity) {
        this->capacity=capacity;
        nums.reserve(capacity);

    }

    int get(int i) {
        return nums[i];

    }

    void set(int i, int n) {
        nums[i]=n;


    }

    void pushback(int n) {
        if(nums.size()==capacity){
            resize();
        }
        nums.push_back(n);

    }

    int popback() {
        int last= nums.back();
        nums.pop_back();
        return last;

    }

    void resize() {
        capacity*=2;
        nums.reserve(capacity);

    }

    int getSize() {
        return nums.size();

    }

    int getCapacity() {
        return capacity;

    }
};
