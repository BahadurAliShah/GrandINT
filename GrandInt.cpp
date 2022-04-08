
/*
 * GrandInt.cpp
 *
 *  Created on: Mar 25, 2020
 *      Author: BADAR
 */

#include "GrandInt.h"

ostream &operator<<(ostream &out,const GrandInt &str){
	bool start =false;
	for(int i=0;i<60;i++){
		if((str.digit[i]>'0')&&(!start))
			start=true;
		if(start)
			out<<str.digit[i];
	}
	return out;
}

GrandInt::GrandInt() {
	digit ="000000000000000000000000000000000000000000000000000000000000";
}
GrandInt::GrandInt(int n){
    digit ="000000000000000000000000000000000000000000000000000000000000";
    unsigned int a=n;
    for(int i=1;a;i++,a/=10){
			digit[60-i]=a%10+48;
    }
}
GrandInt::GrandInt(string s){
    digit ="000000000000000000000000000000000000000000000000000000000000";
	int i;
	for(i=0;s[i];i++){
		if(s[i]<'0'||s[i]>'9'){
			cout<<"Error You Have Entered A Wrong No\n";
            exit(3);
		}
	}
	if(i>60)
        i=60;
    for(int j=0;s[j];i--,j++)
        digit[60-i]=s[j];
}

bool operator == (const GrandInt & str1,const GrandInt & str2){
	for(int i=0;str1.digit[i]||str2.digit[i];i++){
		if(str1.digit[i]!=str2.digit[i])
			return false;
	}
	return true;
}

bool operator != (const GrandInt & str1,const GrandInt & str2){
	return !(str1==str2);
}
bool operator > (const GrandInt & str1,const GrandInt & str2){
	for(int i=0;str1.digit[i]||str2.digit[i];i++){
		if(str1.digit[i]==str2.digit[i])
			continue;
		else if(str2.digit[i]<str1.digit[i])
			return true;
		else
			return false;
	}
	return false;
}
bool operator < (const GrandInt & str1,const GrandInt & str2){
	if(str1==str2)
		return false;
	else
		return !(str1>str2);
}
bool operator >= (const GrandInt & str1,const GrandInt & str2){
	if(str1==str2)
		return true;
	else
		return str1>str2;
}
bool operator <= (const GrandInt & str1,const GrandInt & str2){
	if(str1==str2)
		return true;
	else
		return (str1<str2);
}
GrandInt operator + (const GrandInt & str1,const GrandInt & str2){
    GrandInt sum;
    sum.digit ="000000000000000000000000000000000000000000000000000000000000";
    int a=0;
    for(int i=0;i<60;i++){
        a+=(str1.digit[59-i]-48)+(str2.digit[59-i]-48);
        sum.digit[59-i]=a%10+48;
        a/=10;
    }
    return sum;
}
GrandInt operator - (const GrandInt & str1,const GrandInt & str2){
    GrandInt sub;
    sub.digit ="000000000000000000000000000000000000000000000000000000000000";
    for(int i=0;i<60;i++){
        if(str1.digit[59-i]+sub.digit[59-i]-48>=str2.digit[59-i]){
            sub.digit[59-i]+=str1.digit[59-i]-str2.digit[59-i];
        }else{
            sub.digit[59-i]+=str1.digit[59-i]-str2.digit[59-i]+10;
            for(int j=1;((j+i)<60)&&(str1.digit[i]);j++){
                if(str1.digit[59-i-j]>48||sub.digit[59-i-j]>48){
                    sub.digit[59-i-j]--;
                    break;
                }else
                    sub.digit[59-i-j]+=9;
            }
        }
    }
    return sub;
}

istream &operator >>(istream &in,GrandInt &str){
    string a;
	in>>a;
	str=GrandInt(a);
	return in;
}
GrandInt::~GrandInt() {
	// TODO Auto-generated destructor stub
}

GrandInt::GrandInt(const GrandInt &other) {
	digit=other.digit;

}
