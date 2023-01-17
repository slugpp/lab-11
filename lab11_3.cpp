#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <cmath>

using namespace std;

float mean(float sum, float num)
{    
    return sum/num;
}

float st(float m, float num, float x)
{
    return sqrt((x/num) - pow(m, 2));
}

int main(){
    ifstream source;
    source.open("score.txt");
    string text;
    float sum, sumup;
    int i = 0;
	while(getline(source, text))
	{
        sum += atof(text.c_str());
        sumup += pow(atof(text.c_str()), 2);
        i++;
	}
    source.close();
    cout << "Number of data = " << i << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean(sum, i) << endl;
    cout << "Standard deviation = " << st(mean(sum, i), i, sumup) << endl;
}