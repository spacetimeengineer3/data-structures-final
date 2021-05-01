#pragma once
#ifndef HASH_H
#define HASH_H
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

		void onScenePerson(int key){
			table[getHash(key)i].push_back(key);
		}
		void exitScenePerson(int key){
			int x = getHash(key);

			list<int>::iterator i;
			for (i = table[x].being(); i !- table[x].end i++){
				if( *i == key)
					break;
			}

			if(i != table[x].end())
				table[x].erase(i);

		}
		


}

