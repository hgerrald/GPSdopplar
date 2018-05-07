// This application uses the NavParser class to read in the data from a 
// RINEX 2.10 .nav file into usable data. The standards for this type of
// file can be found at ftp://igs.org/pub/data/format/rinex210.txt
// David Lynge 10-April-2018

#include <iostream>
#include <string>
#include "RinexNav.h"

using namespace std;

int main()
{
	NavParser NavMessage;
	
	double rec[3] = {654572, -5210045, 3608339}; 

	NavMessage.ReadData("C:/Users/David/Desktop/COM3_180409_175344.nav");

	NavMessage.EphCalc(13, 54, 2.997, rec);

	//for (int i = 0; i < 3; i++)
		//cout << NavMessage.vecEph.at(i).PRN << "    Doppler:     " << endl;

	cin.get();
	return 1;
}

