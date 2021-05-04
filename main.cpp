#include <iostream>
#include<vector>
using namespace std;
//Use '_' instead of '-'
//
class Firefighter{
	private:

	public:
		string name;
		Firefighter(string first, string last, vector<string> &all){
			name = first + " " + last;
			all.push_back(name);
		}
		void add(vector<string> &location){		
			location.push_back(name);

		}

		void remove(vector<string> &location){
			for (int i = 0; i <location.size(); i++){
				cout << location[i] << endl;
				//int z = i;
				if (location[i] == name){
					location.erase(location.begin() + i);
					break;
					}
				else
					continue;
				}
					
			}
		
			
			
};

void list(vector<string> &location){
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
	Dude.add(warm);
	Dude.remove(cold);
	list(cold);
	list(warm);



}
