
/*
 * GrandInt.h
 *
 *  Created on: Mar 25, 2020
 *      Author: BADAR
 */

#ifndef GRANDINT_H_
#define GRANDINT_H_
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
class GrandInt {
	string digit;
public:
	friend std::ostream &operator<<(std::ostream &out,const GrandInt &str);
	GrandInt();
	GrandInt(int n);// should convert n int to a string and store it
	GrandInt(string s);//should directly equate it to passed string
	friend bool operator == (const GrandInt & str1,const GrandInt & str2);
	friend bool operator != (const GrandInt & str1,const GrandInt & str2);
	friend bool operator > (const GrandInt & str1,const GrandInt & str2);
	friend bool operator < (const GrandInt & str1,const GrandInt & str2);
	friend bool operator >= (const GrandInt & str1,const GrandInt & str2);
	friend bool operator <= (const GrandInt & str1,const GrandInt & str2);
	friend GrandInt operator + (const GrandInt & str1,const GrandInt & str2);
	friend GrandInt operator - (const GrandInt & str1,const GrandInt & str2);
	friend std::istream &operator>>(std::istream &in,GrandInt &str);
	virtual ~GrandInt();
	GrandInt(const GrandInt &other);
};

#endif /* GRANDINT_H_ */
