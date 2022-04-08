//============================================================================
// Name        : Q01.cpp
// Author      : Syed Bahadur Ali (i191783)
// Version     :
// Copyright   : Your copyright notice
// Description : Assignment # 4, Ansi-style
//============================================================================
#include"GrandInt.h"
int main()
{
   //starting with small numbers

   GrandInt num1(546);
   GrandInt num2(60);

   cout<<num1+num2<<endl;//606
   cout<<num1-num2<<endl;//486
   cout<<(num1>num2)<<endl;//1
   cout<<(num1<num2)<<endl;//0
   cout<<(num1==num2)<<endl;//0
   cout<<(num1!=num2)<<endl;//1
   cout<<(num1==num2)<<endl;//0
   cout<<(num1!=num1)<<endl;//0


   //going heavy..........
   GrandInt num3("34434554974674859574");
   GrandInt num4("1233");
   cout<<num3+num4<<endl;//34434554975109203034
   cout<<num3-num4<<endl;//34434554974240516114
   cout<<(num4>num3)<<endl;//0
   cout<<(num3<num4)<<endl;//0
   cout<<(num4==num4)<<endl;//1
   cout<<(num4!=num2)<<endl;//1
   cout<<(num4==num2)<<endl;//0
   cout<<(num4!=num4)<<endl;//0

}
