#include <iostream>
#include<vector>
//#include "Boot.h"
//#include "People.h"
using namespace std;
//Use '_' instead of '-'
//
class Firefighter{
	private:

	public:
		string name;
		string lastLoc;
		Firefighter(string first, string last, vector<string> &all){
			name = first + " " + last;
			all.push_back(name);
		}
		void move(vector<string> &locaiton){
			locaiton.push_back(name);
		}
			
			
};

void listAll(vector<string> &location){
for (int i = 0; i < location.size(); i++){
		cout << location[i] <<  endl;
}

}
int main(){
	cout << "Hello Commander!" <<endl;
	vector<string> all;
	vector<string> cold;
	vector<string> warm;
	vector<string> hot;
	all.push_back ("Incident Commander");
	Firefighter John("John", "Smith", all);
	Firefighter Dude ("Dude", "Lebowski", all);
	John.add(cold);
	Dude.add(cold);
	listAll(cold);



}
