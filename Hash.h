#pragma once
#ifndef Hash_h
#define Hash_h
#include <list>

class Hash{
	private:
		list<int> *table;
		int total_persons;


		int getHash(int key){
			return key % total_persons;
		}
	public:
		Hash(int n){
			total_persons = n;
			table = new list<int>[total_persons];
		}

		void insertPerson(int key){
			table[getHash(key)i].push_back(key);
		}
}

