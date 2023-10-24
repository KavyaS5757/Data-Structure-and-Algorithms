string delAlternate(string S) {
        // code here
        string A ;
        for(int i=0; i<S.length(); i+=2)
        {
            A += S[i];
        }
        return A;
    }

/*
https://practice.geeksforgeeks.org/problems/java-delete-alternate-characters4036/1
*/
