#pragma once
class student {
	char* nameStudent;
	float math, english, history;
	int average;
public:
	void setName(char* theName);
	
	void setGradeMath(float val);
	float getGradeMath();

	void setGradeEngl(float val);
	float getGradeEngl();
	
	void setGradeHist(float val);
	float getGradeHist();
	
	void calcAverage();
	char* getName() ;
	int getCalcAverage() const;
};


