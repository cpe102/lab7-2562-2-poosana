#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

//[Missing Code 1] Write definition of the function findGrade() here.
char findGrade(float x){
	char output;
	if(x>90) output = 'A';
	else if(x>75) output = 'B';
	else if(x>60) output = 'C';
	else if (x>45) output = 'D';
	else output = 'F';
	return output;

}

int main(){
	//Input the number of students
	int N,i = 0;
	cout << "Enter the number of students: ";
	cin >> N;
	string name[N],Inname;
	float score[N],Inscore;	
	
	//Store names and scores of students into an array 
	while(i < N){
		cout << "Name of student " << i+1 << ": ";
		cin.ignore();
		
		getline(cin,Inname);
		cout <<"score of student "<<i+1<<":";
		cin >> Inscore;
		name[i] = Inname;
		score[i] = Inscore;
		
		i++;
	}
	
	//Print names scores and grades
	i = 0;
	cout << "---------------------------------------------\n";
	cout << setw(25) << "Name" << setw(8) << "Score" << setw(8) << "Grade" << "\n";
	cout << "---------------------------------------------\n";
	while(i < N){
		cout << setw(25) << name[i] << setw(8) << score[i] << setw(8) << findGrade(score[i]) << "\n";
		i++;
	} 
	cout << "---------------------------------------------\n";

	return 0;
}
