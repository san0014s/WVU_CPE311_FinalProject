#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#


#define Min_MHR = 0.85;
#define Max_MHR = 0.90;

static double calories;

double HRtoVO2double(double MHR, double RHR);
double Zone(double HR);
void HRtoCalories(int m_or_f);

int main()
{
	double weight;
	int age;
	double T_distance;
	double calories;
	int m_or_f;

	puts("Please enter your case: press 1 for male or 2 for female.");
	scanf("%d", &m_or_f);
	HRtoCalories(m_or_f);

	//VO2max = HRtoVO2(HR)  
	//	MHR = 208 – 0.7 * Age;
	//RHR = avg(HR); over 20 seconds


	//RE = TotalEnergy / Distance; both from accelerometer
	//AT = 0.9 * MHR; anaerobic threshold
	//%% Pace yourself so that you are in Zone 1 for 70 to 80 percent of the time and in Zone 2 or 3 for the
	//rest
	//Pace = Zone(HR, Distance)


	//SaveData(); Save relevant data to RAM
	 
	return 0;
}

void HRtoCalories(int m_or_f)//calories might be a parameter)
{
	int Age;
	double weight;
	FILE* fptr;
	int time = 10;

	//switch statment
	switch(m_or_f)
	{
	case 1:
		puts("The user selected male.");

	
		puts("Please enter your age.");
		scanf("%d", &Age);

	
		puts("Please enter your weight.");
		scanf("%lf", &weight);

		//printf("Age & weight : %d, %.2lf", Age, weight);
		//calories = ((-55.0969 + (0.6309 x HR) + (0.1988 x Weight) + (0.2017 x Age))/4.184) x 60 x Time

		break;
	case 2:
		puts("The user selected female.");

		
		puts("Please enter your age.");
		scanf("%d", &Age);

		
		puts("Please enter your weight.");
		scanf("%lf", &weight);

		//calories = ((-20.4022 + (0.4472 x HR) - (0.1263 x Weight) + (0.074 x Age))/4.184) x 60 x Time
		break;
	default:
		puts("invalid character input.");
			break;
	}
	return;
}

double HRtoVO2double(double MHR, double RHR)
{
	//need clarification of MHR AND RHR(what thy are, but for now they are doubles

	double VO2_MAX = 15.3 * (MHR / RHR);

	return VO2_MAX;
}

double Zone(double HR) //not sure if we returning something
{
	double AT;
	if (HR <= 0.75 * AT)
	{
		//%% In Zone 1 and adjust pace accordingly
		/* aLL WILL BE DOUBLE
		  (Zone1*.75)
		* (Zone2*.10)
		* (Zone3*15)
		*/
	}
	else
	{
		//%% In Zone 2 or 3 and adjust pace accordingly
	}

	return;
}


//////////////////EVERYTHING BELOW THIS IS COMMENTS
		//Weight = System.in()   double weight
		//Age = System.in()		 int age
		//TargetDistance = System.in()		double T_distance
		//calories = HRtoCalories(HR, Time)	double calories            //all file scope
		//function HRtoCalories {
		// 
		// 
		// 
		// 
		// 
//case gender: female
	//calories = ((-20.4022 + (0.4472 x HR) - (0.1263 x Weight) + (0.074 x Age)) / 4.184) x 60 x Time
// case gender: male                                                                                           //switch statement??
	//calories = ((-55.0969 + (0.6309 x HR) + (0.1988 x Weight) + (0.2017 x Age)) / 4.184) x 60 x Time
	//}
	// 
	// 
	// 
	//VO2max = HRtoVO2(HR)  //file-scope
	// 
	//	MHR = 208 – 0.7 * Age;
	// 
	//RHR = avg(HR); over 20 seconds
	// 
	//	Function HRtoVO2{
	//	VO2max = 15.3 * (MHR / RHR)
	//}
	// 
	// 
	//RE = TotalEnergy / Distance; both from accelerometer
		//AT = 0.9 * MHR; anaerobic threshold
		//%% Pace yourself so that you are in Zone 1 for 70 to 80 percent of the time and in Zone 2 or 3 for the
		//rest
		//Pace = Zone(HR, Distance)
		// 
		// 
		//function Zone {
		//if HR& lt; = 0.75 * AT
		//	% %In Zone 1 and adjust pace accordingly
		//	Else
		//	% %In Zone 2 or 3 and adjust pace accordingly
	//}
	// 
	// 
	//SaveData(); Save relevant data to RAM
