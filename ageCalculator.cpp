#include<bits/stdc++.h>
using namespace std;

bool isLeapYear(int year){
    return (year%400 || (year%4==0 && year%100!=0));
}

int main()
{
    int month[] = {0,31,28,31,30,31,30,31,31,30,31,30,31}; //month starts from 1 to 12
    int d1,m1,y1; //current days, months, year
    int d2,m2,y2; //born days, months, year
    char s;

    cin>>d1>>s>>m1>>s>>y1;
    cin>>d2>>s>>m2>>s>>y2;

    int totalDays =0;
    int leapYearCount=0;
    for(int i=y2+1;i<y1;i++){
        if(isLeapYear(i)){
            totalDays += 366;
            leapYearCount++;
        }
        else
            totalDays +=365;
    }
    cout<<"Total days between year = "<<totalDays<<endl;

    if(isLeapYear(y2)){
        month[2] = 29;
    }
    int totalDaysInBornYear = month[m2]-d2;
    for (int i=m2+1;i<=12;i++){
        totalDaysInBornYear += month[i];
    }

    cout<<"Total days in born year = "<<totalDaysInBornYear<<endl;

    if(isLeapYear(y1)){
        month[2] = 29;
    }
    else {
        month[2] = 28;
    }

    int totalDaysInCurrentYear = d1;

    for(int i=1;i<m1;i++){
        totalDaysInCurrentYear+=month[i];
    }

    cout<<"Total days in current year "<<totalDaysInCurrentYear<<endl;

    totalDays += totalDaysInCurrentYear+totalDaysInBornYear;

    cout<<"Total days in final "<<totalDays<<endl;
    int finalYear = totalDays/365;
    totalDays -= finalYear*365;
    int finalMonth = (totalDays/30);
    totalDays -= finalMonth*30;
    int finalDays = totalDays;

    cout<<finalYear<<" years "<<finalMonth<<" months and "<<finalDays<<" days"<<endl;

}


