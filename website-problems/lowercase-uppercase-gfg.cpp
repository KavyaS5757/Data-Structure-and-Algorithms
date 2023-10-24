string to_upper(string str){
    //code
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]>=97 && str[i]<=122)
        {
            str[i]-=32;
        }
    }
    return str;
    
}
/*
https://practice.geeksforgeeks.org/problems/lower-case-to-upper-case3410/1
*/
