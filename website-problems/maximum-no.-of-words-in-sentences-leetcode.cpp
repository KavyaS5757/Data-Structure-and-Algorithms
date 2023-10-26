int mostWordsFound(vector<string>& sentences) {
        
        int maxi=0;
        
        for(string& sentence:sentences)
        {
            istringstream iss(sentence);
            vector<string>words(istream_iterator<string>{iss}, istream_iterator<string>());
            int len = words.size();
            maxi = max(maxi, len);
        }

        return maxi;
    }

/*
https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/
*/
