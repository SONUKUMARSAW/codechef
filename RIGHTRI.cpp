#include <iostream>
#include<math.h>
using namespace std;

int main(){

	int n,count=0;             //number of test cases and no of right triangles
	
	int x1,x2,x3,y1,y2,y3;  //co-ordinates
	int a,b,c;			    //for length of sides
	
	

	cin>>n;
	while(n--){

		//coordinate inputs

		cin>>x1>>y1>>x2>>y2>>x3>>y3;	
		
		//calculating the sides

		a= (pow((x1-x2),2)+pow((y1-y2),2));
		b= (pow((x2-x3),2)+pow((y2-y3),2));
		c= (pow((x1-x3),2)+pow((y1-y3),2));

		if((a+b==c)||(b+c==a)||(c+a==b)){
			count++;
		}

	}
	cout<<count<<endl;
	return 0;
}