/*
https://leetcode.com/problems/count-primes/
*/
bool isprime(int n)
    {
        if(n<=1)
        {
            return false;
        }
        if(n<=3)
        {
            return true;
        }
        if( n % 2 == 0 || n % 3 == 0 )
        {
            return false;
        }
        for(int i=5; i*i <= n;i+=6)
        {
            if( n % i == 0 || n % (i+2) == 0)
            {
                return false;
            }
        }
        return true;
    }

    int countPrimes(int n) {

        if(n<=2)
        {
            return 0;
        }
        int count = 1;
        for(int i=3; i<n; i++)
        {
            if(isprime(i))
            {
                count ++;
            }
        } 
        return count;
    }

/*
Result :- the time limit is exceeding due to the usage of function it seems
*/

/*
Sieve of Eratosthenes method
*/
vector<int> sieve(int n){
        vector<bool> isPrime(n+1, true);
        isPrime[0] = isPrime[1] = false;
        for(int i=2; i*i <=n; i++)
        {
            if(isPrime[i])
            {
                for(int j=i*i; j<=n; j+=i)
                {
                    isPrime[j]=false;
                }
            }
        }

        vector<int>primes;
        for(int i=2; i<n; i++)
        {
            if(isPrime[i])
            {
                primes.push_back(i);
            }
        }
        return primes;
    }

    int countPrimes(int n)
    {
        if(n<=2)
        {
            return 0;
        }
        vector<int>primes = sieve(n);
        return primes.size();
    }
