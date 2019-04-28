#include <iostream>


using namespace std;

int digitSum(int i)
   {
	   int sum=0;
	   if(i==0)
	     {
			 return i;
	      }
	   else 
	     {
			 sum+= (i%10) + digitSum(i/10);
	      }
	      return sum;
   }
int main()
{
	cout << "digitSum(1364) is equal to the sum of " <<digitSum(1364) <<endl;
	cout << "digitSum(-1364) is equal to the sum of " <<digitSum(-1364) <<endl;
	cout << "digitSum(152) is equal to the sum of " <<digitSum(152) <<endl;
	cout << "digitSum(33) is equal to the sum of " <<digitSum(33) <<endl;
	cout << "digitSum(1000000000) is equal to the sum of " <<digitSum(1000000000) <<endl;
}
