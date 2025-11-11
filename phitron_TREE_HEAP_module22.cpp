#include<bits/stdc++.h>
using namespace std;

void insert_MaxHeap(vector<int> &heap, int val)
{
    heap.push_back(val);
    int child_idx=heap.size()-1;

    while(child_idx>0)
    {
        int parent_idx = (child_idx-1)/2;
        if(heap[parent_idx]<heap[child_idx])
        {
            swap(heap[parent_idx], heap[child_idx]);
            child_idx=parent_idx;
        }
        else
        {
            break;
        }
    }

}

void delete_maxHeap(vector<int> &heap)
{
    heap[0]=heap.back();
    heap.pop_back();

    int curIdx=0;
    int swapIdx, leftIdx, rightIdx;
    while(1)
    {
        leftIdx = (curIdx*2)+1;
        rightIdx = curIdx*2 +2;

        if(leftIdx>=heap.size())
        {
            break;
        }
        else if(leftIdx<(heap.size()) && rightIdx>=heap.size())
        {
            swapIdx = leftIdx;
        }
        else
        {
            if(heap[leftIdx]>heap[rightIdx])
            {
                swapIdx = leftIdx;
            }
            else
            {
                swapIdx = rightIdx;
            }
        }

        if(heap[curIdx]<heap[swapIdx])
        {
            swap(heap[curIdx], heap[swapIdx]);
            curIdx = swapIdx;
        }
        else
        {
            break;
        }
    }
}

int main()
{
    vector<int>heap;

    int val;
    while(1)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_MaxHeap(heap, val);
    }

    

    for(int i: heap)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    delete_maxHeap(heap);
    for(int i: heap)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    delete_maxHeap(heap);
    for(int i: heap)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    
    return 0;
}