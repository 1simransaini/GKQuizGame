//A General Knowledge Quiz game created using C++
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    //Welcome and enjoy the game!
cout<<"\n\n\n";
cout<<"                      ====="<<endl;
cout<<"                    ==      =="<<endl;
cout<<"                   ==  O   O == "<<endl;
cout<<"                   ==    u   ==    "<<endl;
cout<<"                    ==      ==               " <<endl;
cout<<"                       ====                       "<<endl;
cout<<"                        ==    "                   <<endl;
cout<<"                        ==    "                   <<endl;
cout<<"                    =============      \\|/      "<<endl;
cout<<"                   ==            ==     ==     "<<endl;
cout<<"                   ==            ==    ==      "<<endl;
cout<<"                   ==            ==   ==        "<<endl;
cout<<"                   ==            ==  ==         " <<endl;
cout<<"                   ==            == ==          "<<endl;
cout<<"                   ==             === ";
cout<<"\n\n\n\n\n";
cout<<"||            ||  ||=====   ||        ====      ====     ||\\  //||  ||======"<<endl;
cout<<" ||          ||   ||        ||      ==        ==    ==   || \\// ||  ||      "<<endl;
cout<<"  ||   ||   ||    ||====    ||      ==       ==      ==  ||     ||  ||====  "<<endl;
cout<<"   || |||| ||     ||        ||      ==        ==    ==   ||     ||  ||      "<<endl;
cout<<"    ||    ||      ||======  ||====    ====     =====     ||     ||  ||======"<<endl;
cout<<endl;

    //List of Question in the Quiz
	string questions[10] = {
	"Which of the following is Super Computer of India?",
	"Which of the Following is false about the Computer?",
	"Office of strategic service (OSS) was old name of which Intelligence agency?",
	"Which is the smallest unit of memory",
	"Who laid first step on the Moon?",
	"What is the capital of Rajasthan?",
	"Ogaden desert is present in__________?",
	"Capital of India is___________?",
	"What is the full form of ISRO?",
	"Where is the headquarters of ISRO?"
						};

    //Multiple Choices of the questions                    
	string options[10][4] = {
	{"Wipro","Param","Amul","Panda"},
	{"High IQ","stores the data","Very fast processing","Versatile Machine"},
	{"MI6","CIA","ISI","N.O.T"},
	{"Kilobyte","Byte  ","Megabyte  ","Nibble"},
	{"LMP Edgar","CMP Stuart","Neil Armstrong","None of them"},
	{"Udaipur","Jaipur","Jodhpur","Pilani"},
	{"Europe","Asia","Africa","America"},
	{"Delhi","Bengaluru","Chennai","Kolkata"},
	{"Indian Scholar Research Organization","Indian Space Research Organization","Indian Station Research Organization","None of these"},
	{"Chennai","Mumbai","Bengaluru","Pune"},
					    };

    //Correct Answers of the Questions                    
	string correctOptions[10] = {
		"Param","High IQ","CIA","Byte  ",
		"Neil Armstrong","Jaipur","Africa",
		"Delhi","Indian Space Research Organization"," Bengaluru"
								};
	int userOptions[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int totalQuestion = 10;	
	int op;

	//----- Conducting Quiz -----
	for( int i=0; i<totalQuestion; i++ ){
		cout<<"Question # "<<(i+1)<<endl;
		cout<< questions[i]<<endl;
		cout<< "1."<<options[i][0]<<endl;
		cout<< "2."<<options[i][1]<<endl;
		cout<< "3."<<options[i][2]<<endl;
		cout<< "4."<<options[i][3]<<endl<<endl;
		
		cout<<"Select Option (1-4) or 0 to skip and press enter: ";
		cin >> userOptions[i];
		cout<<endl<<"-----------------------------"<<endl<<endl;
	}
	
	//-----For Printing the Correct Options -----
	cout<<"======= ======= ======= ======= ======= ======= "<<endl;
	cout<<"======= Correct Options to the Questions ======= "<<endl;
	cout<<"======= ======= ======= ======= ======= ======= "<<endl;

	for( int i=0; i<totalQuestion; i++ ){
		cout<<"Question # "<<(i+1)<<endl;
		cout<< questions[i]<<endl;
		cout<< "1."<<options[i][0]<<endl;
		cout<< "2."<<options[i][1]<<endl;
		cout<< "3."<<options[i][2]<<endl;
		cout<< "4."<<options[i][3]<<endl;
		
		if( userOptions[i] == 0 ){
			cout<< "You Skipped this Question."<<endl;		
		}else{
			cout<< "You Selected : "<<options[i][userOptions[i]-1]<<endl;		
		}
		cout<< "Correct Option : "<<correctOptions[i]<<endl<<endl;

		cout<<"Press any key to continue..."<<endl;
		getch();
		cout<<endl<<"------------------"<<endl;
	}
	
	//----- Printing Result -----
	cout<<endl<<endl;
	cout<<"======= ======= ======= ======= "<<endl;
	cout<<"=======      Result     ======= "<<endl;
	cout<<"======= ======= ======= ======= "<<endl;

    //Code to count total score the user scored in the quiz

	int correct = 0;
	int incorrect = 0;
	int skipped = 0;
	for( int i=0; i<totalQuestion; i++ ){
		if( userOptions[i] != 0 ){
			if( correctOptions[i] == options[i][userOptions[i]-1] ){
				correct++;
			}else{
				incorrect++;
			}
		}else{
			skipped++;
		}
	}
	cout<< "Total Questions : "<< totalQuestion <<endl;	
	cout<< "Correct : "<< correct <<endl;
	cout<< "In-Correct : "<< incorrect <<endl;
	cout<< "Skipped : "<< skipped <<endl;

cout<<"\n\n\n";
cout<<"                      ====="<<endl;
cout<<"                    ==      =="<<endl;
cout<<"                   ==  O   O == "<<endl;
cout<<"                   ==    u   ==    "<<endl;
cout<<"                    ==      ==               " <<endl;
cout<<"                       ====                       "<<endl;
cout<<"                        ==    "                   <<endl;
cout<<"                        ==    "                   <<endl;
cout<<"                    =============      \\|/      "<<endl;
cout<<"                   ==            ==     ==     "<<endl;
cout<<"                   ==            ==    ==      "<<endl;
cout<<"                   ==            ==   ==        "<<endl;
cout<<"                   ==            ==  ==         " <<endl;
cout<<"                   ==            == ==          "<<endl;
cout<<"                   ==             === ";
cout<<"\n\n\t\t\t\t\tThanks For Playing!!!!!";
    cout<<endl;
	
	getch();
	return 0;

    //---------END----------
}
