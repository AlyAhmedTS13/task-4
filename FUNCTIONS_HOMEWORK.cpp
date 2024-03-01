//problem1
#include <iostream>
#include <climits>
using namespace std;

int max (int a , int b ,int c){
	return max(a,max(b,c));

}
int max (int a , int b ,int c,int d){


	return max(a,max(b,c,d));

}


int max (int a , int b ,int c,int d,int e){


	return max(a,max(b,c,d,e));

}

int max (int a , int b ,int c,int d,int e,int f){


	return max(a,max(b,c,d,e,f));
}


int main() {



	cout<<max(1,2,3,4,5,9);




}

// problem 2

#include <iostream>
using namespace std;

string reverse_str(const string &str) {
    string reversed = str;
    int length = str.size();
    for (int i = 0; i < length / 2; ++i) {
        char temp = reversed[i];
        reversed[i] = reversed[length - i - 1];
        reversed[length - i - 1] = temp;
    }
    return reversed;
}

int main() {
    cout << reverse_str("abcd") << endl;
    cout << reverse_str("abcde") << endl;
    return 0;
}

//problem4
#include <iostream>
using namespace std;
void is_palindrome(){

	int n;
	cin>>n;
	int a[n];
	int x=1;
	for(int i=0;i<n;i++){
		cin>>a[i];

	}
		for(int i=0; i<n/2;i++){
			if(a[i]!=a[n-1-i]){
				x=0;
				break;
			}

		}

	if(x==1)
		cout<<"yes";
	else
		cout<<"no";





}
int main(){

	is_palindrome();
}

//problem5
#include <iostream>
using namespace std;

void power(int array[], int len , int m ) {
    array[0] = 1;
    for (int i = 1; i < len; i++) {
        array[i] = array[i - 1] * m;
    }
}

int main() {

    int array[100];
    int len,m;
    cin>>len>>m;
    power(array,len,m);


    for (int i = 0; i < len; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}


// problem 6
#include <iostream>
using namespace std;

bool is_prime(int num){
	if(num<=1){
		return false;
	}
	for(int i =2;i<num;i++){
		if(num%i==0){
			return false;
		}

	}
	return true;
}

int pos_prime(int pos){

	for(int i =2;;i++){
		if(is_prime(i)){
			pos-=1;
			if(pos==0){
				return i;
			}
		}
	}
}


int main() {
int pos;
cin>>pos;

	cout<<pos_prime(pos)<<" ";
}






