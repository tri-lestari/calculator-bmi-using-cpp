#include <iostream>
#define min 18.5

using namespace std;
const double maks = 24.9;

int main()
{
	string name;
	int u, bmi, bb, gender;
	float tb, ideal;
	
	cout<<"==========================================="<<endl;
	cout<<"CALCULATE IDEAL WEIGHT PROGRAM"<<endl;
	cout<<"=========================================== \n";
	
	cout<<"Halo!"<<endl;
	cout<<"Welcome, let's calculate your Body Mass Index \n"<<endl;
	
	cout<<"Input Your Name: ";
	cin>>name;
	cout<<"Input Your Age: ";
	cin>>u;
	cout<<"Input Your Weight(kg): ";
	cin>>bb;
	cout<<"Input Your Height(m): ";
	cin>>tb;
	
	cout<<"Choose Gender : "<<endl;
	cout<<"1. Men "<<endl;
	cout<<"2. Women"<<endl;
    cin>>gender;
    
    switch(gender){
    case 1:
            //Calculate Ideal Body Weight with Broca's Formula
			ideal = (tb-100)-((tb-100)*0.1);
            bmi = bmi = bb/(tb*tb);
			cout<<"YOUR BMI RESULTS : "<<bmi<<endl;
			cout<<endl;
			break;
	case 2:
			//Calculate Ideal Body Weight with Broca's Formula
			ideal = (tb-100)-((tb-100)*0.15);
			bmi = bmi = bb/(tb*tb);
			cout<<"YOUR BMI RESULTS : "<<bmi<<endl;
			cout<<endl;
	}
	
	cout<<endl;
	if (bmi<=18.5) {
		cout<<"You Lose Weight"<<endl;
		cout<<"Thank you for calculating your weight"<<endl;
		cout<<"Please Consult a Doctor Yes!"<<endl;
	} else if (bmi >18.5 && bmi <=25){
		cout<<"Your Ideal Body Weight"<<endl;
	} else if (bmi >25 && bmi <=30){
		cout<<"You are overweight"<<endl;
		cout<<"Thank you for calculating your weight"<<endl;
		cout<<"Please Consult a Doctor Yes!"<<endl;
	} else {
		cout<<"You are obese"<<endl;
		cout<<"Thank you for calculating your weight"<<endl;
		cout<<"Please Consult a Doctor Yes!"<<endl;
	}
	
	cout<<endl;
	cout<<"=========================================="<<endl;
	cout<<"               IDEAL STANDARDS            "<<endl;
	cout<<"=========================================="<<endl;
	cout<<"Height (cm)                  = "<<tb<<endl;
	cout<<"Ideal Weight         	    = "<<ideal<<endl;
	cout<<"=========================================="<<endl;
	cout<<endl;
	cout<<
	
	return 0;
}
