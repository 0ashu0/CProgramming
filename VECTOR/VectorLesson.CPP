#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //Format: vector<DataType> nameOfVector
    //myVector.push_back(value) ==>> adds an element to the end of vector
    //myVector.at(index) ==> return element at specified index number
    //myVector.size() ==> returns unsigned int
    //myVector.begin() ==> reads vector from first element (index 0)
    //myVector.insert(myVector.begin() + integer, new value) ==>> adds element BEFORE specified index number
	//myVector.erase(myVector.begin() + integer) ==> removes element AT specified index number
	//myVector.clear() ==> removes all element in vector
	//myVector.empty() ==> returns boolean if vector is empty

	vector<int> myVector;		// unsigned long int
	myVector.push_back(3);
	myVector.push_back(5);
	myVector.push_back(-1);
	myVector.push_back(4294967296);
	myVector.push_back(454646);
	myVector.push_back(3);

	cout<<"vector: ";
	for(unsigned int i=0; i<myVector.size(); i++)
	{
		cout<<myVector[i]<<" ";
	}

	cout<<endl;

	myVector.insert(myVector.begin(), 5);

	cout<<"vector: ";
	for(unsigned int i=0; i<myVector.size(); i++)
	{
		cout<<myVector[i]<<" ";
	}

	cout<<endl;

	myVector.erase(myVector.begin() + 4);

	cout<<"vector: ";
	for(unsigned int i=0; i<myVector.size(); i++)
	{
		cout<<myVector[i]<<" ";
	}

	cout<<endl;

	cout<<myVector.empty()<<endl;
	myVector.clear();
	cout<<myVector.empty();
}
