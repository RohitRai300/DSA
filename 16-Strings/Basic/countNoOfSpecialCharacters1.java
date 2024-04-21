/*
 * LC-3120: Count the Number of Special Characters I
You are given a string word. A letter is called special if it appears both in lowercase and uppercase in word.

Return the number of special letters in word.

 
Example 1:

Input: word = "aaAbcBC"

Output: 3

Explanation:

The special characters in word are 'a', 'b', and 'c'.

Example 2:

Input: word = "abc"

Output: 0

Explanation:

No character in word appears in uppercase.

Example 3:

Input: word = "abBCab"

Output: 1

Explanation:

The only special character in word is 'b'.
 */

public class countNoOfSpecialCharacters1 {
    public int numberOfSpecialChars(String word) {
        int count=0;
       int arrSmall[] = new int[26];
       int arrCaps[] = new int[26]; 
        for(int i=0;i<word.length();i++){
            if(word.charAt(i) <= 90)
                arrSmall[word.charAt(i) - 65]++;
            else
                arrCaps[word.charAt(i) - 97]++;
        }
        
        for(int i=0;i<26;i++){
            if(arrSmall[i]!=0 && arrCaps[i]!=0)
                count++;
        }
        return count;
    }
}
