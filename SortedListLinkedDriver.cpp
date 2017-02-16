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
	while(iter->hasNext())
	{
		CD* cd = iter->next();
		lb->add(cd);
	}

   delete iter;
}

void deleteCDs(ListArray<CD>* list)
{
   ListArrayIterator<CD>* iter = list->iterator();

   //DO THIS  
   //iterate over and delete the cds
   while(iter->hasNext())
   {
	   CD* cd = iter->next();
	   delete cd;
   }




   delete iter;
}

int main(int argc, char* argv[])
{
   ListArray<CD>* cds = CD::readCDs("cds.txt");
   //DO THIS
   //create and test the sorted linked list 
   SortedListLinked<CD>* list = new SortedListLinked<CD>();
   addCDs(cds, list);
   ListArrayIterator<CD>* iter = list->iterator();
   while(iter->hasNext())
   {
	   iter->next()->getItem()->displayCD();
   }
   delete list;
   
   

   return 0;
}
