#include <iostream>
#include <algorithm>
using namespace std;


class Heap{
    private:
    int arr[100];
    int size;
    
    public:

        Heap(){
        arr[0] = -1;
        size = 0;
    }

    void insert(int val){
        size++;
        int index = size;
        arr[index] = val;

        while(index>1){
        int parent = index/2;

            if(arr[index]>arr[parent]){
                swap(arr[index],arr[parent]);
                index = parent;
            }else return;
        }
    }

    void deleteFromheap(){
        if(size==0){
            cout<<"Nothing to delete"<<endl;
            return;
        }
        arr[1] = arr[size];
        size--;

        int i = 1;
        while(i<size){
            int leftInd = i*2;
            int rightInd = (i*2)+1;

            if(arr[i] < arr[leftInd] && leftInd <= size){

                swap(arr[i],arr[leftInd]);
                i = leftInd;

            }
            else if(arr[i] < arr[rightInd] && rightInd <= size){
                swap(arr[rightInd],arr[i]);
                i = rightInd;
            }
            else{
                return ;
            }
        }
    }

    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

void heapify(int arr[],int n, int i){

    int largest = i;
    int leftInd = 2*i;
    int rightInd = (2*i)+1;

    if(leftInd <= n && arr[leftInd] > arr[largest]) largest = leftInd;

    if(rightInd <= n && arr[rightInd] > arr[largest]) largest = rightInd;

    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}

void heapSort(int arr[],int n){
    
    int size = n-1;

    while(size>=1){
    swap(arr[1],arr[size--]);

    heapify(arr,size,1);
    }
}

int main(){
    Heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    h.deleteFromheap();
    h.print();

    int arr[6] = {-1 ,54, 53, 55, 52, 50};

    for(int i=6/2;i>0;i--)    heapify(arr,6,i);

    for(int i=1;i<6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    heapSort(arr,6);

    for(int i=1;i<6;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}