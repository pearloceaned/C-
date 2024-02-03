#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
	string temp= "ga.txt";
	ifstream file;
	file.open(temp);
	if(file){
		cout<<"file is open"<<endl;
	} else if(!file){
		cout<<"file is not open"<<endl;
	}
	file.close();
	return 0;
}
