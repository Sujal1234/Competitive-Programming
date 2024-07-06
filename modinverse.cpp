int modpow(int x, int n, int m){
	//binary exponentiation
	if(n==0) return 1%m;
	
	ll u = modpow(x, n/2, m);
	u = (u*u) % m;
	if(n&1) u = (u * x) % m;
	return u;
}

int inv_prime(int a, int b){
	//when b is prime;
	return modpow(a, b-2, b);
}
