#include <iostream>

using namespace std;



int main()
{
	int n,i;
	cout<<"please enter the number of robots that will be fighting each other(2 - 255):"<<endl;
	do{
		cin>>n;
	}while(n>2 && n<255);
	char robotsPrograms[255][100];
	cout<<"please enter the programms for the robots:\n your commands are the following:"<<endl;
	cout<<"\'f\' go forwards."<<endl;
	cout<<"\'r\' turn right."<<endl;
	cout<<"\'l\' turn left."<<endl;
	cout<<"\'x\' attack."<<endl;
	cout<<"\'?\' scan: if there is nothing in front(all the way to the wall), do the first thing after this mark; if there is a robot, do the second; if a wall, the third."<<endl;
	cout<<"\'<\' return to the beggining of the program.ALLWAYS USE AT THE END!"<<endl;
	cout<<"<number> skip the next <number> instructions."<<endl;
	cout<<"<CAPITAL LETTER> go back A-<LETTER> instructions."<<endl<<endl;
    for(i=0;i<n;i++){
		cin.getline(robotsPrograms[i],100);
    }

    return 0;
}
