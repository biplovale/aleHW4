#include <iostream>
#include <vector>
#include "IntWrapper.h"
#include "StringWrapper.h"
using namespace std;

//sort the vector using isLessThan() (TimSort)
const vector<IComparable*>& sort(vector<IComparable*>& list)
{
    IComparable* temp;
    for(int i =1; i < list.size(); i++)
    {
        for(int j = 0; j < list.size() - 1; j++)
        {
            if(list[j+1]->isLessThan(*list[j]))
            {
                temp = list[j+1];
                list[j] = list[j+1];
                list[j+1] = temp;
            }
        }
    }
    return list;
}

//verifies the sort
bool verifySort(const vector<IComparable>& list)
{
    //Dynamically cast each element in the vector
    bool isSorted = 0;
    for(int i = 0; i < list.size(), i++)
}

int main() {
    vector<IComparable*> intVec;

    //generate 100 random int values between 0 to 10
    for(int i = 0; i < 10; i++)
    {
        int x = rand() % 1001;
        IntWrapper* ptrInt = new IntWrapper(x);
        cout << ptrInt->getInteger() << " ";
        intVec.push_back(ptrInt);
    }

    sort(intVec);

    cout << endl;
    for(int i = 0; i < 10; i++)
    {
        cout << dynamic_cast<IntWrapper*>(intVec[i])->getInteger() << " ";
    }

    return 0;
}
