#include <iostream>
using namespace std;

int per(int a ,int g){
	
	int k = 0;	
	if (a==0){
		return 0;
	}
	for (int i = 0; i <= a; i++){
		cout << " ";
	} 
	while( k < g){
		cout << "o" ;
		k = k + 1;
	}
	cout << endl;
	
	

return  per(a-1, g+2);

}





int main(){
	int h;
	cin >> h;
	per(h,1);

}





