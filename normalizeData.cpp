#include<bits/stdc++.h>
using namespace std;


double meanCalculator(vector <double> &data)
{
    double size = data.size();
    double sum = 0;
    for(int i=0;i<size;i++)
    {
        sum+=data[i];

    }

    return sum/size;
}

double standardDaviationCalculator(vector <double> data)
{
    double mean = meanCalculator(data);
    int size = data.size();
    double sum = 0;
    for(int i=0;i<size;i++)
    {
        double temValue = data[i];
        temValue = pow(temValue-mean,2);
        sum+=temValue;
    }

    return sqrt(sum/(size*1.0));
}

void normalizeData(vector<double> &data)
{
    double mean = meanCalculator(data);
    double deviation = standardDaviationCalculator(data);

    int size = data.size();

    for(int i=0;i<size;i++)
    {
        double tempValue = (data[i] - mean) / deviation;
        data[i] = tempValue;
    }

}

int main()
{
    vector <double> example = {-5, 6, 9, 2, 4};

    normalizeData(example);
    cout<<"data after normalize\n";
    int size = example.size();

    for(int i=0;i<size;i++)
    {
        cout<<example[i]<<endl;

    }
}
