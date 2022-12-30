#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

struct person{
	string name;
	string tel;
	string email;
	
};

int main(){
	struct person p[5];
	
	ofstream out;
	out.open("file1.txt");
	
	
	for(int i=0 ; i<3 ; i++){
		
		cin >> p[i].name;
		cin >> p[i].tel;
		cin >> p[i].email;
		
		out << p[i].name <<"\t"<< p[i].tel <<"\t"<< p[i].email <<endl;
	}
	
	out.close();
	
	cout <<"do you wand to add 4th contact? (y/n): ";
	char a;
	cin>> a;
	if (a == 'y'){
		out.open("file1.txt");
		cin >> p[0].name;
		cin >> p[0].tel;
		cin >> p[0].email;
		
		out << p[0].name <<"\t"<< p[0].tel <<"\t"<< p[0].email <<endl;
	}
	out.close();
	
	
	ifstream in;
	in.open("file1.txt");
	
	cout << "Enter the name for searching in the list: ";
	string s;
	cin >> s;
	bool flag=0;
	
	for(int i=0 ; i<3 ; i++){
		if((p[i].name) == s){
			cout << p[i].name <<"\t"<< p[i].tel <<"\t"<< p[i].email;
			flag = 1;
		}
	}
	
	if(flag==0){
		cout <<"Not Found!";
	}
	
	in.close();
		
	return 0;
}