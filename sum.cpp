#include "sum.h"

int sum(int n){
	int hap = 0;
	for(int i = 1; i <= n; i++){
		hap += i;
	}
	return hap;
}
