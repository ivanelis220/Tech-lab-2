#pragma once
#include <iostream>
#include <string>
using namespace std;

class Train
{
	string sEndPoint; //Названия пункта прибытия
	string sTrainNum; //Номер поезда
	string sTimeStart;//Время отъезда
public:
	Train();
	Train(const Train& obj);
	~Train();

	void setEndPoint(string _sEndPoint);
	void setTrainNum(string _sTrainNum);
	void setTimeStart(string _sTimeStart);

	string getEndPoint();
	string getTrainNum();
	string getTimeStart();

	friend ostream& operator<<(ostream& stream, Train& obj);
};