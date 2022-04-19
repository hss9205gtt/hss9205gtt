#include <bits/stdc++.h>
using namespace std;

int main(){

	int a,b;
	scanf("%d %d", &a, &b);
	int min = a < b ? a : b;
	int max = a < b ? b : a;

	deque<int> minMeasure;
	deque<int> maxMeasure;

    for(int i = 1; i <= max; i++){
        if(max % i == 0){

            maxMeasure.push_back(i);
        }
    }

    for(int i = 2, i2Start = 0; i <= min; i++){
        if(min % i == 0){
            for(int i2 = i2Start; i2 < maxMeasure.size(); i2++){
            if(maxMeasure.ar(i2) == i)
                i2Start = i2;
            }
        }


    }

    maxsize = minMeasure.size() > maxMeasure.size() ? minMeasure.size() : maxMeasure.size();
    //최대공약수

    //최소공배수
        for(int i = 0; i < maxsize;i++){

        }



	return 0;
}
