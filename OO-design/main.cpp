#include <iostream>
#include <vector>
#include "IntWrapper.h"
#include "StringWrapper.h"
using namespace std;

//sort the vector using isLessThan() (TimSort)
//const vector<IComparable*>&
 void sort(vector<IComparable*>& list)
{
    int left = 0;
    int mid = list.size() / 2;
    int right = list.size() - 1;
    auto const subVectorOne = mid - left + 1;
    auto const subVectorTwo = right - mid;

    // Create temp arrays
    vector<IComparable*> leftVector = vector<IComparable*>(subVectorOne),
            rightVector = vector<IComparable*>(subVectorTwo);

    // Copy data to temp arrays leftArray[] and rightArray[]
    for (auto i = 0; i < subVectorOne; i++)
        leftVector.push_back(list[left + i]);
    for (auto j = 0; j < subVectorTwo; j++)
        rightVector.push_back(list[mid + 1 + j]);

    auto indexOfSubVectorOne = 0, // Initial index of first sub-array
    indexOfSubVectorTwo = 0; // Initial index of second sub-array
    int indexOfMergedVector = left; // Initial index of merged array

    // Merge the temp arrays back into array[left..right]
//    IComparable* pt = leftVector[indexOfSubVectorOne];
//    cout << typeid(leftVector).name();
    while (indexOfSubVectorOne < subVectorOne && indexOfSubVectorTwo < subVectorTwo) {
        if (leftVector[indexOfSubVectorOne]->isLessThan(*rightVector[indexOfSubVectorTwo])) {
            list[indexOfMergedVector] = leftVector[indexOfSubVectorOne];
            indexOfSubVectorOne++;
        } else {
            list[indexOfMergedVector] = rightVector[indexOfSubVectorTwo];
            indexOfSubVectorTwo++;
        }
        indexOfMergedVector++;
    }
    // Copy the remaining elements of
    // left[], if there are any
    while (indexOfSubVectorOne < subVectorOne) {
        list[indexOfMergedVector] = leftVector[indexOfSubVectorOne];
        indexOfSubVectorOne++;
        indexOfMergedVector++;
    }
    // Copy the remaining elements of
    // right[], if there are any
    while (indexOfSubVectorTwo < subVectorTwo) {
        list[indexOfMergedVector] = rightVector[indexOfSubVectorTwo];
        indexOfSubVectorTwo++;
        indexOfMergedVector++;
    }

}

//verifies the sort
//bool verifySort(const vector<IComparable>& list)
//{
//    //Dynamically cast each element in the vector
//    if()
//    bool isSorted = 0;
//    for(int i = 0; i < list.size(), i++)
//    {
//
//        if (list[i].isLessThan(list[i+1]))
//    }
//}

int main() {
    vector<IComparable*> intVec;

//    IntWrapper* x = new IntWrapper(100);
//    IntWrapper* y = new IntWrapper(200);
//    cout << x->isLessThan(*y);

    //generate 100 random int values between 0 to 10
    for(int i = 0; i < 10; i++)
    {
        int x = rand() % 1001;
        IntWrapper* ptrInt = new IntWrapper(x);
        cout << ptrInt->getInteger() << " ";
        intVec.push_back(ptrInt);
    }

    sort(intVec);

//    for(int i = 0; i < 10; i++)
//    {
//        cout << dynamic_cast<IntWrapper*>[i];
//    }

    return 0;
}
