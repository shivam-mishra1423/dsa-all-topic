///////max heap
#include<iostream>
using namespace std;

class maxheap{

int *arr;////to hme array k dhora implement karna hai
int size;  ////total elements in heap
int total_size;////total size of array

public:
    maxheap(int n){///n yaha size hai

    arr=new int[n];////means array ka size jitna hai
    size = 0;
    total_size = n;

    };

////insert into the array
void insert(int value)
{
    /////is heap size is avaliable or not
    if(size==total_size){
       cout<<"heap overflow\n";
       return;
    }

    //////heap me agar space ho to  hm insert kar sakte hai
    ///or insert last me kar sakte hai

    arr[size] = value;///value ko dal dege or size ko increased kar dege
    int index = size;
    size++;/////size ko ekk se badh dete hai


    ////comparing it with parent

    while(index>0&&arr[(index-1)/2]<arr[index]){///yaha parent se compare kar rhe hai
        swap(arr[index],arr[(index-1)/2]);
        index = (index-1)/2;

    }
    cout<<arr[index]<<"is inserted into the heap "<<endl;
}

void print(){

for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}

///////////hepify function

void heapify(int index)
{
    int largest= index;/////jo larges h index k value ko store karega
    int left = 2*index+1;/////for the left child
    int right = 2*index+2;////right child

    ////isss tino me jo sabse bara index hoga usse ye largest contain karega  1 index 2 parent left child, 3 right child

    ////compare left side
    if(left<size&&arr[left]>arr[largest]){////size&&arr[left]  ye islye likhe hai ki may be left child exiest hi na kare
        largest=left;
    }
    ////comparing the right side
    if(right<size&&arr[right]>arr[largest]){
        largest = right;
    }


    ////two condition
    if(largest!=index){///means woh kisi or se replace ho chuka hai  means largest index k equal nhi hai
        swap(arr[index],arr[largest]);////means swap kara dege parent ko large se
        heapify(largest);///hepify ko apply lar dege or largest ko uske andar bhaj dege
    }
}





void Delete(){//hame pata hai ki hame top wale element ko delete karna hai

if(size==0)
{
    cout<<"heap underflow "<<endl;
    return;
}

cout<<arr[0]<<" deleted from the heap"<<endl;
arr[0]=arr[size-1];/////jp last element hai usse replace kar dege
size--;///size ko ekk se kam kar diye after deletion


if(size==0){
    return;
}

heapify(0);////after delete element ko correct position pe le k jow to child se compare krenge
///hipify function apna child se compare karega jb tak child correct position pe na phuch jie
//jb children na dikhe to stop ho jiega
}


};
int main()
{
    maxheap h1(6);   ///yaha h1 object hai or iska size 6 hai

    h1.insert(4);
    h1.insert(14);
    h1.insert(11);
h1.Delete();
h1.Delete();
    h1.print();
}
