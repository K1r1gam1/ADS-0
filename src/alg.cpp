// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    int res;
    while (b != 0)
    {
    	res = a % b;
    	a = b;
    	b = res;
    }	
    return a;
}
