#include "SortedListLinked.h"
#include "CD.h"
using CSC2110::CD;
#include "ListArray.h"
using CSC2110::ListArray;
#include "ListArrayIterator.h"
using CSC2110::ListArrayIterator;
#include <iostream>
using namespace std;

void addCDs(ListArray<CD>* list, SortedListLinked<CD>* lb)
{
   ListArrayIterator<CD>* iter = list->iterator();

   //DO THIS
   //iterate over and add the cds to the list box (use lb->addItem)




   delete iter;
}

void deleteCDs(ListArray<CD>* list)
{
   ListArrayIterator<CD>* iter = list->iterator();

   //DO THIS  
   //iterate over and delete the cds




   delete iter;
}

int main(int argc, char* argv[])
{
   ListArray<CD>* cds = CD::readCDs("cds.txt");
   //DO THIS
   //create and test the sorted linked list 
	addCDs(cds, SortedListLinked<CD>*sorted = new SortedListLinked<CD>());
	
	ListArrayIterator<CD>* iter = sorted->iterator();
	
	while(iter->hasNext())
	{
		iter->next()->display();
	}
	delete sorted;
	
   return 0;
}
















